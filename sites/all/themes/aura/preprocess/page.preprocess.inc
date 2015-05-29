<?php

/**
 * Implements hook_preprocess_page().
 */
function aura_preprocess_page(&$vars) {

	// Hero Attributes

	if (!isset($vars['hero_attrs'])) {
		$vars['hero_attrs'] = array('class' => 'l-hero l-hero-'. acquia_variable_get('hero_style'));
	}
}
