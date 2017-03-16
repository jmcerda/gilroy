<?php
/**
 * @file
 * fh_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fh_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function fh_config_image_default_styles() {
  $styles = array();

  // Exported image style: ad_slider_image_desktop.
  $styles['ad_slider_image_desktop'] = array(
    'label' => 'Ad Slider Image - Desktop',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 650,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: ad_slider_image_mobile.
  $styles['ad_slider_image_mobile'] = array(
    'label' => 'Ad Slider Image - Mobile',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 250,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_image_desktop.
  $styles['hero_image_desktop'] = array(
    'label' => 'Hero Image - Desktop',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 575,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 575,
          'height' => 575,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: hero_image_mobile.
  $styles['hero_image_mobile'] = array(
    'label' => 'Hero Image - Mobile',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 175,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 175,
          'height' => 175,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fh_config_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Chamber events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function fh_config_default_registration_type() {
  $items = array();
  $items['event_general_admission'] = entity_import('registration_type', '{
    "name" : "event_general_admission",
    "label" : "Event - General Admission",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "registrant_entity_type" : "user",
    "registrant_bundle" : "user",
    "registrant_email_property" : "mail",
    "weight" : "0",
    "registration_commerce_settings" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
