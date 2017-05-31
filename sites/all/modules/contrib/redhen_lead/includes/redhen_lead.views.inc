<?php

/**
 * @file
 * RedHen Lead Views integration
 */

/**
 * Implement hook_views_data_alter().
 *
 * Create relationships between RedHen leads and their related entities.
 */
function redhen_lead_views_data_alter(&$data) {
  foreach (entity_get_info() as $entity_type => $info) {
    // Lead to entity.
    $data['redhen_lead']['redhen_lead_' . $entity_type . '_source'] = array(
      'group' => t('Lead'),
      'title' => t('Lead @entity source', array('@entity' => drupal_ucfirst($info['label']))),
      'help' => t('The @entity by which the lead was generated.', array('@entity' => $info['label'])),
      'relationship' => array(
        'handler' => 'views_handler_relationship',
        'label' => t('@entity from Lead', array('@entity' => $entity_type)),
        'base' => $info['base table'],
        'base field' => $info['entity keys']['id'],
        'relationship field' => 'entity_id',
        'extra' => array(
          array(
            'table' => 'redhen_lead',
            'field' => 'entity_type',
            'value' => $entity_type,
          ),
        ),
      ),
    );
  }
}
