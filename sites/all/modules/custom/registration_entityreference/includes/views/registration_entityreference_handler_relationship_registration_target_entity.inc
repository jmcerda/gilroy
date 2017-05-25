<?php

/**
 * @file
 */

/**
 * Views relationship handler for managing registration target entity
 * relationships.
 */
class registration_entityreference_handler_relationship_registration_target_entity extends views_handler_relationship {

  public function query() {

    $this->definition['extra'][] = array(
      'table' => $this->table_alias,
      'field' => 'target_entity_type',
      'value' => $this->definition['target_entity_type'],
    );

    parent::query();
  }
}
