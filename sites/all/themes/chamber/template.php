<?php

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
    $main_menu_tree = menu_tree_all_data('main-menu', 1);

    // Add the rendered output to the $main_menu_expanded variable
    $variables['main_menu_expanded'] = menu_tree_output($main_menu_tree);
}

/**
 * Implements template_preprocess_node.
 */
function chamber_preprocess_node(&$variables) {
}
