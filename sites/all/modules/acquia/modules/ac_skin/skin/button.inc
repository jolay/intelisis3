<?php
// $Id
/**
 * General skin settings
 */

function ac_skin_button_settings(){
 return array(
	 'button' => array(
		 'title' => t('Buttons'),
		 'description' => '',
		 'styles callback' => 'ac_skin_button_styles',
		 'weight' => -90,
	 ),
 );
}


function ac_skin_button_styles(){
 return array(
	 // Top bar
		  // button
	 'button' => array(
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
			),
		),
	 
	 // X-Large Button
	 'btn_xl' => array(
		 'title' => t('X-large Button'),
		 'description' => '',
		 'parent' => 'button',
			'typo' => array(
				'fsize' => array(
					'type' => 'slider',
					'title' => t('Font size'),
					'default' => '18',
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
					'default' => '52',
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
		),
	 
		// Large Button
	 'btn_l' => array(
		 'title' => t('Large Button'),
		 'description' => '',
		 'parent' => 'button',
			'typo' => array(
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
					'default' => '44',
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
		),
	 
	 // Medium Button
	 'btn_m' => array(
		 'title' => t('Medium Button'),
		 'description' => '',
		 'parent' => 'button',
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
					'default' => '38',
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
		),
	 
	 // Small Button
	 'btn_s' => array(
		 'title' => t('Small Button'),
		 'description' => '',
		 'parent' => 'button',
			'typo' => array(
				'fsize' => array(
					'type' => 'slider',
					'title' => t('Font size'),
					'default' => '11',
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
		),
	);
}