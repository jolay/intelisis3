<?php
// $Id
/**
 * General skin settings
 */

function ac_skin_slider_settings(){
 return array(
	 'slider' => array(
		 'title' => t('Slider'),
		 'description' => '',
		 'styles callback' => 'ac_skin_slider_styles',
		 'weight' => -97,
	 ),
 );
}


function ac_skin_slider_styles(){
	return array(
	// Slideshow
	 'slider' => array(
		 'title' => t('General'),
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