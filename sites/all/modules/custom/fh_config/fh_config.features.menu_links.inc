<?php
/**
 * @file
 * fh_config.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function fh_config_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:about.
  $menu_links['main-menu_about:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:about',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_cal-chamber:node/232.
  $menu_links['main-menu_cal-chamber:node/232'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/232',
    'router_path' => 'node/%',
    'link_title' => 'Cal Chamber',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_cal-chamber:node/232',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_news-feeds:resources/news-feeds',
  );
  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_contact:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: main-menu_directory:directory.
  $menu_links['main-menu_directory:directory'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'directory',
    'router_path' => 'directory',
    'link_title' => 'Directory',
    'options' => array(
      'identifier' => 'main-menu_directory:directory',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
  );
  // Exported menu link: main-menu_news-feeds:resources/news-feeds.
  $menu_links['main-menu_news-feeds:resources/news-feeds'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources/news-feeds',
    'router_path' => 'resources/news-feeds',
    'link_title' => 'News Feeds',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'menu_icon',
      ),
      'identifier' => 'main-menu_news-feeds:resources/news-feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_resources:resources',
  );
  // Exported menu link: main-menu_resources:resources.
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Cal Chamber');
  t('Contact');
  t('Directory');
  t('Events');
  t('News Feeds');
  t('Resources');

  return $menu_links;
}
