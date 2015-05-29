<?php
// $Id
/**
 * sections skin settings
 */

function ac_skin_section_settings(){
	$settings = array();
	for ($i= 0; $i<3; $i++) {
		$settings['section_' .($i+1) .''] = array(
			 'title' => t('Section @num', array('@num' => $i+1)),
			 'description' => '',
			 'styles callback' => 'ac_skin_section_'.($i+1).'_styles',
			 'weight' => -89,
		);
	}
  return $settings;
}

function ac_skin_section_1_styles(){
  return ac_skin_section_styles(1);
}

function ac_skin_section_2_styles(){
  return ac_skin_section_styles(2);
}

function ac_skin_section_3_styles(){
  return ac_skin_section_styles(3);
}

function ac_skin_section_styles($i){
 
	$styles['section_' .($i) .''] = array(
	 'title' => t('General'),
	 'description' => '',
		'scheme' => array(
			'bg' => array(
				'type' => 'bg',
				'default' => array(
					 'image' => '',
					 'repeat' => 'repeat',
					 'posx' => 'center',
					 'posy' => 'top',
					 'full' => 0,
				)
			),
			'bgcolor' => array(
				'type' => 'rgba_color',
				'title' => t('background color'),
				'default' => array(
					 'color' => '#F3F3F3',
					 'opacity' => 100,
					 'ie' => '#F3F3F3',
				 ),
				'css-attr' => 'background-color',
			),
			'bordercolor' => array(
				'type' => 'rgba_color',
				'title' => t('Border color'),
				'default' => array(
					 'color' => '#eee',
					 'opacity' => 100,
					 'ie' => '#eee',
				 ),
			),
		),
	);
	
	$styles['section_' .($i) .'_text'] = array(
	 'title' => t('Text', array('@num' => $i)),
	 'parent' => 'section_' .($i) .'',
	 'description' => '',
		'scheme' => array(
			'headercolor' => array(
				'type' => 'hex_color',
				'title' => t('Header color'),
				'default' => '#747474',
				'css-attr' => 'color',
			),
			'color' => array(
				'type' => 'hex_color',
				'title' => t('text color'),
				'default' => '#747474',
				'css-attr' => 'color',
			),
		),
	);
	
	$styles['section_' .($i) .'_frame'] = array(
	 'title' => t('Frames', array('@num' => $i)),
	 'parent' => 'section_' .($i) .'',
	 'description' => '',
		'scheme' => array(
			'bgcolor' => array(
				'type' => 'rgba_color',
				'title' => t('background color'),
				'default' => array(
					 'color' => '#F3F3F3',
					 'opacity' => 100,
					 'ie' => '#F3F3F3',
				 ),
				'css-attr' => 'background-color',
			),
		),
	);
	
	$styles['section_' .($i) .'_divider'] = array(
	 'title' => t('Dividers', array('@num' => $i)),
	 'parent' => 'section_' .($i) .'',
	 'description' => '',
		'scheme' => array(
			'color' => array(
				'type' => 'rgba_color',
				'title' => t('Dividers & lines'),
				'default' => array(
					 'color' => '#eee',
					 'opacity' => 100,
					 'ie' => '#eee',
				 ),
			),
		),
	);

  return $styles;
}