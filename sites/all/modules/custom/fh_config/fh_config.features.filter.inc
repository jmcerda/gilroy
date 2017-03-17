<?php
/**
 * @file
 * fh_config.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function fh_config_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'picture' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_embed' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_hashtag' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_links' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'twitter_username' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'video_embed_field' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
