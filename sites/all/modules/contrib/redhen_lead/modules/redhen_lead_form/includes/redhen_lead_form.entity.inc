<?php

/**
 * @file
 * Classes for Redhen Lead Generation forms.
 */


/**
 * Redhen Lead Form class.
 */
class RedhenLeadForm extends Entity {
  public $name;
  public $label;
  public $weight = 0;

  public function __construct($values = array()) {
    parent::__construct($values, 'redhen_lead_form');
  }

  function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }
}


/**
 * Controller for Redhen Lead Forms.
 */
class RedhenLeadFormController extends EntityAPIControllerExportable {
   public function create(array $values = array()) {
    $values += array(
      'label' => '',
    );
    return parent::create($values);
  }

  /**
   * Save Redhen Lead form.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $is_new = isset($entity->is_new) && $entity->is_new ? TRUE : FALSE;

    parent::save($entity, $transaction);

    // If this is a new lead form block, rehash blocks. This is required to
    // ensure the block admin form hacks below are aware of the new block.
    if ($is_new) {
      block_flush_caches();
    }

    // Load necessary incs.
    module_load_include('inc', 'redhen_lead_form', 'includes/redhen_lead_form.forms');
    module_load_include('inc', 'block', 'block.admin');

    // Build a list of submit handlers that need to be called.
    $fake_form = array('#submit' => array());
    $fake_form_state = array('values' => array('module' => 'redhen_lead_form', 'delta' => $entity->name));
    $fake_form = block_admin_configure($fake_form, $fake_form_state, 'redhen_lead_form', $entity->name);
    $fake_hooks = array('form', 'form_block_add_block_form');
    $fake_formid = 'block_admin_configure';
    drupal_alter($fake_hooks, $fake_form, $fake_form_state, $fake_formid);
    $fake_form['#submit'][] = 'block_admin_configure_submit';

    // Set the form_state values as it's expected by known submit handlers.
    $submit_handlers = $fake_form['#submit'];
    $fake_form = array();
    $fake_form_state = array(
      'values' => array(
        'module' => 'redhen_lead_form',
        'delta' => $entity->name,
      ),
    );
    _redhen_lead_form_set_block_config_form_state($fake_form_state, $entity->settings['block_config']);

    // Loop through all submit handlers.
    foreach ($submit_handlers as $handler) {
      $handler($fake_form, $fake_form_state);
    }
  }

  /**
   * Delete RedHen Lead Form.
   */
  public function delete($ids, DatabaseTransaction $transaction = NULL) {
    $deltas = array();
    foreach ($ids as $id) {
      $lead_form = redhen_lead_form_load($id);
      $deltas[] = $lead_form->name;
    }

    // Manually delete the block entries.
    db_delete('block')
      ->condition('delta', $deltas, 'IN')
      ->condition('module', 'redhen_lead_form')
      ->execute();

    parent::delete($ids, $transaction);

    // We'll need to rehash blocks. There's no better indirect way to call this.
    block_flush_caches();
  }
}

/**
 * UI controller for Redhen Lead Forms.
 */
class RedhenLeadFormUIController extends EntityDefaultUIController {
  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['title'] = 'Lead forms';
    $items[$this->path]['description'] = 'Manage lead forms';
    return $items;
  }
}
