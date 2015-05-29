<?php
// $Id
/**
 * Hero skin settings
 */

function ac_skin_hero_settings(){
 return array(
	 'hero' => array(
		 'title' => t('Hero'),
		 'description' => '',
		 'styles callback' => 'ac_skin_hero_styles',
		 'weight' => -96,
	 ),
 );
}

function ac_skin_hero_styles(){
	return array(
	 // hero
	 'hero' => array(
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
						 'color' => '#F2F2F2',
						 'opacity' => 100,
						 'ie' => '#F2F2F2',
					 ),
					'css-attr' => 'background-color',
				),
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#4C4C4C',
					'css-attr' => 'color',
				),
			),
		),
	 
	 'herodivider' => array(
		 'title' => t('Dividers'),
		 'description' => '',
		 'parent' => 'hero',
			'scheme' => array(
				'bordercolor' => array(
					'type' => 'rgba_color',
					'title' => t('Border color'),
					'default' => array(
						 'color' => 'rgba(0, 0, 0, 0.05)',
						 'opacity' => 100,
						 'ie' => '#E9E9E9',
					 ),
				),
			),
		),
	 // hero title
	 'hero_title' => array(
		 'title' => t('Titles'),
		 'description' => '',
		 'parent' => 'hero',
			'scheme' => array(
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#333',
					'css-attr' => 'color',
				),
			),
		),
	);
}