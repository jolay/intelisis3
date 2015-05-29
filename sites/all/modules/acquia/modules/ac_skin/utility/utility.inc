<?php
/**
 * @file
 * General utility functions for acquia Skin that do not need to be placed
 * in the module file.
 */

function ac_skin_get_skin_groups_arr(){
	$groups = &drupal_static(__FUNCTION__, NULL);
	
	if (!isset($groups)) {
		$groups = array_keys(ac_skin_get_all_groups_def());
	}
	
	return $groups;
}


/**
 * Load given group of skin settings file
 */
function ac_skin_load_skin_group_file($group){
	$added = &drupal_static(__FUNCTION__, array());
	if (!isset($added[$group])) {
		$added[$group] = TRUE;
		$group_def = ac_skin_get_all_groups_def();
		if (isset($group_def[$group]) && $def = $group_def[$group]){
			if (file_exists($def['path'] .'/' .$def['file'])) {
				require_once $def['path'] .'/' .$def['file'];
			}
		}
	}
}

/**
 * Get all skin settings array
 */
function ac_skin_get_all_group_styles($reset = FALSE) {
  $skin_settings = &drupal_static(__FUNCTION__, array());

	$settings = ac_skin_get_all_groups_def();
	foreach($settings as $group => $def) {
		if (is_array($def)) {
			// load group def file
			ac_skin_load_skin_group_file($group);
			
			$styles_func = $def['styles callback'];
			if (function_exists($styles_func)) {
				$skin_settings[$group] = $styles_func();
			}
		}
	}

  return $skin_settings;
}

/**
 * @todo
 */
function ac_skin_add_skin_assets(){
  $added = &drupal_static(__FUNCTION__, FALSE);
	if (!$added) {
		drupal_add_library('system', 'ui');
		drupal_add_library('system', 'ui.slider');
		
		include_once drupal_get_path('module', 'media') . '/wysiwyg_plugins/media.inc';
		media_include_browser_js();
		
		$added = TRUE;
	}
}

/**
 * Get default value of skin attribute
 */
function ac_skin_get_skin_attr_default_val($key, $attr, $type = 'skin', $default = NULL) {

	$styles = ac_skin_get_all_group_styles();
	if (isset($styles[$key][$type][$attr]['default'])) {
		return $styles[$key][$type][$attr]['default'];
	}else{
		return $default;
	}
}

/**
 *
 */
function ac_skin_demo_box($targets = NULL) {
	$class = 'ac-font-preview';
	if ($targets != null){
		foreach($targets as $target) {
			$class .=' ac-target-' . $target;
		}
	}
	
	$out  = '<div class="ac-preview-wrap" style="font-family: \'Open Sans\'; font-weight: normal">';
	$out .= '	<div class="'.$class.'">';
	$out .= '		<span>Grumpy wizards make toxic brew for the evil Queen and Jack.</span>';
	$out .= '	</div>';
	$out .= '	<strong class="label">preview</strong>';
	$out .= '</div>';
	
	return $out;
}

/**
 * Get skin element structure
 */
function ac_skin_get_group_styles($group) {
	$styles = ac_skin_get_all_group_styles();
	if (isset($styles[$group])) {
		return $styles[$group];
	}else{
		return array();
	}
}

/**
 * ac_skin_get_topbar_socials
 */
function ac_skin_get_topbar_socials($reset = FALSE) {
	$cache = &drupal_static(__FUNCTION__, NULL);
	
	if (!isset($cache) || $reset) {
    if (!$reset && $cache = cache_get('acquia_topbar_socials', 'cache')) {
      $cache = $cache->data;
    }else{
			$cache = theme('acquia_topbar_socials', array('socials' => array_filter(acquia_theme_get_settings('social_icons', array(),  'topbar'), 'strlen')));
			cache_set('acquia_topbar_socials', $cache);
		}
	}
	return $cache;
}

/**
 * ac_skin_get_topbar_socials
 */
function ac_skin_get_topbar_contact_info($reset = FALSE) {
	$cache = &drupal_static(__FUNCTION__, NULL);
	
	if (!isset($cache) || $reset) {
    if (!$reset && $cache = cache_get('acquia_topbar_contact_info', 'cache')) {
      $cache = $cache->data;
    }else{
			$cache = theme('acquia_topbar_contact_info', array('info' => array_filter(acquia_theme_get_settings('contact_info', array(),  'topbar'), 'strlen')));
			cache_set('acquia_topbar_contact_info', $cache);
		}
	}
	return $cache;
}

/**
 * ac_skin_get_logo_images
 */
function ac_skin_get_logo_images($reset = TRUE) {
	$cache = &drupal_static(__FUNCTION__, NULL);
	
	if (!isset($cache) || $reset) {
    if (!$reset && $cache = cache_get('acquia_header_logos', 'cache')) {
      $cache = $cache->data;
    }else{
			$logos = '<img src="'.omega_theme_get_setting('logo').'" class="logo-base" alt="'.t('Home').'" />';
			$settings = omega_theme_get_setting('logos');
			
			if (isset($settings['logo_white']['fid']) && $settings['logo_white']['fid'] !=0) {
				$logos .= '<img src="'.file_create_url(file_load($settings['logo_white']['fid'])->uri).'" class="logo-base logo-white" alt="'.t('Home').'" />';
			}
			
			if (acquia_theme_get_settings('retina_enabled', TRUE)) {
				if (isset($settings['retina_width']) && !empty($settings['retina_width'])) {
					$style = ' style="max-width:'.str_replace(array('px', '%'), '', $settings['retina_width']).'px"';
				}else{
					$style = '';
				}

				if (isset($settings['retina']['fid']) && $settings['retina']['fid'] !=0) {
					$logos .= '<img src="'.file_create_url(file_load($settings['retina']['fid'])->uri).'" class="logo-retina" alt="'.t('Home').'" '.$style.'/>';
				}
				
				if (isset($settings['retina_white']['fid']) && $settings['retina_white']['fid'] !=0) {
					$logos .= '<img src="'.file_create_url(file_load($settings['retina_white']['fid'])->uri).'" class="logo-retina base-white" alt="'.t('Home').'" '.$style.'/>';
				}
			}
			cache_set('acquia_header_logos', $logos);
			return $logos;
		}
	}
	return $cache;
}

/**
 * @todo
 */
function ac_skin_build_info_file($array, $prefix = FALSE) {
  $info = '';

  foreach ($array as $key => $value) {
    if (is_array($value)) {
      $info .= ac_skin_build_info_file($value, (!$prefix ? $key : "{$prefix}[{$key}]"));
    }
    else {
      $info .= $prefix ? ("{$prefix}[" . $key .']') : $key;
      $info .= " = '" . str_replace("'", "\'", $value) . "'\n";
    }
  }

  return $info;
}


/**
 * @todo
 */
function ac_skin_get_absolute_image_url($src){
	// Absolute URL 
	if (stripos($src, 'http://') === 0 || stripos($src, 'https://') === 0) {
		return $src;
	}
	// Drupal relative Path
	else if (stripos($src, 'public://') === 0 || stripos($src, 'private://') === 0) {
		return url($src, array('absolute' => TRUE));
	}
	// Internal Acquia path
	return url(drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . $src, array('absolute' => TRUE));
}

/**
 * Acquia header Types
 */
function ac_skin_styles_wrap_acquia(&$element) {
	
	if (!isset($element['acquia'])) {
		$element['acquia'] = array(
			'#type' => 'container',
			'#tree' => TRUE,
		);
	}
}
