<?php
/**
 * @file
 * fh_blocks.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function fh_blocks_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'advertisement';
  $bean_type->label = 'Advertisement';
  $bean_type->options = '';
  $bean_type->description = 'Displayed as slider and page.';
  $export['advertisement'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'hero_slide';
  $bean_type->label = 'Hero slide';
  $bean_type->options = '';
  $bean_type->description = 'Block used for display in page hero containers.';
  $export['hero_slide'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'video';
  $bean_type->label = 'Featured Video';
  $bean_type->options = '';
  $bean_type->description = 'Featured video block.';
  $export['video'] = $bean_type;

  return $export;
}
