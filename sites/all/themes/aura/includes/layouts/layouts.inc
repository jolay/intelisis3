<?php

/**
 * @file
 * Contains the theme settings form elements for the layouts extension.
 */

/**
 * Implements hook_extension_EXTENSION_registry_alter().
 */
function aura_extension_layouts_theme_registry_alter(&$registry) {
  $registry['html']['includes'][] = drupal_get_path('theme', 'aura') . '/includes/layouts/layouts.inc';
  $registry['html']['preprocess functions'][] = 'aura_extension_layouts_preprocess_html';
}

/**
 * Implements hook_extension_EXTENSION_preproces_html().
 */
function aura_extension_layouts_preprocess_html(&$variables) {
	// @TODO
	// save values
	if (acquia_theme_get_settings('boxed', FALSE)) {
		$variables['attributes_array']['class'][] = 'ac-boxed-layout';
	}
}