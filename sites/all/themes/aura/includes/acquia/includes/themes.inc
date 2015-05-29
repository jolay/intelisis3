<?php
/**
 * @file
 *	Helper functions for theming or theme overriding
 */

/**
 * Acquia header Types
 */
function acquia_header_types() {
	return array(
		'fixed_header' => t('Fixed Header'),
		'fixed_header social_header' => t('Fixed Header with Social Icons and additional Navigation'),
 		'nonfixed_header' => t('Default Header'),
		'nonfixed_header social_header' => t('Default Header with Social Icons and additional Navigation'),
		'nonfixed_header social_header bottom_nav_header' => t('Default Header with Social Icons and bottom Navigation'),
	);
}

/**
 * Acquia header Types
 */
function acquia_mobile_menu_types() {
	return array(
		'mobile_drop_down' => t('Dropdown Menu'),
		'mobile_slide_out' => t('Slide Out Menu'),
	);
}

/**
 * Acquia header Types
 */
function acquia_theme_settings_wrap_acquia(&$element) {
	
	if (!isset($element['acquia'])) {
		$element['acquia'] = array(
			'#type' => 'container',
			'#tree' => TRUE,
		);
	}
}
