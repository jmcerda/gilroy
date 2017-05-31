<?php

/**
 * @file
 * Classes related to RedHen Leads.
 */


/**
 * The class used for lead entities.
 */
class RedhenLead extends Entity {

  public
    $lead_id = NULL,
    $contact_id = NULL,
    $entity_type = '',
    $entity_id = NULL,
    $author_uid = NULL,
    $created = '',
    $updated = '';

  public function __construct(array $values = array()) {
    parent::__construct($values, 'redhen_lead');

    // New lead. is_new might not be set so check for id
    if (!$this->lead_id) {
      global $user;
      $this->created = REQUEST_TIME;
      $this->author_uid = $user->uid;
    }
  }

  /**
   * Override buildContent() to add lead properties.
   */
  public function buildContent($view_mode = 'full', $langcode = NULL) {

    $wrapper = entity_metadata_wrapper('redhen_lead', $this);
    $author = $wrapper->author->value();

    $content['author'] = array(
      '#theme' => 'redhen_property_field',
      '#label' => t('Author'),
      '#items' => array(
        array(
          '#markup' => $author->name,
        ),
      ),
      '#classes' => 'field field-label-inline clearfix',
    );

    $content['created'] = array(
      '#theme' => 'redhen_property_field',
      '#label' => t('Created'),
      '#items' => array(
        array(
          '#markup' => redhen_format_date($this->created),
        ),
      ),
      '#classes' => 'field field-label-inline clearfix',
    );

    return entity_get_controller($this->entityType)
      ->buildContent($this, $view_mode, $langcode, $content);
  }

  /**
   * Override label() to add lead label.
   */
  public function label() {
    $wrapper = entity_metadata_wrapper('redhen_lead', $this);
    $entity = $wrapper->contact->value();
    // Don't sanitize here as this function should produce unsanitized output.
    return $entity->label();
  }

  /**
   * Permanently saves the entity.
   *
   * @return bool
   *  Returns FALSE if entity was not saved.
   */
  public function save() {
    $this->updated = REQUEST_TIME;
    return parent::save();
  }
}

/**
 * Controls metadata for RedHen Leads.
 */
class RedhenLeadMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    $properties['created'] = array(
      'label' => t('Created'),
      'description' => t('The date the lead was created.'),
      'type' => 'date',
      'filter' => TRUE,
      'field_type' => 'textfield',
      'schema field' => 'created',
      'setter callback' => 'entity_property_verbatim_set'
    );
    $properties['updated'] = array(
      'label' => t('Updated'),
      'description' => t('The date the lead was updated.'),
      'type' => 'date',
      'schema field' => 'updated',
      'setter callback' => 'entity_property_verbatim_set'
    );

    // Entities
    $properties['contact'] = array(
      'label' => t('Contact'),
      'type' => 'redhen_contact',
      'description' => t('The contact associated with the lead.'),
      'schema field' => 'contact_id',
    );

    $properties['author'] = array(
      'label' => t('Creator'),
      'type' => 'user',
      'description' => t('The creater of the lead.'),
      'schema field' => 'author_uid',
    );

    $properties['entity'] = array(
      'label' => t('Entity lead source'),
      'type' => 'entity',
      'schema field' => 'entity_id',
      'description' => t('The entity on which the lead was created (if any).'),
      'getter callback' => 'redhen_lead_property_entity_get',
      'setter callback' => 'entity_property_verbatim_set',
    );

    return $info;
  }

}

/**
 * Callback to get $lead->entity.
 *
 * @see redhen_lead_entity_property_info().
 */
function redhen_lead_property_entity_get(RedhenLead $lead, array $options, $property_name, $entity_type) {
  return entity_load_single($lead->entity_type, $lead->entity_id);
}
