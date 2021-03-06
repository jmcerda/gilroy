<?php
/**
 * @file
 * redhen_raiser_campaigns.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function redhen_raiser_campaigns_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_redhen_campaign__general';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'progress' => array(
        'custom_settings' => TRUE,
      ),
      'banner' => array(
        'custom_settings' => TRUE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '35',
        ),
        'label' => array(
          'weight' => '-10',
        ),
        'promote' => array(
          'weight' => '33',
        ),
        'sticky' => array(
          'weight' => '32',
        ),
        'join' => array(
          'weight' => '-10',
        ),
      ),
      'display' => array(
        'label' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'banner' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'progress' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'promotion' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'contextual_banner' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'join' => array(
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'progress' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'banner' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'promotion' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'contextual_banner' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_redhen_campaign__general'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_redhen_campaign_pattern';
  $strongarm->value = 'campaigns/[redhen_campaign:label]';
  $export['pathauto_redhen_campaign_pattern'] = $strongarm;

  return $export;
}
