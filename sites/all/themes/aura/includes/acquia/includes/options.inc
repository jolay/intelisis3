<?php
/**
 *
 */

/**
 * Get default value of skin attribute
 *
 */
function acquia_get_attr_default_value($key, $attr, $type = 'skin', $default = NULL) {
	acquia_t_include('styles');
	
	$styles = acquia_styles_keys();
	if (isset($styles[$key][$type][$attr]['default'])) {
		return $styles[$key][$type][$attr]['default'];
	}else{
		return $default;
	}
}

/**
 * Get skin element structure
 */
function acquia_get_skin_element($key) {
  acquia_t_include('styles');
	$styles = acquia_styles_keys();
	if (isset($styles[$key])) {
		return $styles[$key];
	}else{
		return array();
	}
}

/**
 *
 */
function acquia_skin_preview($targets = NULL) {
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
