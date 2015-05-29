<?php

	
/**
 * Add global js vars 
 * 	Adds settings vars to work with shortcodes mce button
 * 	@param {array} $sc provided shortcodes list
 * 	
 */
function add_shortcode_btn_globals($sc = array()) {
	
	$settings = array();
	$settings['shortcodes'] = array(
		'mce_btn' => array(
			'title' => t('Acquia Shortcodes'),
			'image' => url(AC_MCE_PLUGINS_IMG_ASSETS_DIR . '/tiny-button.png'),
		),
	);
	
	$settings['shortcodes']['mce_btn']['options'] = $sc;
	$settings['shortcodes']['ajaxURL'] = url(ACQUIA_SHORTCODE_AJAX_URL, array('absolute' => true));
	drupal_add_js($settings, 'setting');
}
