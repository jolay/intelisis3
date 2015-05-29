<?php

/**
 * @file
 * Contains the theme settings form elements for the global extension.
 */

/**
 * Implements hook_extension_EXTENSION_theme_settings_form_alter().
 */
function aura_extension_global_settings_form($element, &$form, $form_state) {
	// Toggles
	$element['global'] = $form['theme_settings'];
	$element['favicon'] = $form['favicon'];

	unset($form['theme_settings']);
	unset($form['favicon']);

	acquia_t_include('themes');
	acquia_theme_settings_wrap_acquia($element);
	
	/** Hero region */
	 $element['acquia']['hero_style'] = array(
		 '#type' => 'fieldset',
		 '#title' => t('Hero style'),
		 '#description' => t('Choose the hero region style global settings. to change the color and background of hero region go to skin tab.'),
	 );
	 
	 $defaults = acquia_theme_get_settings('hero_style', array());

	 $defaults += array(
		 'style' => 'fancy',
		 'bg_type' => acquia_variable_get('hero_bg_type'),
		 'height' => '',
		 'breadcrumb_style' => 'fancy',
	 );
	 
	 $element['acquia']['hero_style']['style'] = array(
		 '#type' => 'select',
		 '#title' => t('Hero region style'),
		 '#description' => t('Choose the hero region style.'),
		 '#options' => array(
			 'fancy' => t('Fancy - Centered content'),
			 'simple' => t('Simple - Corner aligned content'),
		 ),
		 '#default_value' => $defaults['style'],
	 );
	 $element['acquia']['hero_style']['bg_type'] = array(
		 '#type' => 'select',
		 '#title' => t('Background type'),
		 '#description' => t('what color range is your hero background?'),
		 '#options' => array(
			 'dark' => t('Dark'),
			 'light' => t('Light'),
		 ),
		 '#default_value' => $defaults['bg_type'],
	 );
		$element['acquia']['hero_style']['breadcrumb_style'] = array(
			'#type' => 'select',
			'#title' => t('Breadcrumb style'),
			'#description' => t('You can override the global breadcrumb style for this page.'),
			'#default_value' => $defaults['breadcrumb_style'],
			'#options' => acquia_breadcrumb_styles(),
		);
		
	$form['#submit'][] = 'aura_extension_global_settings_form_submit';
	return $element;
}

/**
 * Form submit handler for the theme settings form to clean up stale values.
 * @todo change it 
 */
function aura_extension_global_settings_form_submit($form, &$form_state) {
	$old_settings = variable_get("theme_aura_settings");
	$form_state['values']['acquia']['skin'] = $old_settings['acquia']['skin'];
	
	// regenrating skin styles
	acquia_include('skin', 'ac_skin');
	$skin_vars = acquia_theme_get_skin_vars_from_theme($form_state['values']['acquia']);
	$css = acquia_theme_get_css_from_skin_vars($skin_vars);
	acquia_theme_save_skin_styles($css);
}
