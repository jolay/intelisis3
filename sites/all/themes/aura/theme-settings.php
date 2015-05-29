<?php

/**
 * @file
 * Theme settings file for the {{ THEMENAME }} theme.
 */

require_once dirname(__FILE__) . '/template.php';

/**
 * Implements hook_form_FORM_alter().
 */
function aura_form_system_theme_settings_alter(&$form, $form_state) {
  // You can use this hook to append your own theme settings to the theme
  // settings form for your subtheme. However, you should also take a look at
  // the 'extensions' concept in the Omega base theme. We highly suggest that you
  // put your custom features and theme settings into extensions.
	// include required fiels
	if (module_exists('acquia')) {
   acquia_include('utility');
   acquia_load_resources('admin');
   acquia_load_resources('theme-settings');
   acquia_load_resources('responsive');
	}
  
  // include theme required files
  acquia_include('theme');
	
	$form['#attached']['js'] = array(drupal_get_path('theme', ACQUIA_THEME_NAME) . '/js/admin.js');
	
  // wrap acquia options style
 acquia_theme_wrap_acquia_admin_style($form, array(
	 'support_nav' => TRUE,
	 'vtabs' => TRUE,
	 'title' => variable_get('ACQUIA_THEME_NAME'),
	 'subtitle' => 'v' .variable_get('ACQUIA_THEME_VERSION'),
 ));
 
 	unset($form['theme_settings']['omega_toggle_front_page_content']);
}

