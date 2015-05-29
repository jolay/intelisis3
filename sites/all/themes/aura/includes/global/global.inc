<?php

/**
 * @file
 * Main extension file for the 'global' extension.
 */

/**
 * Implements hook_extension_EXTENSION_registry_alter().
 */
function aura_extension_global_theme_registry_alter(&$registry) {
  $registry['html']['preprocess functions'][] = 'aura_extension_global_preprocess_html';
 
	$registry['page']['includes'][] = drupal_get_path('theme', 'aura') . '/includes/global/global.inc';
  $registry['page']['preprocess functions'][] = 'aura_extension_global_preprocess_page';
}

/**
 * Implements hook_extension_EXTENSION_preproces_html().
 */
function aura_extension_global_preprocess_page(&$variables) {
	// You can use preprocess hooks to modify the variables before they are passed
	// to the theme function or template file.
	$variables['attributes_array']['id'][] = 'page';
	// Hero Attributes
	if (!isset($variables['hero_attrs'])) {
		$variables['hero_attrs'] = array('class' => 'l-hero l-hero-'. acquia_variable_get('hero_style'));
	}
}

/**
 * Implements hook_extension_EXTENSION_preproces_html().
 */
function aura_extension_global_preprocess_html(&$variables) {
  if ( !isset($_COOKIE['devicePixelRatio']) ) {
    $path = drupal_get_path('theme', ACQUIA_THEME_NAME);
    drupal_add_js($path . '/js/acquia/devicePixelRatio.js', array('weight' => -100));
  }
}

/**
 * Implements hook_extension_EXTENSION_preproces_region().
 */
function aura_extension_global_preprocess_region(&$variables) {

}
