<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_views}} shortcode
 */
function ac_composer_views_composer(){
	 return array(
			'ac_views' => array(
				'category' => array(t('Content')),
				 "icon" => "ac-icon-views",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "el_class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 ),
						array(
							"type" => "textfield",
							"class" => "",
							"heading" => __("View name"),
							"admin_label" => true,
							"param_name" => "view",
							"value" => '',
						),
						array(
							"type" => "textfield",
							"class" => "",
							"heading" => __("Display name"),
							"admin_label" => true,
							"param_name" => "display",
							"value" => '',
						),
				 ),
			),
	 );
}
