<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three Columns Stacked'),
  'category' => t('Chamber'),
  'icon' => 'chamber_threecol_stacked.png',
  'theme' => 'chamber_threecol_stacked',
  'admin css' => '../../../modules/contrib/panels_bootstrap_layouts/plugins/layouts/panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
