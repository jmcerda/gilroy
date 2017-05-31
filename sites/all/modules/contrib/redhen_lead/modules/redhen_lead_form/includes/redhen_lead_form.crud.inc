<?php

/**
 * @file
 * Hooks, functions, and callbacks for Redhen Lead Form CRUD operations.
 */


/**
 * Load lead form configuration.
 */
function redhen_lead_form_load($lead_form) {
  return redhen_lead_form_forms($lead_form);
}


/**
 * List of lead form configurations.
 */
function redhen_lead_form_forms($name = NULL) {
  $form_configs = entity_load_multiple_by_name('redhen_lead_form', isset($name) ? array($name) : FALSE);
  return isset($name) ? reset($form_configs) : $form_configs;
}


/**
 * Save lead form configuration.
 */
function redhen_lead_form_save($lead_form) {
  entity_save('redhen_lead_form', $lead_form);
}


/**
 * Delete lead form configuration.
 */
function redhen_lead_form_delete($lead_form) {
  entity_delete('redhen_lead_form', entity_id('redhen_lead_form' ,$lead_form));
}


/**
 * Delete multiple lead forms.
 */
function redhen_lead_form_delete_multiple($lead_forms) {
  entity_delete_multiple('redhen_lead_form', $lead_forms);
}
