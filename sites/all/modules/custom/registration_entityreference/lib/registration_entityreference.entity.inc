<?php

/**
 * @todo document
 */
class RegistrationEntityReference extends Registration {

  public $target_entity;
  public $target_entity_type;
  public $target_entity_id;

  public function buildContent($view_mode = 'full', $langcode = NULL) {
    $build = parent::buildContent($view_mode, $langcode);
    $wrapper = entity_metadata_wrapper('registration', $this);

    $target_entity = $wrapper->target_entity;
    $target_entity_uri = $target_entity->value() ? entity_uri($target_entity->type(), $target_entity->value()) : NULL;

    $build['target_entity'] = array(
      '#prefix' => '<div class="field registration-target-entity"><div class="field-label">' . t('Target:') . '</div>',
      '#markup' => (isset($target_entity_uri['path']) ? l(entity_label($target_entity->type(), $target_entity), $target_entity_uri['path']) : entity_label($target_entity->type(), $target_entity)),
      '#suffix' => '</div>',
    );

    return $build;
  }
}
