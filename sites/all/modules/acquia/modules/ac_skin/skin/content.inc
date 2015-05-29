<?php
// $Id
/**
 * content skin settings
 */

function ac_skin_content_settings(){
 return array(
	 'content' => array(
		 'title' => t('content region'),
		 'description' => '',
		 'styles callback' => 'ac_skin_content_styles',
		 'weight' => -95,
	 ),
 );
}


function ac_skin_content_styles(){
	return array(
 // Content region
	 'content' => array(
		 'title' => t('General'),
		 'description' => '',
			'scheme' => array(
				'dividercolor' => array(
					'type' => 'rgba_color',
					'title' => t('Divider color'),
					'default' => array(
						 'color' => '#e5e5e5',
						 'opacity' => 100,
						 'ie' => '#e5e5e5',
					 ),
				),
				'framecolor' => array(
					'type' => 'rgba_color',
					'title' => t('Frame bakcground color'),
					'default' => array(
						 'color' => '#eee',
						 'opacity' => 100,
						 'ie' => '#eee',
					 ),
				),
			),
		),

	 // Meta
	 'meta' => array(
		 'title' => t('meta'),
		 'parent' => 'content',
		 'description' => '',
			'scheme' => array(
				'color' => array(
					'type' => 'hex_color',
					'title' => t('Meta color'),
					'default' => '#252525',
					'css-attr' => 'color',
				),
			),
		),
	 // light Gradient box
	 'gradient-light' => array(
		 'title' => t('Light gradient box'),
		 'parent' => 'content',
		 'description' => '',
			'scheme' => array(
				'topcolor' => array(
					'type' => 'hex_color',
					'title' => t('Start color'),
					'default' => '#FFF',
					'css-attr' => 'color',
				),
				'bottomcolor' => array(
					'type' => 'hex_color',
					'title' => t('Bottom color'),
					'default' => '#F9F9F9',
					'css-attr' => 'color',
				),
			),
		),

		// light Gradient box
	 'gradient-hard' => array(
		 'title' => t('Hard gradient box'),
		 'parent' => 'content',
		 'description' => '',
			'scheme' => array(
				'topcolor' => array(
					'type' => 'hex_color',
					'title' => t('Start color'),
					'default' => '#f7f7f7',
				),
				'bottomcolor' => array(
					'type' => 'hex_color',
					'title' => t('Bottom color'),
					'default' => '#ebebeb',
				),
			),
		),
	);
}