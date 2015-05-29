<?php
// $Id
/**
 * footer skin settings
 */

function ac_skin_footer_settings(){
 return array(
	 'footer' => array(
		 'title' => t('footer'),
		 'description' => '',
		 'styles callback' => 'ac_skin_footer_styles',
		 'weight' => -94,
	 ),
 );
}

function ac_skin_footer_styles(){
	return array(
		// Footer
	 'footer' => array(
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
						 'color' => '#1A1A1A',
						 'opacity' => 100,
						 'ie' => '#1A1A1A',
					 ),
					'css-attr' => 'background-color',
				),
				'color' => array(
					'type' => 'hex_color',
					'title' => t('Text color'),
					'default' => '#B2B2B2',
					'css-attr' => 'color',
				),
				'anchorcolor' => array(
					'type' => 'hex_color',
					'title' => t('Anchor color'),
					'default' => '#DFDFDF',
					'css-attr' => 'color',
				),
				'bordercolor' => array(
					'type' => 'hex_color',
					'title' => t('Border color'),
					'default' => '#202020',
				),
			),
		),
	 // Footer
	 'footerheader' => array(
		 'title' => t('Headings'),
		 'description' => '',
		 'parent' => 'footer',
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
					'default' => '26',
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
				'color' => array(
					'type' => 'hex_color',
					'title' => t('text color'),
					'default' => '#ffffff',
				),
			),
		),
	 'footerdivider' => array(
		 'title' => t('Divider'),
		 'description' => '',
			'scheme' => array(
				'bordercolor' => array(
					'type' => 'rgba_color',
					'title' => t('Divider color'),
					'default' => array(
						 'color' => 'rgba(255, 255, 255, 0.05)',
						 'opacity' => 100,
						 'ie' => '#242424',
					 ),
				),
			),
		),
	);
}