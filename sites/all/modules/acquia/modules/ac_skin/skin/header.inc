<?php
// $Id
/**
 * Header skin settings
 */

function ac_skin_header_settings(){
 return array(
	 'header' => array(
		 'title' => t('Header'),
		 'description' => '',
		 'styles callback' => 'ac_skin_header_styles',
		 'weight' => -98
	 ),
 );
}


function ac_skin_header_styles(){
 return array(
	 'header' => array(
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
						 'full' => 0,
					)
				),
				'bgcolor' => array(
					'type' => 'hex_color',
					'title' => t('background color'),
					'default' => '#ffffff',
					'css-attr' => 'background-color',
				),
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#747474',
					'css-attr' => 'color',
				),
				'dividercolor' => array(
					'type' => 'hex_color',
					'title' => t('divider color'),
					'default' => '#E5E5E5',
				),
				'height' => array(
					'type' => 'slider',
					'title' => t('height'),
					'default' => '70',
					'min' => 9,
					'max' => 150,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			),
		),
	 // fixed Header
	 'fixed_header' => array(
		 'title' => t('Fixed Header'),
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
				'height' => array(
					'type' => 'slider',
					'title' => t('height'),
					'default' => '70',
					'min' => 9,
					'max' => 110,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			),
		),
	 // Sub Header
	 'sub_header' => array(
		 'title' => t('Sub Header'),
		 'description' => '',
		 'parent' => 'header',
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
				'dividercolor' => array(
					'type' => 'rgba_color',
					'title' => t('Divider color'),
					'default' => array(
						 'color' => '#e5e5e5',
						 'opacity' => 100,
						 'ie' => '#e5e5e5',
					 ),
				),
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#747474',
					'css-attr' => 'color',
				),
				'height' => array(
					'type' => 'slider',
					'title' => t('height'),
					'default' => '70',
					'min' => 9,
					'max' => 150,
					'step' => 1,
					'data' => array(
						'val-suffix' => 'px',
					),
					'suffix' => 'px',
				),
			),
		),
	 );
}