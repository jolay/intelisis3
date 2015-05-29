<?php
// $Id
/**
 * Main menu skin settings
 */

function ac_skin_menu_settings(){
 return array(
	 'menu' => array(
		 'title' => t('Main menu'),
		 'description' => '',
		 'styles callback' => 'ac_skin_menu_styles',
		 'weight' => -98,
	 ),
 );
}


function ac_skin_menu_styles(){
 return array(
	 'menu' => array(
		 'title' => t('General'),
		 'description' => '',
			'typo' => array(
				'ffamily' => array(
					'type' => 'font',
					'title' => t('Font family'),
					'css-attr' => 'font-family',
					'default' => '',
					'prefix' => '"',
					'suffix' => '"' .AC_SKIN_DEFAULT_FONT_FAMILY,
				),
				'fsize' => array(
					'type' => 'slider',
					'title' => t('Font size'),
					'default' => '15',
					'css-attr' => 'font-size',
					'min' => 9,
					'max' => 70,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
				'lheight' => array(
					'type' => 'slider',
					'title' => t('Line height'),
					'default' => '36',
					'css-attr' => 'line-height',
					'min' => 9,
					'max' => 70,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			 'transform' => array(
					'type' => 'transform',
					'default' => 'cap',
				),
			),
			'scheme' => array(
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#747474',
					'css-attr' => 'color',
				),
			),
		),
		// submenu typography
	 'submenu' => array(
		 'title' => t('Sub Menu'),
		 'description' => '',
		 'parent' => 'menu',
			'typo' => array(
				'ffamily' => array(
					'type' => 'font',
					'title' => t('Font family'),
					'css-attr' => 'font-family',
					'default' => '',
					'prefix' => '"',
					'suffix' => '"' .AC_SKIN_DEFAULT_FONT_FAMILY,
				),
				'fsize' => array(
					'type' => 'slider',
					'title' => t('Font size'),
					'default' => '14',
					'css-attr' => 'font-size',
					'min' => 9,
					'max' => 70,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
				'lheight' => array(
					'type' => 'slider',
					'title' => t('Line height'),
					'default' => '32',
					'css-attr' => 'line-height',
					'min' => 9,
					'max' => 70,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			 'transform' => array(
					'type' => 'transform',
					'default' => 'cap',
				),
			),
			'scheme' => array(
				'bgcolor' => array(
					'type' => 'rgba_color',
					'title' => t('background color'),
					'default' => array(
						 'color' => '#fff',
						 'opacity' => 100,
						 'ie' => '#fff',
					 ),
					'css-attr' => 'background-color',
				),
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#666',
					'css-attr' => 'color',
				),
				'dividercolor' => array(
					'type' => 'hex_color',
					'title' => t('divider color'),
					'default' => '#E5E5E5',
				),
				'active_bgcolor' => array(
					'type' => 'rgba_color',
					'title' => t('Active - background color'),
					'default' => array(
						 'color' => '#fff',
						 'opacity' => 100,
						 'ie' => '#fff',
					 ),
					//'css-attr' => 'background-color',
				),
			),
		),
	);
}