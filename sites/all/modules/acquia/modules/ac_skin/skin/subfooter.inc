<?php
// $Id
/**
 * subfooter skin settings
 */

function ac_skin_subfooter_settings(){
 return array(
	 'subfooter' => array(
		 'title' => t('subfooter'),
		 'description' => '',
		 'styles callback' => 'ac_skin_subfooter_styles',
		 'weight' => -93,
	 ),
 );
}


function ac_skin_subfooter_styles(){
	return array(
	// Subfooter
	 'subfooter' => array(
		 'title' => t('General'),
		 'description' => '',
		 'typo' => array(
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
					'type' => 'rgba_color',
					'title' => t('background color'),
					'default' => array(
						 'color' => '#202020',
						 'opacity' => 100,
						 'ie' => '#202020',
					 ),
					'css-attr' => 'background-color',
				),
				'color' => array(
					'type' => 'hex_color',
					'title' => t('Text color'),
					'default' => '#808080',
					'css-attr' => 'color',
				),
				'bordercolor' => array(
					'type' => 'hex_color',
					'title' => t('Border color'),
					'default' => '#1A1A1A',
				),
				'anchorcolor' => array(
					'type' => 'hex_color',
					'title' => t('Anchor color'),
					'default' => '#ACACAC',
				),
			),
		),
	);
}