<?php

/**
 * @file
 * Contains the theme settings form elements for the layouts extension.
 */

/**
 * Implements hook_extension_EXTENSION_theme_settings_form_alter().
 */
function aura_extension_layouts_settings_form($element, &$form, $form_state) {
  
  $element['boxed'] = array(
    '#attributes' => array('data-help' => t('Turn it on to enable boxed page layout.')),
    '#type' => 'checkbox',
    '#title' => t('Boxed Layout?'),
    '#descripton' => t('Turn it on to enable boxed layout.'),
    '#parents' => array('acquia', 'boxed'),
    '#default_value' => acquia_theme_get_settings('boxed', FALSE),
  );
  
  if ($layouts = omega_layouts_info()) {
    $element['omega_layout'] = array(
      '#type' => 'radios',
      '#options' => array(),
      '#title' => t('Choose a default layout for non node pages'),
      '#default_value' => omega_theme_get_setting('omega_layout', 'simple'),
    );

		$layout_img_path = url(drupal_get_path('theme', ACQUIA_THEME_NAME) . '/admin/layouts', array('absolute' => TRUE));
    foreach ($layouts as $layout => $info) {
			if (strstr($layout, 'aura')) {
				$element['omega_layout']['#options'][$layout] = $info['info']['name'];
				$element['omega_layout'][$layout]['#description'] = $info['info']['description'];
				if (isset($info['info']['preview'])) {
					$icon = file_create_url($info['path'] . '/' . $info['info']['preview']);
					$element['omega_layout'][$layout]['#prefix'] = '<div class="omega-layout-selection-wrapper">';
					$element['omega_layout'][$layout]['#suffix'] = '<img class="omega-layout-icon" src="' . $icon . '" /></div>';
				}
			}
    }
  }
  
  // default page sidebar layout
    acquia_include('options');
		acquia_include('context');
		
		// add assets
		drupal_add_css(drupal_get_path('module', 'ac_styles') . '/css/node-edit-form.css');
		drupal_add_js(drupal_get_path('module', 'ac_styles') . '/js/node-edit-form.js');
		

		$element['node_layout'] = array(
			'#prefix' => '<div class="ac-node-page-layout">',
			'#suffix' => '</div>',
			'#type' => 'radios',
			'#title' => t('Node page Layout'),
			'#description' => t('Select a layout for this node to apply.'),
			'#default_value' => acquia_theme_get_settings('node_layout', 'second-sidebar'),
      '#parents' => array('acquia', 'node_layout'),
			'#submit' => array('context_node_form_submit'),
		);
		
		// Provides: Hll Wrld f PHP
    foreach (acquia_get_layout_contexts() as $layout => $info) {
			$label = t(str_replace(array("-", "_"), " ", $info));
      $element['node_layout']['#options'][$layout] = $label;
			$element['node_layout'][$layout]['#prefix'] = '<div class="acquia-layout-selection-wrapper">';
			$element['node_layout'][$layout]['#suffix'] = '<span class="acquia-layout-icon '.$layout.'"><span class="text">'.$label.'</span></span></div>';
    }
		

  return $element;
}
