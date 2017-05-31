<?php

/**
 * @file
 * Hooks, functions, and callbacks for Redhen Lead CRUD operations.
 */


/**
 * Load a RedHen lead by ID.
 */
function redhen_lead_load($lead_id) {
  if (empty($lead_id)) {
    return FALSE;
  }

  $leads = redhen_lead_load_multiple(array($lead_id), array());
  return $leads ? reset($leads) : FALSE;
}


/**
 * Loads multiple leads by ID or based on a set of matching conditions.
 *
 * @see entity_load()
 *
 * @param $lead_ids
 *   An array of lead IDs.
 *
 * @param $conditions
 *   An array of conditions on the {redhen_lead} table in the form
 *     'field' => $value.
 *
 * @param $reset
 *   Whether to reset the internal lead loading cache.
 *
 * @return
 *   An array of note objects indexed by lead_id.
 */
function redhen_lead_load_multiple($lead_ids = array(), $conditions = array(), $reset = FALSE) {
  if (empty($lead_ids) && empty($conditions)) {
    return array();
  }

  return entity_load('redhen_lead', $lead_ids, $conditions, $reset);
}


/**
 * Create a new lead object.
 *
 * @param array $values
 *   Associative array of values.
 *
 * @return RedhenLead
 */
function redhen_lead_create(array $values = array()) {
  return entity_get_controller('redhen_lead')->create($values);
}


/**
 * Save a RedHen lead.
 */
function redhen_lead_save($lead) {
  entity_save('redhen_lead', $lead);
}


/**
 * Delete a RedHen lead.
 */
function redhen_lead_delete($lead) {
  entity_delete('redhen_lead', entity_id('redhen_lead', $lead));
}


/**
 * Delete multiple RedHen leads.
 */
function redhen_lead_delete_multiple($leads) {
  entity_delete_multiple('redhen_lead', $leads);
}
