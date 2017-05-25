<?php

/**
 * @file
 * Form-related hooks.
 */

function registration_entityreference_registration_entity_settings($settings) {
  $settings_form = array();

  // The fieldset for entity reference settings.
  $settings_form['entity_reference'] = array(
    '#type'        => 'fieldset',
    '#title'       => t('Referenced entities'),
    '#collapsible' => TRUE,
    '#collapsed'   => TRUE,
  );

  // Checkbox for enabling entity reference functionality.
  $settings_form['entity_reference']['entity_reference_enable'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('Enable registrations of referenced entities'),
    '#default_value' => isset($settings['settings']['entity_reference']['entity_reference_enable']) ? $settings['settings']['entity_reference']['entity_reference_enable'] : FALSE,
  );

  // Options for selecting the entity type of references used in the
  // registration.
  $entity_types = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    $entity_types[$entity_type] = $entity_info['label'];
  }
  $settings_form['entity_reference']['entity_reference_target_type'] = array(
    '#type'          => 'select',
    '#title'         => t('Target type'),
    '#options'       => $entity_types,
    '#default_value' => isset($settings['settings']['entity_reference']['entity_reference_target_type']) ? $settings['settings']['entity_reference']['entity_reference_target_type'] : NULL,
    '#description'   => t('The entity type that can be referenced through this field.'),
    '#size'          => 1,
  );

  return $settings_form;
}

/**
 * Implements hook_form_FORM_ID_alter() for registration_form().
 */
function registration_entityreference_form_registration_form_alter(&$form, &$form_state, $form_id) {
  $settings = $form['#registration_settings']['settings'];

  if (isset($settings['entity_reference']) && $settings['entity_reference']['entity_reference_enable']) {
    $entity_reference_target_type = $settings['entity_reference']['entity_reference_target_type'];
    $entity_info = entity_get_info($entity_reference_target_type);

    $registration = $form_state['build_info']['args'][0];
    $wrapper = entity_metadata_wrapper('registration', $registration);
    $target_entity = $wrapper->target_entity;

    $entity_options = array(0 => t('None'));
    foreach (entity_load($entity_reference_target_type) as $entity_id => $entity) {
      $entity_options[$entity_id] = entity_label($entity_reference_target_type, $entity);
    }
    asort($entity_options);

    $form['target_entity'] = array(
      '#type'          => 'select',
      '#title'         => $entity_info['label'] . ':',
      '#description'   => t('Select a target entity.'),
      '#options'       => $entity_options,
      '#default_value' => ($target_entity->value() ? $target_entity->getIdentifier() : 0),
      '#states'        => array(
        'visible' => array(
          ':input[name="who_is_registering"]' => array(
            'value' => REGISTRATION_ENTITYREFERENCE_REGISTRANT_TYPE_ENTITY_REFERENCE,
          ),
        ),
      ),
      // @todo check access
      '#access'        => TRUE,
    );

    $form['who_is_registering']['#options'] += array(
      REGISTRATION_ENTITYREFERENCE_REGISTRANT_TYPE_ENTITY_REFERENCE => t('Selected !entity_type', array(
        '!entity_type' => $entity_info['label'],
      )),
    );
    if ($target_entity->value()) {
      $form['who_is_registering']['#default_value'] = REGISTRATION_ENTITYREFERENCE_REGISTRANT_TYPE_ENTITY_REFERENCE;
    }

    // Append custom validation handler.
    $validate_callbacks = $form['#validate'];
    $validate_callbacks[] = 'registration_entityreference_form_registration_form_validate';
    $form['#validate'] = $validate_callbacks;

    // Prepend custom submission handler.
    $submit_callbacks = $form['#submit'];
    $submit_callbacks[] = 'registration_entityreference_form_registration_form_submit';
    $form['#submit'] = array_reverse($submit_callbacks);
  }
}

/**
 * Form validation handler for registration_form().
 *
 * @see registration_form_validate()
 * @see registration_entityreference_form_registration_form_submit()
 */
function registration_entityreference_form_registration_form_validate($form, &$form_state) {
  $settings = $form['#registration_settings']['settings'];

  if (isset($settings['entity_reference']) && $settings['entity_reference']['entity_reference_enable']) {
    // @todo validate
  }
}

/**
 * Form submission handler for registration_form().
 *
 * @see registration_form_submit()
 * @see registration_entityreference_form_registration_form_submit()
 */
function registration_entityreference_form_registration_form_submit($form, &$form_state) {
  $settings = $form['#registration_settings']['settings'];

  if (isset($settings['entity_reference']) && $settings['entity_reference']['entity_reference_enable']) {
    $entity_reference_target_type = $settings['entity_reference']['entity_reference_target_type'];
    $registration = $form_state['registration'];

    if ($form_state['values']['who_is_registering'] == REGISTRATION_ENTITYREFERENCE_REGISTRANT_TYPE_ENTITY_REFERENCE) {
      $registration->target_entity_id = $form_state['values']['target_entity'];
      $registration->target_entity_type = $entity_reference_target_type;
    }
  }
}
