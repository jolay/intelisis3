<?php

/**
 * Returns array( 'rgba', 'ie_color' ).
 *
 * @param string $color.
 * @param string $ie_color.
 * @param int $opacity.
 *
 * @return array.
 */
function acquia_theme_make_ie_compat_rgba( $color, $ie_color, $opacity ) {
    $return = array(
        'color' => acquia_theme_color_hex2rgba( $color, $opacity ),
        'ie' => $ie_color
    );

    if ( $opacity == 100 ) {
        $return['ie'] = $color;
    }

    return $return;
}


/**
 * Description here.
 */
function acquia_theme_get_opacity( $opacity = 0 ) {
	$opacity = ($opacity > 0) ? $opacity/100 : 0;
	return $opacity;
}


/**
 * Description here.
 */
function acquia_theme_color_hex2rgb( $_color, $raw = false ) {
    
    if( is_array($_color) ) {
        $rgb_array = array_map('intval', $_color);    
    }else {

        $color = str_replace( '#', '', trim($_color) );

        if ( count($color) < 6 ) {
            $color .= $color;
        }

        $rgb_array = sscanf($color, '%2x%2x%2x');     

        if( is_array($rgb_array) && count($rgb_array) == 3 ) {
            $rgb_array = array_map('absint', $rgb_array);
        }else {
            return '';
        }
    }

    if ( !$raw ) {
        return sprintf( 'rgb(%d,%d,%d)', $rgb_array[0], $rgb_array[1], $rgb_array[2] );
    }
    return $rgb_array;
}


/**
 * Description here.
 */
function acquia_theme_color_hex2rgba( $color, $opacity = 0 ) {

    if ( !$color ) return '';

    $rgb_array = acquia_theme_color_hex2rgb( $color, true );

    return sprintf( 'rgba(%d,%d,%d,%s)', $rgb_array[0], $rgb_array[1], $rgb_array[2], acquia_theme_get_opacity( $opacity ) );
}

/**
 * Return web font properties array.
 *
 * @param string $font
 * @return object/bool Returns object{'font_name', 'bold', 'italic'} or false.
 */
function acquia_theme_make_web_font_object( $font, $defaults = array() ) {
    // defaults
    $weight = $style = 'normal';
    $family = 'Raleway';

    if ( !empty($defaults) ) { extract((array)$defaults); }

    $clear = explode('&', $font);
    $clear = explode(':', $clear[0]);
    
    if ( isset($clear[1]) ) {
        $vars = explode('italic', $clear[1]);
        
        if ( isset($vars[1]) ) $style = 'italic';
        
        if ( '700' == $vars[0] || 'bold' == $vars[0] ) {
          $weight = 'bold';
        } else if( '400' == $vars[0] || 'normal' == $vars[0] ) {
          $weight = 'normal';
        } else if( $vars[0] ) {
            $weight = $vars[0];
        }   
    }

    if ( '' != $clear[0] ) {
        $family = $clear[0];
    }

    $font = new stdClass();
    $font->family = $family;
    $font->style = $style;
    $font->weight = $weight;

    return $font;
}


/**
 * Description here.
 */
function acquia_get_css_img_attribute($image) {
	if(empty($image)) {
		return 'none';
	}
	return sprintf("url('%s')", $image);
}

/**
 *
 */
function acquia_merge_style_with_defaults(&$values, $style) {
 foreach ($style as $key => $props) {
	 if (is_array($props['default'])) {
		 foreach ($props['default'] as $attr => $value) {
			 if (!isset($value[$attr])) {
				 $values[$attr] = $value;
			 }
		 }
	 }elseif (!isset($values[$key])) {
		 $values[$key] = $props['default'];
	 }
 }
}

/**
 * Compile less vars from theme options.
 */
function acquia_theme_compile_less_vars($skin) {
	acquia_t_include('styles');
	acquia_t_include('utility');
	$image_defaults = array(
		'image'			=> '',
		'repeat'		=> 'repeat',
		'position_x'	=> 'center',
		'position_y'	=> 'center'
	);
	$skin_settings = acquia_styles_keys();
	
	$less_vars = array();
	$fonts = array();
	
	foreach ($skin_settings as $key => $settings) {
		if (empty($key)) continue;
		
		// extract scheme settings
		$settings['typo'] = isset($settings['typo']) ? $settings['typo'] : array();
		$settings['scheme'] = isset($settings['scheme']) ? $settings['scheme'] : array();
		$styles = array_merge_recursive($settings['typo'], $settings['scheme']);
		if (!empty($styles)) {
		 
			$values = isset($skin[$key]) ? $skin[$key] : array();
			acquia_merge_style_with_defaults($values, $styles);
			foreach ($styles as $attr => $prop) {
				$type = $prop['type'];
				$default = $prop['default'];
				$attr_values = isset($values[$attr]) ? $values[$attr] : array();

				switch($type) {
					// RGBA color
					case 'rgba_color':
						if (!isset($attr_values['color'])) {
							break;
						}
						if ($attr_values['opacity'] <100) {
							// make RGBA of color with opacity
							$attr_values = acquia_theme_make_ie_compat_rgba(
								$attr_values['color'],
								$attr_values['ie'],
								$attr_values['opacity']
							);
						}

						acquia_add_less_var($key, $attr, $attr_values['color'], $less_vars);
						acquia_add_less_var($key, $attr, $attr_values['ie'], $less_vars, 'ie');
						break;
						
					case 'bg':
						if (!isset($attr_values['image']) || empty($attr_values['image'])){
							break;
						}else{
							$attr_values['image'] = acquia_get_css_img_attribute(acquia_t_get_absolute_image_url($attr_values['image']));
						}
						
						if (!isset($attr_values['full']) || $attr_values['full'] == 1){
							$attr_values['repeat'] = 'no-repeat';
							$attr_values['attachment'] = 'fixed';
							$attr_values['size'] = 'cover';
							unset($attr_values['full']);
						}else{
							$attr_values['attachment'] = '~""';
							$attr_values['size'] = 'inherit';
						}
						
						foreach ($attr_values as $_key => $_value) {
							acquia_add_less_var($key, $attr, $_value, $less_vars, $_key);
						}
						break;
						 
					case 'font':
						$fonts[$attr_values] = $attr_values;
						$computed_font = acquia_theme_make_web_font_object($attr_values);
						if ( !$computed_font ) {
							break;
						}
						
						if (isset($prop['prefix'])) {
							$computed_font->family = $prop['prefix'] . $computed_font->family;
						}
						
						if (isset($prop['suffix'])) {
							$computed_font->family .= $prop['suffix'];
						}
						acquia_add_less_var($key, $attr, $computed_font->family, $less_vars);
						acquia_add_less_var($key, $attr, $computed_font->style, $less_vars, 'style');
						acquia_add_less_var($key, $attr, $computed_font->weight, $less_vars, 'weight');
						break;
					 
					// font-size
					default:
					 
						if (is_array($attr_values)) {
							$value = $attr_values[$type];
						}else{
							$value = $attr_values;
						}
						
						if ($type == 'number') {
							$value = intval($value);
						}else if ($type == 'transform') {
							switch ($value) {
								case 'up':
									$value = 'uppercase';
									break;
								case 'cap':
									$value = 'capitalize';
									break;
								case 'lo':
									$value = 'lowercase';
									break;
							  case 'it':
									$value = 'italic';
									break;
							}
						}

						if (isset($prop['prefix'])) {
							$value = $prop['prefix'] . $value;
						}
						
						if (isset($prop['suffix'])) {
							$value .= $prop['suffix'];
						}
						acquia_add_less_var($key, $attr, $value, $less_vars);
						break;
				}
				
			}
		}
	}
	
	
	// add shortcode data as less vars
	if (isset($skin['shortcodes'])) {
		foreach ($skin['shortcodes'] as $shortcode => $value) {
			if (!empty($value)) {
				acquia_add_less_var('sc', $shortcode, $value, $less_vars);
			}
		}
	}
	
	// add block titles style
	if (isset($less_vars['sc__ac_fancy_header_style']) &&
			in_array($less_vars['sc__ac_fancy_header_style'],
			 array('single_thin_bottom', 'single_thick_bottom', 'double_solid_thick_bottom'))
		 ) {
		$less_vars['block_title_style'] = 'bottom-borderd';
	}
	
	// add block titles style
	if (isset($less_vars['sc__ac_fancy_header_style']) &&
			in_array($less_vars['sc__ac_fancy_header_style'],
			 array('single_thin_bottom', 'single_thick_bottom', 'double_solid_thick_bottom'))
		 ) {
		$less_vars['block_title_style'] = 'bottom-borderd';
	}
	// add block titles style
	if (isset($less_vars['sc__ac_button_style']) &&
			in_array($less_vars['sc__ac_button_style'],
			 array('subtle', 'subtle-fade'))
		 ) {
		$less_vars['feature_style'] = 'subtle';
	}else{
		$less_vars['feature_style'] = 'normal';
	}
	
	// add block titles style
	if (isset($less_vars['header__bg__image']) &&
			empty($less_vars['header__bg__image'])) {
		$less_vars['header__bg__image'] = 'none';
	}
	
	// Header background
	$less_vars['header__bg__image'] = isset($less_vars['header__bg__image']) && !empty($less_vars['header__bg__image']) ? $less_vars['header__bg__image'] : 'none';

	return array('vars' => $less_vars, 'fonts' => $fonts);
}
/**
 *
 */
function acquia_add_less_var($key, $attr, $value, &$less_vars, $suffix = NULL){
	if (!empty($suffix)) {
		$less_vars[$key .'__' .$attr .'__' .$suffix] = $value;
	}else{
		$less_vars[$key .'__' .$attr] = $value;
	}
}
/**
 *
 */
function acquia_generate_custom_css($form, $form_state){
	// Merge typo and scheme settings
	$acquia = $form_state['values']['acquia'];
	$skin_vars = acquia_theme_get_skin_vars_from_theme($acquia);
	$css = acquia_theme_get_css_from_skin_vars($skin_vars);
	
	acquia_theme_save_skin_styles($css);
}

/**
 * Escape function for lessphp.
 *
 */
function acquia_lessphp_escape( $value ) {
	$v = &$value[2][1][1];
	$v = rawurlencode( $v );

	return $value;
}

/**
 *
 *
 */
function acquia_theme_get_css_from_skin_vars($skin){
	$generator = acquia_theme_compile_less_vars($skin);
	$less_vars = $generator['vars'];

	// Compile base accent color
	acquia_t_include('lessc');
	$less = new lessc;
	$less->registerFunction("escape", "acquia_lessphp_escape");

	$less->setVariables($less_vars);
	
	if (!empty($generator['fonts'])) {
		$css_header = acquia_get_google_fonts($generator['fonts']);
	}
	
	$css = $css_header;
	$css .= $less->compileFile(__DIR__ . "/skin.less");
 
	return $css;
}
/**
 *
 */
function acquia_get_google_fonts($fonts) {
	$fonts = array_filter($fonts, 'strlen');
	
	if(empty($fonts)) {
		return;
	}
	
	$subsets = array();
	$search = '&subset=';
	$safe_fonts = array_keys(acquia_websafe_fonts());
	foreach ($fonts as &$font) {
		if (in_array($font, $safe_fonts)) {
			continue;
		}
		$font = str_replace( ' ', '+', $font );
		if ($pos = stripos($font, $search)) {
			$subsets[] = substr($font, $pos + strlen($search));
			$font = substr($font, 0, $pos);
		}
	}
	
	$fonts = implode('|', $fonts);
	if (!empty($subsets)) {
		$fonts .= '&subset=' .implode(',', $subsets);
	}
	
	$protocol = "http";
	if ( isset( $_SERVER['HTTPS'] ) && $_SERVER['HTTPS'] == 'on' ) {
		$protocol = "https";
	}
	return "@import url(" .$protocol ."://fonts.googleapis.com/css?family=" .$fonts . ");\r\n";
}

/**
 *
 */
function acquia_theme_save_skin_styles($css, $file = NULL){
	$comment  = "/**\r\n";
	$comment .= " * Custom acquia theme css file\r\n";
	$comment .= " * 	Generated on ".format_date(time())."\r\n";
	$comment .= " * @copyright http://acquiathems.com\r\n";
	$comment .= " **/\r\n";
	
	$css = $comment .$css;
	
	if (empty($file)) {
		$file = variable_get('acquia_theme_custom_css', drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . '/css/skin.min.css');
	}

	if (!file_unmanaged_save_data($css, $file, FILE_EXISTS_REPLACE)) {
		drupal_set_message('Generating skin css file was unsucesful!');
	}
}

/**
 *
 */
function acquia_use_skin($form, &$form_state){
	$values = $form_state['values'];
	$skin = isset($form_state['values']['acquia_skin']['skin']) ? $form_state['values']['acquia_skin']['skin'] : NULL;
	
	if (empty($skin)) {
	 	return form_set_error('acquia_skin', t('Please select a skin!'));
	}
	
	$skins = acquia_theme_skin_info();
	
	if (!isset($skins[$skin])) {
	 	return form_set_error('acquia_skin', t('Selected skin is not valid!'));
	}
	$info = $skins[$skin];
	
	$cofig_path = drupal_realpath($info['uri'] . 'config.json');
	if (is_file($cofig_path) && $file_contents = file_get_contents($cofig_path)) {
		 $config = @drupal_json_decode($file_contents);
		 if (is_array($config) && !empty($config)) {
			 acquia_skin_override_theme_settings($config);
		 }
	}
	
	// override skin css content to the skin.min.css file
	$css_path =  drupal_realpath($info['uri'] . 'skin.min.css');
	if (is_file($css_path) && $css = file_get_contents($css_path)) {
		$file = variable_get('acquia_theme_custom_css', drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . '/css/skin.min.css');
	
		if (!file_unmanaged_save_data($css, $file, FILE_EXISTS_REPLACE)) {
			drupal_set_message('Overriding auto generated skin file to the theme skin.min.css file was unsucesful!');
		}
	}
	
	// override custom-skin.min.css file to the theme custom-skin.min.css file
	$css_path =  drupal_realpath($info['uri'] . 'custom-skin.min.css');
	if (is_file($css_path) && $css = file_get_contents($css_path)) {
		$file = variable_get('acquia_theme_custom_skin_css', drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . '/css/custom-skin.min.css');
	
		if (!file_unmanaged_save_data($css, $file, FILE_EXISTS_REPLACE)) {
			drupal_set_message('Overriding Custom skin file to the theme skin.min.css file was unsucesful!');
		}
	}
	
	// override custom-skin.sass file to the theme custom-skin.sass file
	$css_path =  drupal_realpath($info['uri'] . 'custom-skin.scss');
	if (is_file($css_path) && $css = file_get_contents($css_path)) {
		$file = variable_get('acquia_theme_custom_skin_sass', drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . '/sass/custom-skin.scss');
	
		if (!file_unmanaged_save_data($css, $file, FILE_EXISTS_REPLACE)) {
			drupal_set_message('Overriding Custom skin file to the theme skin.min.css file was unsucesful!');
		}
	}
	
}

/**
 * @todo
 */
function acquia_skin_override_theme_settings($config) {
	if (empty($config)) {
		return;
	}
	
	$theme = variable_get('ACQUIA_THEME_NAME');
	$settings = variable_get("theme_{$theme}_settings");
	if (isset($settings['acquia'])) {
		$settings['acquia'] = $config;
	}
	
	variable_set("theme_{$theme}_settings", $settings);
}

/**
 * Form submit handler for the theme settings form to clean up stale values.
 */
function acquia_generate_skin($form, &$form_state) {
	$values = $form_state['values'];
	$acquia = $form_state['values']['acquia'];
	$info = $values['skin_generator'];
	
	acquia_variable_set('skin_generator', $values['skin_generator']);
	if (!isset($info['name']) || empty($info['name'])) {
		return form_set_error('skin_generator', t('Please provide a name for your skin!'));
	}

	acquia_include('file');
	acquia_include('utility');
	acquia_t_include('utility');
	
	$theme = variable_get('ACQUIA_THEME_NAME');
	// Check that the destination is writable.
  $temporary_directory = 'temporary://';
	
	// Prepare target locations for generated files.
	$id = $theme . '-' . substr(hash('sha256', serialize($values['skin_generator']['name']) . microtime()), 0, 8);
	$paths['skins'] = acquia_variable_get('theme_skins_dir');
	$paths['target'] = $paths['skins'] . '/' . $id;
	
	foreach ($paths as $path) {
	 file_prepare_directory($path, FILE_CREATE_DIRECTORY);
	}
	
  $paths['target'] = $paths['target'] . '/';
	
	// clean skin info
	acquia_skin_generator_prepare_info($info, $acquia, $paths['target']);
	
	$files = array(
		'config.json' => drupal_json_encode($acquia),
		'skin.info' => acquia_t_build_info_file($info)
	);
	
  // Create base files
	foreach ($files as $file => $data) {
		$uri = $paths['target'] . $file;
		if (!file_exists($uri) && !file_unmanaged_save_data($data, $uri, FILE_EXISTS_REPLACE)) {
			return form_set_error('skin_generator', t('Generating skin was unsuccessful!'));
		}
	}
	
	// save Skin settings
	$skin_vars = acquia_theme_get_skin_vars_from_theme($acquia);
	$css = acquia_theme_get_css_from_skin_vars($skin_vars);
	
	// save to skin.min.css file
	acquia_theme_save_skin_styles($css);
	
	// save to new skin css file
	acquia_theme_save_skin_styles($css, $paths['target'] . 'skin.min.css');
	
	// save to new skin css file
	// @todo change it to the GURU way
	$custom_skin_path = variable_get('acquia_theme_custom_skin_css', drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . '/css/custom-skin.min.css');
	if (is_file($custom_skin_path) && $styles = file_get_contents($custom_skin_path)) {
		if (!empty($styles) && !file_unmanaged_save_data($styles, $paths['target'] . 'custom-skin.min.css', FILE_EXISTS_REPLACE)) {
			drupal_set_message('Generating custom skin file to the new skin was unsucesful!');
		}
	}
	
	// saving custom-skin.sass to new skin folder
	// @todo change it to the GURU way
	$custom_skin_path = variable_get('acquia_theme_custom_skin_sass', drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')) . '/sass/custom-skin.scss');
	if (is_file($custom_skin_path) && $styles = file_get_contents($custom_skin_path)) {
		if (!empty($styles) && !file_unmanaged_save_data($styles, $paths['target'] . 'custom-skin.scss', FILE_EXISTS_REPLACE)) {
			drupal_set_message('Generating custom skin file to the new skin was unsucesful!');
		}
	}

	cache_clear_all(ACQUIA_SKINS_CID, 'cache');
}

/**
 *
 */
function acquia_theme_get_skin_vars_from_theme($acquia){
	$skin_vars = $acquia['skin'];
	$skin_vars = array_merge_recursive($skin_vars['scheme'], $skin_vars['typo']);
  $skin_vars['shortcodes'] = $acquia['shortcodes'];
	
	return $skin_vars;
}

/**
 * @todo
 */
function acquia_skin_generator_prepare_info(&$info, $acquia, $target) {
	if (isset($info['submit'])) {
		unset($info['submit']);
	}
	
	if (isset($info['screenshot']['fid']) && !empty($info['screenshot']['fid'])) {
		$screenshot = file_load($info['screenshot']['fid']);
		if ($path = file_unmanaged_copy($screenshot->uri, $target . $screenshot->filename)) {
			$info['screenshot'] = $screenshot->filename;
		}
	}
	
	if (isset($acquia['skin']['scheme']['general']['accent-color'])) {
		$info['accent-color'] = $acquia['skin']['scheme']['general']['accent-color'];
	}
	
	// add timestamp
	$info['datestamp'] = time();
}

/**
 * Helper function for discovering shortcodes, shortcodes or other plugins of any
 * sort in the module trail.
 *
 * @param $type
 *   An extension type (e.g. shortcode or layout).
 * @param $theme
 *   (Optional) The key (machine-readable name) of a theme. Defaults to the key
 *   of the current theme.
 *
 * @return array
 *   An array containing the discovered definitions.
 */
function acquia_theme_skin_info($path = NULL, $reset = FALSE, $type = 'info') {
	$skins = &drupal_static(__FUNCTION__, NULL);

	if ($reset || !isset($skins)) {
		if (!$reset && $cache = cache_get(ACQUIA_SKINS_CID) && !empty($cache->data)) {
			$skins = $cache->data;
		}else{
			if (empty($path)) {
			 $path = acquia_variable_get('theme_skins_dir');
			}
			$skins = array();
			foreach (file_scan_directory($path, '/\.' . $type . '$/') as $file) {
				$skin_path = str_replace($file->filename, '', $file->uri);
				$skin_mn = str_replace(array(acquia_variable_get('theme_skins_dir'), '/', '\\'), '', $skin_path);
				$skins[$skin_mn] = drupal_parse_info_file($file->uri);
				$skins[$skin_mn]['uri'] = $skin_path;
			}
			cache_set(ACQUIA_SKINS_CID, $skins);
		}
	}
	
	return $skins;
}
