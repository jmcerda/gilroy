<?php

function registration_entityreference_views_views_api() {
  return array(
    'api'  => 2,
    'path' => drupal_get_path('module', 'registration_entityreference') . '/includes/views',
  );
}

function registration_entityreference_views_data_alter(&$data) {
  $entity_info = entity_get_info();

  $data['registration']['target_entity_type'] = array(
    'group' => t('Registration Entityreference'),
    'title' => t('Target entity type'),
    'field' => array(
      'handler'          => 'views_handler_field_machine_name',
      'click sortable'   => TRUE,
      'options callback' => 'registration_entityreference_views_target_entity_type_options',
    ),
  );

  foreach ($entity_info as $entity_type => $info) {
    $data['registration']['target_entity_' . $entity_type] = array(
      'group'        => t('Registration Entityreference'),
      'title'        => t('Registration to target entity @entity',
        array('@entity' => ucfirst($info['label']))),
      'help'         => t('The @entity entity that is target entity of the Registration.',
        array('@entity' => $info['label'])),
      'relationship' => array(
        'target_entity_type' => $entity_type,
        'handler'            => 'registration_entityreference_handler_relationship_registration_target_entity',
        'label'              => t('Target entity @entity from Registration',
          array('@entity' => $entity_type)),
        'base'               => $info['base table'],
        'base field'         => $info['entity keys']['id'],
        'relationship field' => 'target_entity_id',
      ),
    );
  }

  return $data;
}

function registration_entityreference_views_target_entity_type_options() {
  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    $options[$entity_type] = $entity_info['label'];
  }
  asort($options);

  return $options;
}
