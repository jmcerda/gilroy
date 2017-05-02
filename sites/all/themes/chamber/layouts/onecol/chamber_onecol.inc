<?php

/**
 * @file
 * Implementation of hook_panels_layouts().
 */
// Plugin definition.
$plugin = array(
  'title' => t('Single column stacked'),
  'category' => t('Columns: 1'),
  'icon' => 'chamber_onecol.png',
  'theme' => 'chamber_onecol',
  'css' => 'chamber_onecol.css',
  'regions' => array('middle' => t('Middle column')),
);
