<?php
// $Id
/**
 * General skin settings
 */

function ac_skin_general_settings(){
 return array(
	 'general' => array(
		 'title' => t('General'),
		 'description' => '',
		 'styles callback' => 'ac_skin_general_styles',
		 'weight' => -100,
	 ),
 );
}


function ac_skin_general_styles(){
 return array(
	 // General settings
	 'general' => array(
		 'title' => t('Colors'),
		 'description' => '',
			'scheme' => array(
				'accent-color' => array(
					'type' => 'hex_color',
					'title' => t('Accent color'),
					'default' => '#0370EA',
					'css-attr' => 'color',
				),
				'anchor-color' => array(
					'type' => 'hex_color',
					'title' => t('anchor color'),
					'default' => '#666',
					'css-attr' => 'color',
				),
				'sub-color' => array(
					'type' => 'hex_color',
					'title' => t('Subcolor'),
					'default' => '#747C83',
					'css-attr' => 'color',
				),
				'border_radius' => array(
					'type' => 'slider',
					'title' => t('Border radius'),
					'default' => '6',
					'css-attr' => 'border-radius',
					'min' => 0,
					'max' => 100,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			),
		),
	 // Base settings
	 'base' => array(
		 'title' => t('body'),
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
					'default' => '13',
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
					'default' => '22',
					'css-attr' => 'line-height',
					'min' => 9,
					'max' => 70,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			),
			'scheme' => array(
				'bg' => array(
					'type' => 'bg',
					'default' => array(
						 'image' => '',
						 'repeat' => 'no-repeat',
						 'posx' => 'left',
						 'posy' => 'top',
						 'full' => 1,
					)
				),
				// Hex color type
				'color' => array(
					'type' => 'hex_color',
					'title' => t('color'),
					'default' => '#747474',
					'css-attr' => 'color',
				),
				// rgba_color type
				'bgcolor' => array(
					'type' => 'hex_color',
					'title' => t('background color'),
					'default' => '#fff',
					'css-attr' => 'background-color',
				),
			),
		),
	 
		// Inner Body
    'page' => array(
			'title' => t('page'),
			'description' => '',
			'scheme' => array(
				'bg' => array(
					'type' => 'bg',
					'default' => array(
						 'image' => '',
						 'repeat' => 'no-repeat',
						 'posx' => 'left',
						 'posy' => 'top',
						 'full' => 0,
					)
				),
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
			),
    ),
	);
}