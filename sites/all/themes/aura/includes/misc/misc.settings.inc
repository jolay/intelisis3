<?php

/**
 * @file
 * Contains the theme settings form elements for the misc extension.
 */

/**
 * Implements hook_extension_EXTENSION_theme_settings_form_alter().
 */
function aura_extension_misc_settings_form($element, &$form, $form_state) {
 
  // Custom option for toggling the main content blog on the front page.
  $element['omega_toggle_front_page_content'] = array(
    '#type' => 'checkbox',
    '#title' => t('Front page content'),
    '#description' => t('Allow the main content block to be rendered on the front page.'),
    '#default_value' => omega_theme_get_setting('omega_toggle_front_page_content', TRUE),
  );
	
	unset($form['theme_settings']['omega_toggle_front_page_content']);

  return $element;
}


