<?php

/**
 * @file
 * Hooks, functions, and callbacks related to Redhen Lead Form pages.
 */


/**
 * Page callback for block configuration pages of module RedHen Lead Form. This
 * ensures there's only one place to configure RedHen Lead Forms.
 */
function redhen_lead_form_block_configure_goto($lead_form_name) {
  // Preserve "destination" and prevent drupal_goto from redirecting there.
  $options = array();
  if (isset($_GET['destination'])) {
    $options = array('query' => array('destination' => $_GET['destination']));
    unset($_GET['destination']);
  }

  drupal_goto('admin/structure/redhen/lead-forms/manage/' . $lead_form_name, $options);
}


/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @see redhen_lead_form_form_redhen_lead_admin_form_alter()
 */
function _redhen_lead_form_form_redhen_lead_admin_form_alter(&$form, &$form_state, $form_id) {
  // Create a fieldset for ourselves.
  $form['redhen_lead_form'] = array(
    '#type' => 'fieldset',
    '#title' => t('RedHen Lead Form settings'),
  );

  // Toggle for whether or not leads are unique per e-mail address.
  $form['redhen_lead_form']['redhen_lead_form_unique_email'] = array(
    '#type' => 'checkbox',
    '#title' => t('Match e-mail addresses against existing RedHen Contacts'),
    '#description' => t('When checked, e-mail addresses entered that match a RedHen Contact will use and update the existing Contact.'),
    '#default_value' => variable_get('redhen_lead_form_unique_email', TRUE),
  );
}
