<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('One Column Stacked'),
  'category' => t('Chamber'),
  'icon' => 'chamber_onecol_stacked.png',
  'theme' => 'chamber_onecol_stacked',
  'admin css' => '../../../modules/contrib/panels_bootstrap_layouts/plugins/layouts/panels-bootstrap-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'middle' => t('Middle column'),
    'bottom' => t('Bottom'),
  ),
);
