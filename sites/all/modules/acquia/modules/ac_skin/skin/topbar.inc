<?php
// $Id
/**
 * General skin settings
 */

function ac_skin_topbar_settings(){
 return array(
	 'topbar' => array(
		 'title' => t('Topbar'),
		 'description' => '',
		 'styles callback' => 'ac_skin_topbar_styles',
		 'weight' => -99,
	 ),
 );
}


function ac_skin_topbar_styles(){
 return array(
	 // Top bar
	 'topbar' => array(
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
				// Hex color type
				'color' => array(
					'type' => 'hex_color',
					'title' => t('color'),
					'default' => '#747C83',
					'css-attr' => 'color',
				),
				'anchor_color' => array(
					'type' => 'hex_color',
					'title' => t('Anchor color'),
					'default' => '#747C83',
					'css-attr' => 'color',
				),
				'bordercolor' => array(
					'type' => 'hex_color',
					'title' => t('Border color'),
					'default' => '#fff',
				),
			),
		),
	 		// topbar divider
		'topbardivider' => array(
		 'title' => t('Dividers'),
		 'description' => '',
		 'parent' => 'topbar',
			'scheme' => array(
				'color' => array(
					'type' => 'rgba_color',
					'title' => t('color'),
					'default' => array(
						 'color' => '#DADEE1',
						 'opacity' => 100,
						 'ie' => '#DADEE1',
					 ),
				),
			),
		),
	);
}