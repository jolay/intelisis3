<?php
/**
 * @file
 * 	base helper file consists of misc functions
 */


/**
 * Acquia attach resources
 */
function acquia_t_load_resources() {
	$path = drupal_get_path('theme', ACQUIA_THEME_NAME);
	drupal_add_js($path . '/js/acquia/utils.js', array('weight' => -100));
	drupal_add_js($path . '/js/acquia/shortcodes.js', array('weight' => 99));
	drupal_add_js($path . '/js/acquia/themes.js', array('weight' => 100));
	drupal_add_js($path . '/js/acquia/base.js', array('weight' => 100));
	
	acquia_include('device');
	switch( ac_get_device_type() ) {
		case 'tablet':
			drupal_add_js($path . '/js/acquia/devices/desktop-tablet.js', array('weight' => 100));
			break;
		case 'phone':
			drupal_add_js($path . '/js/acquia/devices/phone.js', array('weight' => 100));
			break;
		default:
			drupal_add_js($path . '/js/acquia/devices/desktop.js', array('weight' => 100));
			drupal_add_js($path . '/js/acquia/devices/desktop-tablet.js', array('weight' => 100));
	}
}

/**
 * acquia_t_get_topbar_socials
 */
function acquia_t_get_topbar_socials($reset = FALSE) {
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
 * acquia_t_get_topbar_socials
 */
function acquia_t_get_topbar_contact_info($reset = FALSE) {
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
 * acquia_t_get_logo_images
 */
function acquia_t_get_logo_images($reset = FALSE) {
	$cache = &drupal_static(__FUNCTION__, NULL);
	
	if (!isset($cache) || $reset) {
    if (!$reset && $cache = cache_get('acquia_header_logos', 'cache')) {
      $cache = $cache->data;
    }else{
			$settings = omega_theme_get_setting('logos');

			$logos_i_class = 'logos-i';
			$logos = '<img src="'.omega_theme_get_setting('logo').'" class="logo-base" alt="'.t('Home').'" />';
			
			if (isset($settings['logo_white']['fid']) && $settings['logo_white']['fid'] !=0) {
				$logo = file_load($settings['logo_white']['fid']);
				if (isset($logo->uri)){
					$logos .= '<img src="'.file_create_url($logo->uri).'" class="logo-base logo-white" alt="'.t('Home').'" />';
					$logos_i_class .= " ac-double-logos";
				}
			}
			
			if (acquia_theme_get_settings('retina_enabled', TRUE)) {
				if (isset($settings['retina_width']) && !empty($settings['retina_width'])) {
					$style = ' style="max-width:'.str_replace(array('px', '%'), '', $settings['retina_width']).'px"';
				}else{
					$style = '';
				}

				if (isset($settings['retina']['fid']) && $settings['retina']['fid'] !=0) {
					$logo = file_load($settings['retina']['fid']);
					if (isset($logo->uri)){
						$logos .= '<img src="'.file_create_url($logo->uri).'" class="logo-retina" alt="'.t('Home').'" '.$style.'/>';
					}
				}
				
				if (isset($settings['retina_white']['fid']) && $settings['retina_white']['fid'] !=0) {
					$logo = file_load($settings['retina_white']['fid']);
					if (isset($logo->uri)){
						$logos .= '<img src="'.file_create_url($logo->uri).'" class="logo-retina base-white" alt="'.t('Home').'" '.$style.'/>';
					}
				}
			}
			
			$logos = '<span class="'.$logos_i_class.'">' .$logos .'</span>';
			cache_set('acquia_header_logos', $logos);
			return $logos;
		}
	}
	return $cache;
}

/**
 * @todo {demo} set cache for logos
 */
function acquia_t_get_skin_logo_html($skin, $reset = FALSE) {
	$logos = &drupal_static(__FUNCTION__, array());

	if ($reset || !isset($logos[$skin])) {
		// @todo return default skin
		if (!$reset && $cache = cache_get(ACQUIA_SKIN_LOGOS_CID) && !empty($cache->data)) {
			$logos = $cache->data;
			$logos[$skin] = isset($logos[$skin]) ? $logos[$skin] : '';
		}else{
			acquia_include('skin', 'ac_skin');
			$skins = acquia_theme_skin_info();
			$logos_i_class = 'logos-i';
			
			if (isset($skins[$skin]) && isset($skins[$skin]['logo'])) {
				$logos[$skin] = '<img src="'.url($skins[$skin]['uri'].$skins[$skin]['logo'], array('absolute' => true)).'" class="logo-base" alt="'.t('home').'"/>';
				if (isset($skins[$skin]['logo-white'])) {
					$logos[$skin] .= '<img src="'.url($skins[$skin]['uri'].$skins[$skin]['logo-white'], array('absolute' => true)).'" class="logo-base logo-white" alt="'.t('home').'"/>';
					$logos_i_class .= " ac-double-logos";
				}
				$logos[$skin] = '<span class="'.$logos_i_class.'">' .$logos[$skin] .'</span>';
			}else{
				$logos[$skin] = '';
			}
		}
	}
	return $logos[$skin];
}
/**
 *
 */
function acquia_t_get_skin_logo_images(){
	$default_skin = isset($_COOKIE['acUserSkin']) ? $_COOKIE['acUserSkin'] : variable_get('ac_default_skin', 'dark-turquoise');
	return acquia_t_get_skin_logo_html($default_skin);
}
/**
 *
 */
function acquia_t_get_skin_header_layout($reset = false){
	$skins_h_layout = &drupal_static(__FUNCTION__, array());
	
	$default_skin = isset($_COOKIE['acUserSkin']) ? $_COOKIE['acUserSkin'] : variable_get('ac_default_skin', 'dark-turquoise');
	if ($reset || !isset($skins_h_layout[$default_skin])) {
		// no need to be defined
		$cid = 'acquia_skins_header_layout';
		// @todo return default skin
		if (!$reset && $cache = cache_get($cid) && !empty($cache->data)) {
			$skins_h_layout = $cache->data;
		}else{
			acquia_include('skin', 'ac_skin');
			$skins = acquia_theme_skin_info();
			foreach ($skins as $skin => $info){
				if (isset($info['header_layout'])){
					$skins_h_layout[$skin] = $info['header_layout'];
				}
			}
		}
	}

	return isset($skins_h_layout[$default_skin]) ? $skins_h_layout[$default_skin] : 'left';
}

/**
 * @todo
 */
function acquia_t_build_info_file($array, $prefix = FALSE) {
  $info = '';

  foreach ($array as $key => $value) {
    if (is_array($value)) {
      $info .= acquia_theme_build_info_file($value, (!$prefix ? $key : "{$prefix}[{$key}]"));
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
function acquia_t_get_absolute_image_url($src){
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