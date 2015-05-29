<?php

/**
 * @file
 * Contains the theme settings form elements for the header extension.
 */

/**
 * Implements hook_extension_EXTENSION_theme_settings_form_alter().
 */
function aura_extension_header_settings_form($element, &$form, $form_state) {

  // include theme required files
	acquia_include('options');
  acquia_t_include('options');
	
	acquia_t_include('themes');
	acquia_theme_settings_wrap_acquia($element);
	
	$element['acquia']['enable_topbar'] = array(
		'#type' => 'checkbox',
		'#title' => t('Enable Topbar?'),
		'#description' => t('Customize topbar region'),
		'#default_value' => acquia_theme_get_settings('enable_topbar', TRUE),
	);
	
	$element['acquia']['topbar'] = array(
		'#type' => 'fieldset',
		'#title' => t('Topbar menu'),
		'#description' => t('Customize topbar region'),
		'#states' => array(
			'disabled' => array(
					':input[name="acquia[enable_topbar]"]' => array('checked' => FALSE),
			),
			'invisible' => array(
					':input[name="acquia[enable_topbar]"]' => array('checked' => FALSE),
			),
		),
	);
	
	$element['acquia']['topbar']['enable_contact_info'] = array(
		'#type' => 'checkbox',
		'#title' => t('Show contact information?'),
		//'#description' => t('Customize topbar region'),
		'#default_value' => acquia_theme_get_settings('enable_contact_info', TRUE),
	);
	
	$element['acquia']['topbar']['contact_info'] = array(
		'#type' => 'fieldset',
		'#title' => t('Contact Information'),
		'#description' => '',
		'#collapsible' => TRUE,
		'#collapsed' => TRUE,
		'#states' => array(
			'disabled' => array(
					':input[name="acquia[topbar][enable_contact_info]"]' => array('checked' => FALSE),
			),
			'invisible' => array(
					':input[name="acquia[topbar][enable_contact_info]"]' => array('checked' => FALSE),
			),
		),
	);
	
	$defaults = acquia_theme_get_settings('contact_info', array(), 'topbar');
	foreach (acquia_contact_info() as $key => $title) {
		$element['acquia']['topbar']['contact_info'][$key] = array(
			'#type' => 'textfield',
			'#title' => $title,
			'#description' => '',
			'#default_value' => isset($defaults[$key]) ? $defaults[$key] : NULL,
		);
	}

	$element['acquia']['topbar']['enable_social_icon'] = array(
		'#type' => 'checkbox',
		'#title' => t('Show Social icons?'),
		//'#description' => t('Customize topbar region'),
		'#default_value' => acquia_theme_get_settings('enable_social_icon', TRUE, 'topbar'),
	);
	
	$element['acquia']['topbar']['social_icons']= array(
		'#type' => 'fieldset',
		'#title' => t('Social Icons'),
		'#collapsible' => TRUE,
		'#collapsed' => TRUE,
		'#states' => array(
			'disabled' => array(
					':input[name="acquia[topbar][enable_social_icon]"]' => array('checked' => FALSE),
			),
			'invisible' => array(
					':input[name="acquia[topbar][enable_social_icon]"]' => array('checked' => FALSE),
			),
		),
	);
	
	$defaults = acquia_theme_get_settings('social_icons', array(), 'topbar');
	foreach (acquia_social_icons() as $network => $title) {
		$element['acquia']['topbar']['social_icons'][$network] = array(
			'#type' => 'textfield',
			'#title' => $title,
			'#description' => '',
			'#default_value' => isset($defaults[$network]) ? $defaults[$network] : NULL,
		);
	}
	
	$element['acquia']['header_layout'] = array(
		'#attributes' => array('class' => array('ac-img-sel-target', 'ac-hidden')),
		'#type' => 'select',
		'#options' => acquia_header_layouts(),
		'#title' => t('Choose a header layout'),
		'#default_value' => acquia_theme_get_settings('header_layout', 'left'),
		'#full_description' => acquia_theme_heder_layouts_preview(),
  );

	$element['acquia']['header_content'] = array(
		'#type' => 'textarea',
		'#title' => t('header content'),
		'#default_value' => acquia_theme_get_settings('header_content', ''),
		'#states' => array(
			'enabled' => array(
					':input[name="acquia[header_layout]"]' => array('value' => 'classic'),
			),
			'visible' => array(
					':input[name="acquia[header_layout]"]' => array('value' => 'classic'),
			),
		),
  );

	$element['acquia']['fixed_header'] = array(
		'#type' => 'checkbox',
		'#title' => t('Enable fixed header'),
		'#description' => '',
		'#default_value' => acquia_theme_get_settings('fixed_header', TRUE)
	);

  $element['acquia']['mobile_menu_type'] = array(
    '#type' => 'select',
    '#title' => t('Mobile Menu type'),
    '#description' => t('You can choose which kind of main menu you would like to display on small devices like tablets or smartphones.'),
    '#default_value' => acquia_theme_get_settings('mobile_menu_type', ''),
    '#options' => acquia_mobile_menu_types(),
  );
	  
	// Logo
	$element['logo'] = $form['logo'];
	unset($form['logo']);
	$element['logo']['#collapsible'] = false;
	
	$logos = omega_theme_get_setting('logos', array());
	$element['logo']['logo_white'] = array(
		'#type' => 'media',
		'#title' => t('logo image for white background'),
		'#description' => t('Leave it empty to use default logo image.'),
		'#default_value' => isset($logos['logo_white']) ? $logos['logo_white'] : array(),
		'#tree' => TRUE,
		'#parents' => array('logos', 'logo_white'),
		'#media_options' => array(
			'global' => array(
				'types' => array('image'),
			),
		),
	);
		
	$element['logo']['retina_enabled'] = array(
		'#type' => 'checkbox',
		'#title' => t('High-DPI (retina) images'),
		'#description' => '',
		'#default_value' => omega_theme_get_setting('retina_enabled', TRUE)
	);
	
	$element['logo']['retina'] = array(
		'#type' => 'fieldset',
		'#title' => t('Retina logo images'),
		'#description' => '',
		'#tree' => TRUE,
		'#parents' => array('logos'),
		'#states' => array(
			'disabled' => array(
					':input[name="retina_enabled"]' => array('checked' => FALSE),
			),
			'invisible' => array(
					':input[name="retina_enabled"]' => array('checked' => FALSE),
			),
		),
	);
	
	$element['logo']['retina']['retina_width'] = array(
		'#type' => 'textfield',
		'#title' => t('Retina logo width'),
		'#description' => t('If retina logo is uploaded, please enter the standard logo (1x) version width, do not enter the retina logo width.'),
		'#default_value' => isset($logos['retina_width']) ? $logos['retina_width'] : '',
		'#field_suffix' => t('px'),
	);
	
	$element['logo']['retina']['retina'] = array(
		'#type' => 'media',
		'#title' => t('Main Retina logo image'),
		'#description' => '',
		'#default_value' => isset($logos['retina']) ? $logos['retina'] : array(),
		'#media_options' => array(
			'global' => array(
				'types' => array('image'),
			),
		),
	);
	
	$element['logo']['retina']['retina_white'] = array(
		'#type' => 'media',
		'#title' => t('Retina logo image for white background'),
		'#description' => t('Leave it empty to use default retina logo image.'),
		'#default_value' => isset($logos['retina_white']) ? $logos['retina_white'] : array(),
		'#media_options' => array(
			'global' => array(
				'types' => array('image'),
			),
		),
	);
	
	$element['acquia']['main_menu_style'] = array(
		'#type' => 'select',
		'#title' => t('Main menu style'),
		'#description' => t('Select a style for your main menu navigation.'),
		'#default_value' => acquia_theme_get_settings('main_menu_style', 'nav-bordered nav-fade-in'),
		'#options' => acquia_menu_types(),
	);

  $form['#submit'][] = 'omega_extension_header_settings_form_submit';
  return $element;
}

/**
 * Form submit handler for the theme settings form to clean up stale values.
 */
function omega_extension_header_settings_form_submit($form, &$form_state) {

	$values = $form_state['values'];
	if (isset($values['enable_social_icon']) && $values['enable_social_icon'] && isset($values['social_icons'])) {
		$values['social_icons'] = array_filter($values['social_icons'], 'strlen');
		cache_set('acquia_topbar_socials', theme('acquia_topbar_socials', array('socials' => $values['social_icons'])));
	}
	
	if (isset($values['enable_contact_info']) && $values['enable_contact_info'] && isset($values['contact_info'])) {
		$values['contact_info'] = array_filter($values['contact_info'], 'strlen');
		cache_set('acquia_contact_info', theme('acquia_topbar_contact_info', array('info' => $values['contact_info'])));
	}
}


/**
 * acquia_theme_heder_layouts_preview
 */
function acquia_theme_heder_layouts_preview(){
	$out ='<div id="header-layout-sel" class="ac-bg-sel flex-sel-size" data-target="acquia[header_layout]">';
	acquia_t_include('options');
	$path = drupal_get_path('theme', 'aura') . '/includes/header/layouts';
	$layouts = acquia_header_layouts();
	if (!empty($layouts)){
		foreach ($layouts as $layout => $title) {
			$out .='<span data-uri="' .$layout .'" class="ac-sel layout-'.$layout.'" title="' .$layout .'"><img src="'.file_create_url($path . '/' . $layout .'.png').'" /><i></i></span>';
		}
	}
	$out .='</div>';
	return $out;
}