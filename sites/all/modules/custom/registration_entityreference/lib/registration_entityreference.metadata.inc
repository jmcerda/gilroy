<?php

/**
 * @file
 * Entity API Metadata Controller for Entity Reference Registration entities.
 */

/**
 * Class RegistrationEntityReferenceMetadataController
 */
class RegistrationEntityReferenceMetadataController
  extends RegistrationMetadataController {

  public function entityPropertyInfo() {

    // RegistrationMetadataController fills in most of the required properties.
    // We only need to override some of them and introduce properties related to
    // the referenced entities.
    $info =& parent::entityPropertyInfo();
    $properties =& $info[$this->type]['properties'];

    // The entity type of the target (referenced) entity.
    $properties['target_entity_type'] = array(
      'label'           => t("Target entity type"),
      'type'            => 'token',
      'description'     => t("The entity type of the target entity."),
      'schema field'    => 'target_entity_type',
      'setter callback' => 'entity_property_verbatim_set',
    );

    // The entity id of the target (referenced) entity.
    $properties['target_entity_id'] = array(
      'label'           => t("Target entity ID"),
      'type'            => 'integer',
      'description'     => t("The entity ID of the target entity."),
      'schema field'    => 'target_entity_id',
      'setter callback' => 'entity_property_verbatim_set',
    );

    // The target (referenced) entity object.
    $properties['target_entity'] = array(
      'label'           => t("Target entity"),
      'type'            => 'entity',
      'schema field'    => 'target_entity_id',
      'description'     => t("The target entity."),
      'getter callback' => 'registration_entityreference_property_target_entity_get',
      'setter callback' => 'registration_entityreference_property_target_entity_set',
      'computed'        => TRUE,
    );

    // We need to override the getter function for the 'mail' property, since
    // in case of referenced entities we need to calculate the mail address.
    $properties['mail']['getter callback'] = 'registration_entityreference_property_mail_get';

    return $info;
  }
}
