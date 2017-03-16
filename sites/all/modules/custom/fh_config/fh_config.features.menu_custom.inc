<?php
/**
 * @file
 * fh_config.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function fh_config_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-utility-menu.
  $menus['menu-utility-menu'] = array(
    'menu_name' => 'menu-utility-menu',
    'title' => 'Utility Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Utility Menu');

  return $menus;
}
