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
 * Resets theme_menu_link() to the default that ships with Drupal. Bootstrap
 * attempts to make every menu with children into a dropdown menu. Remove this
 * function if you want drop down links.
 */
//function chamber_menu_link(array $variables) {
//    $element = $variables['element'];
//    $sub_menu = '';
//    if ($element['#fumenu']) {
//        $sub_menu = drupal_render($element['#fumenu']);
//    }
//    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
//    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
//}

function chamber_menu_link__menu_block__main_menu(array &$variables) {
    $element = $variables['element'];
    $sub_menu = '';
    if ($element['#below']) {
        $sub_menu = drupal_render($element['#below']);
    }
    // Add "has-children" class to links which have children
    if ($element['#original_link']['has_children']) {
        $element['#attributes']['class'][] = 'has-children';
    }
    // On primary navigation menu, class 'active' is not set on active menu item.
    // @see https://drupal.org/node/1896674
    if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
        $element['#attributes']['class'][] = 'active';
    }
    $output = l($element['#title'], $element['#href'], $element['#localized_options']);
    return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}