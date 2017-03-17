<?php
/**
 * @file
 * fh_images.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function fh_images_image_default_styles() {
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
