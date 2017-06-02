<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Implements template_preprocess_html().
 */
function chamber_preprocess_html(&$variables) {
}

/**
 * Implements template_preprocess_page.
 */
function chamber_preprocess_page(&$variables) {
    // Get the entire main menu tree
    $main_menu_tree = menu_tree_all_data('main-menu', NULL, 2 );

    // Add the rendered output to the $main_menu_expanded variable
    $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);
}

/**
 * Implements template_preprocess_node.
 */
function chamber_preprocess_node(&$variables) {
}

/**
 * Overrides bootstrap_menu_link().
 *
 * Resets _menu_link() to the default that ships with Drupal. Bootstrap
 * attempts to make every menu with children into a dropdown menu. Remove this
 * function if you want drop down links.
 */
function chamber_menu_link__menu_block($variables) {
    return theme_menu_link($variables);
}

/**
 * Implementation of hook_entity_view_mode_alter().
 *
 * Select custom view mode.
 */
//function chamber_entity_view_mode_alter(&$view_mode, $context) {
//    // For nodes, change the view mode when it is teaser.
//    if ($context['entity_type'] == 'node') {
//        $view_mode = 'modal';
//    }
//}