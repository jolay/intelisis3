<?php

/**
 * @file
 * Main extension file for the 'global' extension.
 */

/**
 * Implements hook_extension_EXTENSION_registry_alter().
 */
function aura_extension_shortcodes_theme_registry_alter(&$registry) {
  /*if (omega_theme_get_setting('omega_demo_regions', TRUE) || omega_theme_get_setting('omega_livereload', TRUE) || omega_theme_get_setting('omega_browser_width_indicator', FALSE)) {
    $file = drupal_get_path('theme', 'omega') . '/includes/global/global.inc';

    $registry['html']['includes'][] = $file;
    $registry['html']['preprocess functions'][] = 'omega_extension_global_preprocess_html';

    if (omega_theme_get_setting('omega_demo_regions', TRUE)) {
      $registry['region']['includes'][] = $file;
      $registry['region']['preprocess functions'][] = 'omega_extension_global_preprocess_region';
    }
  }*/
}
