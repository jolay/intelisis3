<?php
/**
 * Theme function utility
 */
@define ('ACQUIA_THEME_PATTERN_PATH',  acquia_variable_get('theme_presets') . '/patterns');
 /**
  * Get list of available patterns from an acquia theme pattern directory
  */
 function acquia_theme_get_patterns($reset = false) {
	$patterns = &drupal_static(__FUNCTION__, NULL);
	
  if (!isset($patterns) || $reset) {
    if (!$reset && $patterns = cache_get('acquia_theme_patterns', 'cache')) {
      $patterns = $patterns->data;
    }else{
			$patterns = array();
			if(is_dir(ACQUIA_THEME_PATTERN_PATH)) {
				$patterns = file_scan_directory(ACQUIA_THEME_PATTERN_PATH, '/\.(gif|png|jpg|jpeg)$/i');
			}
			asort($patterns);
			cache_set('acquia_theme_patterns', $patterns);
		}
	}
	return $patterns;
 }

/**
 * Generate HTML image of avilable patterns
 */
function acquia_theme_generate_pattern_list(){
	$cache = &drupal_static(__FUNCTION__, NULL);
	
	if (!isset($cache)) {
		$cache = '';
		$patterns = acquia_theme_get_patterns();
		if (!empty($patterns)){
			foreach ($patterns as $pattern) {
				$relative_path = str_replace(drupal_get_path('theme', variable_get('ACQUIA_THEME_NAME')), '', $pattern->uri);
				$cache .='<span style="background-image:url('.url($pattern->uri, array('absolute' => TRUE)).')" data-uri="' .$relative_path .'" data-src="' .url($pattern->uri, array('absolute' => TRUE)) .'" class="ac-sel img-'.$pattern->name.'"><i></i></span>';
			}
		}
	}
	
	return $cache;
}


/**
 * hex 2 rgba
 */
function hex2rgba($color, $opacity = false) {
	$default = 'rgb(0,0,0)';

	//Return default if no color provided
	if(empty($color))
          return $default; 

	//Sanitize $color if "#" is provided 
        if ($color[0] == '#' ) {
        	$color = substr( $color, 1 );
        }

        //Check if color has 6 or 3 characters and get values
        if (strlen($color) == 6) {
                $hex = array( $color[0] . $color[1], $color[2] . $color[3], $color[4] . $color[5] );
        } elseif ( strlen( $color ) == 3 ) {
                $hex = array( $color[0] . $color[0], $color[1] . $color[1], $color[2] . $color[2] );
        } else {
                return $default;
        }

        //Convert hexadec to rgb
        $rgb =  array_map('hexdec', $hex);

        //Check if opacity is set(rgba or rgb)
        if($opacity){
        	if(abs($opacity) > 1)
        		$opacity /= 100;
        	$output = 'rgba('.implode(",",$rgb).','.$opacity.')';
        } else {
        	$output = 'rgb('.implode(",",$rgb).')';
        }
        //Return rgb(a) color string
        return $output;
}

/**
 *
 */
function acquia_theme_wrap_acquia_admin_style(&$form,  $settings = array()){
	
	$settings += array(
	 'logo' => TRUE,
	 'support_nav' => FALSE,
	 'vtabs' => FALSE,
	 'title' => drupal_get_title(),
	 'subtitle' => '',
	 'attributes' => array(
	   'class' => array(),
		),
	);

	if ($settings['vtabs']) {
		acquia_add_vertical_tabs_style($form);
	}
	
	$form['ac-header'] = array(
   '#markup' => acquia_theme_options_header($settings),
   '#weight' => -100,
  );
	
	$form['#suffix'] = acquia_theme_options_footer();
}

/**
 * Builds theme settings form header
 */
function acquia_theme_options_header($settings = array()){
 
	if (!is_array($settings['attributes']['class'])) {
		$settings['attributes']['class'] = explode(' ', $settings['attributes']['class']);
	}

	$settings['attributes']['class'] = array_merge(array('ac-admin', 'acquia-theme-options'), $settings['attributes']['class']);

	if ($settings['vtabs']) {
		$settings['attributes']['class'][] = 'ac-vtabs-enabled';
	}
  // fake Submit BTN
	$form = array();
	$form['submit'] = array(
		'#type' => 'submit',
    '#value' => t('Save configuration'),
		'#attributes' => array('data-target' => '#system-theme-settings', 'class' => array('fake-submit'))
	);
	
	$ac_logo_path = url(drupal_get_path('module', 'acquia') . '/images/acquia.png', array('absolute' => TRUE));
	$out  = '		<div'.drupal_attributes($settings['attributes']).'>';
	$out .= '			<div id="ac-options-header" class="ac-options-header">';
	$out .= '				<div class="header-top">';
	$out .= '						<div id="js-warning" style="display: none;">Warning- This options panel will not work properly without javascript!</div>';
	
	if ($settings['logo'] == TRUE) {
		$out .= '						<a class="logo ac-cell" href="http://acquiathemes.com" title="acquiathemes"><img src="'.$ac_logo_path.'" /></a>';
	}
	
	$out .= '						<div class="info ac-cell">';
	$out .= '							<h3 class="title">'.$settings['title'].'</h3>';
	$out .= '							<span class="subtitle">'.$settings['subtitle'].'</span>';
	$out .= '						</div>';


	if ($settings['support_nav'] == TRUE) {
		$out .= '						<nav id="main-nav" class="ac-main-nav ac-cell">';
		$out .= '							<ul>';
		$out .= '								<li><a href="http://support.aquiathemes.net">'.t('Support').'</a></li>';
		$out .= '								<li><a href="http://support.aquiathemes.net/docs/'.variable_get('ACQUIA_THEME_NAME').'">'.t('Docuementation').'</a></li>';
		$out .= '								<li><a href="http://support.aquiathemes.net/changelog/'.variable_get('ACQUIA_THEME_NAME').'">'.t('Changelog').'</a></li>';
		$out .= '								<li><a href="http://demo.aquiathemes.net/aura">'.t('Demo').'</a></li>';
		$out .= '							</ul>';
		$out .= '						</nav>';
	}

	if ($settings['vtabs'] == TRUE) {
		$out .= '							<a class="toggle-tabs ac-cell" href="#" data-target="#system-theme-settings" title="'.t('Show all Options').'">';
		$out .= '				  			'. theme('acquia_iconfont', array('class' => array('icon-btn', 'admin-icon-article'))) . '';
		$out .= '							</a>';
	}
	
	$out .= '					</div>';
	$out .= '			</div>';

	return $out;
}

/**
 * Builds theme settings form footer
 */
function acquia_theme_options_footer(){
 return '</div>';
}


/**
 * Attach Vertical Tabs CSS to the form 
 *
 * @param {array} $form
 */
function acquia_add_vertical_tabs_style(&$form) {
	$loaded = drupal_add_css();
	$new = drupal_add_css(drupal_get_path('module', 'acquia') . '/css/theme-settings.css');
	$css = array_diff_key($new, $loaded);

  $form['#attached']['css'] = $css;
}


