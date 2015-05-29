<?php
// $Id
/**
 * Helper methods to work with forms
 */

/**
 *  Line Height form structure
 */
function acquia_format_lheight_element($key, $settings, $values = array()){
  acquia_t_include('options');
	return array(
		'#attributes' => array('class' => array('ac-slider'), 'data-target' => $key, 'data-css-attr' => 'line-height', 'data-val-suffix' => 'px', 'data-min' => 9, 'data-max' => 70, 'data-step' => 1),
		'#type' => 'textfield',
		'#title' => t('@type Line Height', array('@type' => $settings['title'])),
		'#default_value' => isset($values[$key]['lheight']) ? $values[$key]['lheight'] : acquia_get_attr_default_value($key, 'lheight'),
		'#description' => t('default Line Height is @val', array('@val' => acquia_get_attr_default_value($key, 'lheight'))),
		'#field_suffix' => t('px'),
	);
}

/**
 * text transform form structure
 */
function acquia_format_transform_element($key, $attr, $values = array()){
  acquia_t_include('options');
	$element = acquia_get_skin_element($key);
	$default = $element['typo'][$attr]['default'];
	
	return array(
		'#attributes' => array('class' => array('ac-transform'), 'data-target' => $key),
		'#type' => 'select',
		'#options' => acquia_theme_text_transforms(),
		'#title' => t('@type text transform', array('@type' => $element['title'])),
		'#default_value' => isset($values[$key][$attr]) ? $values[$key][$attr] : $default,
		'#description' => t('default text transform is @val', array('@val' => acquia_theme_text_transforms($default))),
	);
}

/**
 * Slider form structure
 */
function acquia_format_slider_element($key, $attr, $values = array(), $type = 'skin'){
  acquia_t_include('options');
	$element = acquia_get_skin_element($key);
	$default = $element[$type][$attr]['default'];
	$item = array(
		'#attributes' => array('class' => array('ac-slider')),
		'#type' => 'textfield',
		'#title' => t('@type @title', array('@type' => $element['title'], '@title' => $element[$type][$attr]['title'])),
		'#default_value' => isset($values[$key][$attr]) ? $values[$key][$attr] : $default,
		'#description' => t('Default color is @val', array('@val' => $default)),
	);
	
	if (isset($element[$type][$attr]['css-attr'])) {
		$item['#attributes']['data-target'] = $key;
		$item['#attributes']['data-css-attr'] = $element[$type][$attr]['css-attr'];
		$item['#attributes']['data-min'] = isset($element[$type][$attr]['min']) ? $element[$type][$attr]['min'] : 0;
		$item['#attributes']['data-max'] = isset($element[$type][$attr]['max']) ? $element[$type][$attr]['max'] : 100;
		$item['#attributes']['data-step'] = isset($element[$type][$attr]['step']) ? $element[$type][$attr]['step'] : 1;
	}
	
	if (isset($element[$type][$attr]['data'])) {
		foreach($element[$type][$attr]['data'] as $data => $value) {
			$item['#attributes']['data-' . $data] = $value;
		}
	}
	
	if (isset($element[$type][$attr]['suffix'])) {
		$item['#field_suffix'] = $element[$type][$attr]['suffix'];
	}

	return $item;
}
/**
 * color form structure
 */
function acquia_format_dividercolor_element($key, $settings, $values = array()){
  acquia_t_include('options');
	$default = acquia_get_attr_default_value($key, 'dividercolor');
	return array(
		'#attributes' => array('class' => array('field-colorpicker')),
		'#type' => 'textfield',
		'#title' => t('@type divider Color', array('@type' => $settings['title'])),
		'#default_value' => isset($values[$key]['dividercolor']) ? $values[$key]['dividercolor'] : $default,
		'#description' => t('Default divider color is @val', array('@val' => $default)),
	);
}

/**
 * Font family form structure
 */
function acquia_format_font_element($key, $attr, $values = array()){
  acquia_t_include('options');
	$element = acquia_get_skin_element($key);
	$default = $element['typo'][$attr]['default'];
	$item = array(
		'#attributes' => array('class' => array('ac-g-fonts')),
		'#type' => 'select',
		'#title' => t('@type @title', array('@type' => $element['title'], '@title' => $element['typo'][$attr]['title'])),
		'#options' => array_merge(acquia_websafe_fonts(), acquia_google_fonts()),
		'#default_value' => isset($values[$key][$attr]) ? $values[$key][$attr] : $default,
		'#description' => t('Default font is @val', array('@val' => $default)),
	);
	if (isset($element['typo'][$attr]['css-attr'])) {
		$item['#attributes']['data-target'] = $key;
		$item['#attributes']['data-css-attr'] = $element['typo'][$attr]['css-attr'];
	}
	return $item;
}


/**
 * color form structure
 */
function acquia_format_hex_color_element($key, $attr, $values = array()){
  acquia_t_include('options');
	$element = acquia_get_skin_element($key);
	$default = $element['scheme'][$attr]['default'];
	$item = array(
		'#attributes' => array('class' => array('field-colorpicker')),
		'#type' => 'textfield',
		'#title' => t('@type @title', array('@type' => $element['title'], '@title' => $element['scheme'][$attr]['title'])),
		'#default_value' => isset($values[$key][$attr]) ? $values[$key][$attr] : $default,
		'#description' => t('Default color is @val', array('@val' => $default)),
	);
	
	if (isset($element['scheme'][$attr]['css-attr'])) {
		$item['#attributes']['class'][] = 'ac-skin-color';
		$item['#attributes']['data-target'] = $key;
		$item['#attributes']['data-css-attr'] = $element['scheme'][$attr]['css-attr'];
	}

	if (isset($element['scheme'][$attr]['invisible'])) {
		foreach ($element['scheme'][$attr]['invisible'] as $attr => $condition) {
			$item['#states']['invisible'] = array(':input[name="skin['.$key.']['.$attr.']"]' => $condition);
			$item['#states']['disabled'] = array(':input[name="skin['.$key.']['.$attr.']"]' => $condition);
		}
	}
	return $item;
}

/**
 * Background form structure
 */
function acquia_format_bg_element($key, $attr, $values = array()){
  acquia_include('theme');
  acquia_t_include('options');
	
	$element = acquia_get_skin_element($key);
	$default = $element['scheme'][$attr]['default'];

	$form = array(
		'#type' => 'container',
	);
	
	$default = isset($values[$key]['bg']['image']) ? $values[$key]['bg']['image'] : (isset($default['image']) ? $default['image'] : '');
	$src = '';
	if (!empty($default)) {
		acquia_t_include('utility');
		$src = acquia_t_get_absolute_image_url($default);
	}
	$form['image'] = array(
		'#attributes' => array('class' => array('ac-img-sel-target ac-upload'), 'data-target' => $key, 'data-src' => $src),
		'#type' => 'textfield',
		'#title' => t('@type background', array('@type' => $element['title'])),
		'#default_value' => $default,
		'#full_description' => '<div class="ac-bg-sel">' .acquia_theme_generate_pattern_list() . '</div>',
		'#field_suffix' => '<span class="ac-reset">x</span><a href="#" title="'.t('upload file').'" class="button upload-btn">'.t('Upload file').'</a>',
		'#description' => t('click on to choose image from media library or upload image to your media library')
	);
	
	$form['repeat'] = array(
		'#type' => 'select',
		'#title' => t('repeat'),
		'#options' => array(
			'no-repeat' => t('no repeat'),
			'repeat-x' => t('repeat x'),
			'repeat-y' => t('repeat y'),
			'repeat' => t('repeat'),
		),
		'#default_value' => isset($values[$key]['bg']['repeat']) ? $values[$key]['bg']['repeat'] : (isset($default['repeat']) ? $default['repeat'] : NULL),
	);
	$form['posx'] = array(
		'#type' => 'select',
		'#title' => t('position-x'),
		'#options' => array(
			'left' => t('left'),
			'right' => t('right'),
			'center' => t('center'),
		),
		'#default_value' => isset($values[$key]['bg']['posx']) ? $values[$key]['bg']['posx'] : (isset($default['posx']) ? $default['posx'] : NULL),
	);
	$form['posy'] = array(
		'#type' => 'select',
		'#title' => t('position-y'),
		'#options' => array(
			'top' => t('top'),
			'bottom' => t('bottom'),
			'center' => t('center'),
		),
		'#default_value' => isset($values[$key]['bg']['posy']) ? $values[$key]['bg']['posy'] : (isset($default['posy']) ? $default['posy'] : NULL),
	);
	
	$form['full'] = array(
		'#type' => 'checkbox',
		'#title' => t('Fullscreen'),
		'#default_value' => isset($values[$key]['bg']['full']) ? $values[$key]['bg']['full'] : (isset($default['full']) ? $default['full'] : FALSE),
	);
	return $form;
}

/**
 * rgba_color form structure
 */
function acquia_format_rgba_color_element($key, $attr, $values = array()){
  acquia_t_include('options');
  acquia_include('theme');
	$element = acquia_get_skin_element($key);
	$default = $element['scheme'][$attr]['default'];
	$form = array(
		'#type' => 'container',
	);
	
	$form['color'] = array(
		'#attributes' => array('class' => array('field-colorpicker')),
		'#type' => 'textfield',
		'#title' => t('@type @title', array('@type' => $element['title'], '@title' => $element['scheme'][$attr]['title'])),
		'#default_value' => isset($values[$key][$attr]['color']) ? $values[$key][$attr]['color'] : (isset($default['color']) ? $default['color'] : ''),
		'#field_suffix' => '<span class="ac-reset">x</span>',
		//'#description' => t('click on to choose image from media library or upload image to your media library')
	);
	
	$form['opacity'] = array(
		'#attributes' => array(
			'class' => array('ac-slider'),
			'data-min' => 0,
			'data-max' => 100,
			'data-step' => 1,
		),
		'#type' => 'textfield',
		'#title' => t('@type @title depth', array('@type' => $element['title'], '@title' => $element['scheme'][$attr]['title'])),
		'#default_value' => isset($values[$key][$attr]['opacity']) ? $values[$key][$attr]['opacity'] : (isset($default['opacity']) ? $default['opacity'] : 100),
		//'#description' => t('Default color depth is @val', array('@val' => $default)),
	);
	
	if (isset($element['scheme'][$attr]['css-attr'])) {
		$form['color']['#attributes']['class'][] = 'ac-skin-color';
		$form['color']['#attributes']['data-css-attr'] = $element['scheme'][$attr]['css-attr'];
		$form['color']['#attributes']['data-target'] = $key;
		
		$form['opacity']['#attributes']['data-target'] = $key;
		$form['opacity']['#attributes']['data-css-attr'] = 'opacity';
	}
	
	$form['ie'] = array(
		'#attributes' => array('class' => array('field-colorpicker')),
		'#type' => 'textfield',
		'#title' => t('@type IE @title', array('@type' => $element['title'], '@title' => $element['scheme'][$attr]['title'])),
		'#default_value' => isset($values[$key][$attr]['ie']) ? $values[$key][$attr]['ie'] : (isset($default['ie']) ? $default['ie'] : ''),
		'#field_suffix' => '<span class="ac-reset">x</span>',
		//'#description' => t('click on to choose image from media library or upload image to your media library'),
	);
	
	return $form;
}
