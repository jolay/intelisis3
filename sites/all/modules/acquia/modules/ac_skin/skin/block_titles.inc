<?php
// $Id
/**
 * block_titles skin settings
 */

function ac_skin_block_titles_settings(){
 return array(
	 'block_titles' => array(
		 'title' => t('block titles'),
		 'description' => '',
		 'styles callback' => 'ac_skin_block_titles_styles',
		 'weight' => -91,
	 ),
 );
}


function ac_skin_block_titles_styles(){
	return array(
		//	Block title
	 'title' => array(
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
			 'transform' => array(
					'type' => 'transform',
					'default' => 'up',
				),
			),
		),
	 	 
		//	Block title
	 '_2nd_title' => array(
		 'title' => t('Node and portfolio'),
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
			 'transform' => array(
					'type' => 'transform',
					'default' => 'up',
				),
			),
		),
	);
}