<?php

// set theme required variables
define( 'ACQUIA_THEME_NAME', 'aura');
define( 'ACQUIA_THEME_VERSION', '1.0.0');

// add custom theme base file
require_once dirname ( __FILE__ ) . '/includes/aura.inc';

/**
 * Implements hook_theme().
 */
function aura_theme() {
	$themes = array ();
	return $themes;
}

/**
 * Implementaion of acquia_css_alter()
 */
function aura_css_alter(&$css) {
	$omega_path = drupal_get_path('theme', 'omega');
	if (isset($css[$omega_path .'/css/modules/forum/forum.theme.css'])) {
		unset($css[$omega_path .'/css/modules/forum/forum.theme.css']);
	}
}
function aura_html_head_alter(&$head_elements) {
unset($head_elements['system_meta_generator']);
foreach ($head_elements as $key => $element) {
if (isset($element['#attributes']['rel']) && $element['#attributes']['rel'] == 'shortlink') {
  unset($head_elements[$key]);
}
}
}