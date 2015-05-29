<?php

/**
 * @file
 * Main extension file for the 'header' extension.
 */

/**
 * Implements hook_extension_EXTENSION_registry_alter().
 */
function aura_extension_header_theme_registry_alter(&$registry) {
  $registry['html']['includes'][] = drupal_get_path('theme', 'aura') . '/includes/header/header.inc';
  $registry['html']['preprocess functions'][] = 'aura_extension_header_preprocess_html';
	
	$registry['page']['includes'][] = drupal_get_path('theme', 'aura') . '/includes/header/header.inc';
  $registry['page']['preprocess functions'][] = 'aura_extension_header_preprocess_page';
}

/**
 * Implements hook_extension_EXTENSION_preproces_page().
 */
function aura_extension_header_preprocess_html(&$variables) {
	
	if (acquia_theme_get_settings('fixed_header', TRUE)) {
		$variables['attributes_array']['class'][] = 'fixed_header';
	}
	$variables['attributes_array']['class'][] = acquia_theme_get_settings('mobile_menu_type', 'mobile_slide_out');
	
	if (acquia_theme_get_settings('retina_enabled', TRUE)){
		$variables['attributes_array']['class'][] = 'ac-retina-logos';
	}
}

/**
 * Implements hook_extension_EXTENSION_preproces_page().
 */
function aura_extension_header_preprocess_page(&$variables) {
	acquia_t_include('utility');

	if (acquia_theme_get_settings('enable_topbar', FALSE, 'topbar')) {
		if (acquia_theme_get_settings('enable_contact_info', FALSE, 'topbar')) {
			$variables['page']['topbar'] = isset($variables['page']['topbar']) ? $variables['page']['topbar'] : array();
			array_unshift($variables['page']['topbar'], array('contact-info' => array('#markup' => acquia_t_get_topbar_contact_info())));
		}
	
		if (acquia_theme_get_settings('enable_social_icon', FALSE, 'topbar')) {
			$variables['page']['topbar'] = isset($variables['page']['topbar']) ? $variables['page']['topbar'] : array();
			array_unshift($variables['page']['topbar'], array('socials' => array('#markup' => acquia_t_get_topbar_socials())));
		}
	}else{
		unset($variables['page']['topbar']);
	}

	
	if (!module_exists('ac_demo')) {
		$variables['logo'] = acquia_t_get_logo_images();
		$variables['h_layout'] = acquia_theme_get_settings('header_layout', 'left');
		if ($variables['h_layout'] == 'classic' && acquia_theme_get_settings('header_content', '') != '') {
			$variables['header_content'] = acquia_theme_get_settings('header_content', '');
		}
	}else{
		$variables['logo'] = acquia_t_get_skin_logo_images();
		$variables['h_layout'] = !isset($variables['h_layout']) ?  acquia_t_get_skin_header_layout() : $variables['h_layout'];
		//if ($variables['h_layout'] == 'classic' && acquia_theme_get_settings('header_content', '') != '') {
		//	$variables['header_content'] = acquia_theme_get_settings('header_content', '');

		//}
	}
}

