<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_divider}} shortcode
 */
function ac_composer_googlemap_composer(){
	 return array(
		 'ac_gmap' => array(
				 'category' => array(t('Content')),
				 "icon" => "ac-icon-googlemap",
				 "modal_data" => array(
						'modal_size' => 'big',
				 ),
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
				'asset' => array(
						'css' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/css/googlemap.css' => array(),
						),
						'js' => array(
							 'http://maps.google.com/maps/api/js?sensor=true' => array('external' => TRUE),
						),
				),
				"js_view" => 'acquiaShortcodeView',
			),
			'ac_gmap_marker' => array(
				 // Composer Settings
					"content_element" => FALSE,
					"params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Title", "js_composer"),
							"param_name" => "title",
							"description" => __("Tab title.", "js_composer")
						),
					),
			),
	 );
}

