<?php

/**
 * @file
 * Hooks, functions, and callbacks for Redhen Lead Form admin forms.
 */


/**
 * Generates the RedHen Lead Gen form editing form.
 */
function redhen_lead_form_form($form, &$form_state, $lead_form, $op = 'edit') {
  $contact_options = _redhen_contact_types_build_options();
  if (empty($contact_options)) {
    drupal_set_message(t('You must !create_a_redhen_contact_type before you can create a lead form.', array(
      '!create_a_redhen_contact_type' => l(t('create a RedHen contact type'), 'admin/structure/redhen/contact_types'),
    )), 'warning');
    return;
  }

  if ($op == 'clone') {
    $lead_form->label .= ' (cloned)';
    $lead_form->name = '';
  }

  // Define a leadgen_settings vertical tab set.
  $form['leadgen_settings'] = array(
    '#type' => 'vertical_tabs',
  );

  // Start by making a fake block form and invoking all of the expected hooks.
  module_load_include('inc', 'block', 'block.admin');
  $form = block_admin_configure($form, $form_state, 'redhen_lead_form', $lead_form->name);
  $fake_hooks = array('form', 'form_block_add_block_form');
  $fake_formid = 'block_admin_configure';
  drupal_alter($fake_hooks, $form, $form_state, $fake_formid);

  // Reset the title. The block form embed process may have modified it.
  if (!empty($lead_form->label)) {
    drupal_set_title(t('Edit %lead_form', array('%lead_form' => $lead_form->label)), PASS_THROUGH);
  }

  // Remove submit handlers; they're manually executed as part of entity save.
  // @see RedhenLeadFormController::save()
  $form['#submit'] = array();
  unset($form['#after_build']);

  // Create block configuration subset of fields.
  $form['block_config']['#tree'] = TRUE;
  $form['block_config']['#weight'] = -8;

  // Move all block configurations into our subset.
  $form['block_config']['regions'] = $form['regions'];
  $form['block_config']['visibility'] = $form['visibility'];
  $form['block_config']['settings'] = $form['settings'];
  unset($form['regions']);
  unset($form['visibility']);
  unset($form['settings']);

  // Move the regions fieldset into the leadgen_settings group.
  $form['block_config']['regions']['#group'] = 'leadgen_settings';
  $form['block_config']['regions']['#weight'] = 10;

  // Move and modify the visibility group to be a fieldset in our group.
  $form['block_config']['visibility']['#title'] = $form['visibility_title']['#title'];
  $form['block_config']['visibility']['#weight'] = 11;
  unset($form['visibility_title']);
  $form['block_config']['visibility']['#type'] = 'fieldset';
  $form['block_config']['visibility']['#group'] = 'leadgen_settings';
  $form['block_config']['visibility']['#collapsible'] = TRUE;
  $form['block_config']['visibility']['#collapsed'] = TRUE;
  unset($form['block_config']['visibility']['#attached']);

  // Move the block settings fieldset just below the label field.
  $form['block_config']['settings']['#weight'] = 0;
  $form['block_config']['settings']['title']['#title'] = t('Form title');
  $form['block_config']['settings']['title']['#description'] = t('The title displayed above the form when presented to the user.');

  // Set default block configuration values.
  if (isset($lead_form->settings)) {
    _redhen_lead_form_set_block_config_defaults($form, $lead_form->settings['block_config']);
  }

  // Lead Gen Form name.
  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $lead_form->label,
    '#description' => t('The human-readable name of this lead form. This will only be shown to administrators.'),
    '#required' => TRUE,
    '#size' => 30,
    '#weight' => -10,
  );

  // Machine-readable type name.
  $form['name'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($lead_form->name) ? $lead_form->name : '',
    '#maxlength' => 32,
    '#disabled' => $lead_form->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'redhen_lead_form_load',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this lead form. It must only contain lowercase letters, numbers, and underscores.'),
    '#weight' => -9,
  );

  // RedHen Contact settings.
  $form['contact'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contact settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'leadgen_settings',
    '#tree' => TRUE,
  );

  // RedHen contact type.
  $form['contact']['contact_type'] = array(
    '#type' => 'select',
    '#title' => t('Contact type'),
    '#options' => $contact_options,
    '#default_value' => isset($lead_form->settings['contact']['contact_type']) ? $lead_form->settings['contact']['contact_type'] : key($contact_options),
    '#description' => t('Select the type of RedHen Contact (and its associated fields) to use for this lead form.'),
    '#required' => TRUE,
  );

  // RedHen contact session handling.
  $form['contact']['session'] = array(
    '#type' => 'checkbox',
    '#title' => t('Save contact in session'),
    '#description' => '<p>' . t('If checked, the generated contact will be stored and used on future lead forms of the same contact type.') . '</p>' .
      '<p>' . t('Instead of subsequently having to fill out all fields again, the user will only see the CTA button in its place. Note this has performance implications.') . '</p>',
    '#default_value' => isset($lead_form->settings['contact']['session']) ? $lead_form->settings['contact']['session'] : 0,
  );

  // CTA settings.
  $form['cta'] = array(
    '#type' => 'fieldset',
    '#title' => t('CTA settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'leadgen_settings',
    '#tree' => TRUE,
  );

  // Submit button text.
  $form['cta']['button_text'] = array(
    '#type' => 'textfield',
    '#length' => 50,
    '#title' => t('CTA button text'),
    '#required' => TRUE,
    '#default_value' => isset($lead_form->settings['cta']['button_text']) ? $lead_form->settings['cta']['button_text'] : '',
    '#description' => t('The text of the CTA form submit button.'),
  );

  // CTA Action Type.
  $form['cta']['type'] = array(
    '#type' => 'radios',
    '#title' => t('Action type'),
    '#description' => t('Choose whether the form CTA behaves the same way everywhere this form is placed or dynamically based on the context of the page.'),
    '#options' => array(
      'static' => t('Static action'),
      'dynamic' => t('Dynamic action'),
    ),
    '#default_value' => isset($lead_form->settings['cta']['type']) ? $lead_form->settings['cta']['type'] : 'static',
    '#required' => TRUE,
  );

  // Static CTA URL.
  $form['cta']['static']['url'] = array(
    '#type' => 'textfield',
    '#length' => 255,
    '#title' => t('Static path'),
    '#default_value' => isset($lead_form->settings['cta']['static']['url']) ? $lead_form->settings['cta']['static']['url'] : '',
    '#description' => '<p>' . t('After a RedHen Contact record is created, the user will be redirected to this URL or path.') . '</p>' .
      '<p>' . t('You might use this to direct users to a download or confirmation page after submitting the form.') . '</p>',
    '#states' => array(
      'visible' => array(
        ':input[name="cta[type]"]' => array('value' => 'static'),
      ),
      'required' => array(
        ':input[name="cta[type]"]' => array('value' => 'static'),
      ),
    ),
  );

  // Dynamic CTA field.
  if ($options = _redhen_lead_form_build_fields_options()) {
    $form['cta']['dynamic']['field'] = array(
      '#type' => 'select',
      '#title' => t('Field-based action'),
      '#options' => $options,
      '#default_value' => isset($lead_form->settings['cta']['dynamic']['field']) ? $lead_form->settings['cta']['dynamic']['field'] : key($options),
      '#description' => '<p>' . t('After a RedHen Contact record is created, the user will be redirected to the specified file or link attached to the primary entity associated with the page on which the form is embedded.') . '</p>' .
        '<p>' . t('For example, if this form is placed on all nodes of type "page" and "page" nodes have a hidden file download field called "field_pdf_download" attached to them, you could select "field_pdf_download" here and users would download the PDF after filling out this lead form. ') . '</p>' . 
        '<p>' . t('If this form happens to be embedded on a node type that does not have a "field_pdf_download" field attached, the form will not display.') . '</p>',
      '#states' => array(
        'visible' => array(
          ':input[name="cta[type]"]' => array('value' => 'dynamic'),
        ),
        'required' => array(
          ':input[name="cta[type]"]' => array('value' => 'dynamic'),
        ),
      ),
    );
  }
  else {
    $form['cta']['dynamic']['field'] = array(
      '#type' => 'textfield',
      '#title' => t('Field-based action'),
      '#description' => t('You must attach a file field or !link_field to an entity to use this option.', array('!link_field' => l('Link field', 'http://www.drupal.org/project/link'))),
      '#states' => array(
        'visible' => array(
          ':input[name="cta[type]"]' => array('value' => 'dynamic'),
        ),
      ),
      '#attributes' => array(
        'style' => 'display:none;',
      ),
    );
  }

  // CTA target.
  $form['cta']['target'] = array(
    '#type' => 'select',
    '#title' => t('Target'),
    '#options' => array(
      '_self' => t('Same window'),
      '_blank' => t('New window'),
    ),
    '#default_value' => isset($lead_form->settings['cta']['target']) ? $lead_form->settings['cta']['target'] : 'default',
    '#description' => t('Select whether or not the CTA should open a new window.'),
    '#required' => TRUE,
  );

  // CTA target.
  $form['cta']['message'] = array(
    '#type' => 'text_format',
    '#title' => t('Success message'),
    '#default_value' => isset($lead_form->settings['cta']['message']['value']) ? $lead_form->settings['cta']['message']['value'] : '',
    '#format' => isset($lead_form->settings['cta']['message']['format']) ? $lead_form->settings['cta']['message']['format'] : NULL,
    '#description' => t('The message displayed to the user after successfully filling out the form.'),
  );

  // This will override the default block form actions with our own.
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save lead form'),
    '#weight' => 40,
  );
  if (!$lead_form->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete lead form'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('redhen_lead_form_form_submit_delete')
    );
  }

  $form['#submit'][] = 'redhen_lead_form_form_submit';
  $form['#submit'][] = 'redhen_lead_form_form_redirect_submit';

  return $form;
}


/**
 * Validation handler for redhen_lead_form_form().
 *
 * Consolidates all extra settings.
 */
function redhen_lead_form_form_validate($form, &$form_state) {
  $values = &$form_state['values'];
  $values['settings'] = array();

  // Add contact settings.
  $values['settings']['contact'] = $values['contact'];

  // Add CTA settings.
  $values['settings']['cta'] = $values['cta'];

  // Add block config settings and prepare for standard block processing.
  $values['settings']['block_config'] = $values['block_config'];
  $values['delta'] = $values['name'];
}


/**
 * Submit handler for redhen_lead_form_form().
 */
function redhen_lead_form_form_submit($form, &$form_state) {
  $lead_form = entity_ui_form_submit_build_entity($form, $form_state);

  // Save the lead gen form configuration.
  redhen_lead_form_save($lead_form);
}


/**
 * Submit handler for redhen_lead_form_form().
 */
function redhen_lead_form_form_redirect_submit($form, &$form_state) {
  // Redirect user back to list of task types.
  $form_state['redirect'] = 'admin/structure/redhen/lead-forms';
}


/**
 * Form callback for Redhen Lead Form deletion.
 */
function redhen_lead_form_delete_confirm($form, &$form_state, $lead_form) {
  $form_state['redhen_lead_form'] = $lead_form;

  // Always provide entity id in the same form key as in the entity edit form.
  $form['redhen_lead_form_id'] = array('#type' => 'value', '#value' => entity_id('redhen_lead_form', $lead_form));

  return confirm_form($form,
    t('Are you sure you want to delete lead form %title?', array('%title' => entity_label('redhen_lead_form', $lead_form))),
    'redhen-lead-forms/' . entity_id('redhen_lead_form', $lead_form),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}


/**
 * Submit handler for the delete action on redhen_lead_form_form().
 */
function redhen_lead_form_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/redhen/lead-forms/manage/' . $form_state['redhen_lead_form']->name . '/delete';
}


/**
 * Prepares a list of RedHen Contact Types suitable for use in a select list.
 */
function _redhen_contact_types_build_options() {
  $types = array();

  foreach (redhen_contact_get_types() as $type => $contact_type) {
    $types[$type] = entity_label('redhen_contact', $contact_type);
  }

  return $types;
}


/**
 * Prepares a list of all available, relevant fields for dynamic CTAs, suitable
 * for use in a select list.
 */
function _redhen_lead_form_build_fields_options() {
  $options = &drupal_static(__FUNCTION__);

  if (empty($options)) {
    foreach (field_info_fields() as $field_name => $field) {
      if ($field['type'] == 'file' || $field['type'] == 'link_field') {
        $options[$field_name] = $field_name;
      }
    }
  }

  return $options;
}


/**
 * Sets saved block config settings as default values.
 *
 * @param $form
 *   The lead form configuration form on which to apply block settings.
 *
 * @param $settings
 *   The saved block_config settings.
 */
function _redhen_lead_form_set_block_config_defaults(&$form, $settings) {
  foreach ($settings as $fieldset => $fields) {
    foreach ($fields as $field => $value) {
      // If $value is an array, then there are subfields.
      if (is_array($value)) {
        foreach ($value as $sub_field => $sub_value) {
          $parents = array(
            'block_config',
            $fieldset,
            $field,
            $sub_field,
            '#default_value',
          );
          drupal_array_set_nested_value($form, $parents, $sub_value);
        }
      }
      else {
        $parents = array(
          'block_config',
          $fieldset,
          $field,
          '#default_value',
        );
        drupal_array_set_nested_value($form, $parents, $value);
      }
    }
  }
}


/**
 * Adds block config settings back to the form state's values as if #tree were
 * not set to TRUE. Required to process blocks as if this were a block form.
 */
function _redhen_lead_form_set_block_config_form_state(&$form_state, $values) {
  foreach ($values as $fieldset => $fields) {
    if ($fieldset == 'regions') {
      $form_state['values'][$fieldset] = $fields;
    }
    else {
      foreach ($fields as $field => $value) {
        // If $value is an array, then there are subfields.
        if (is_array($value)) {
          foreach ($value as $sub_field => $sub_value) {
            $form_state['values'][$sub_field] = $sub_value;
          }
        }
        else {
          $form_state['values'][$field] = $value;
        }
      }
    }
  }
}
