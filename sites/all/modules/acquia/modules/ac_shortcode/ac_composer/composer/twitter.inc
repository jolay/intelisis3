<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_twitter}} shortcode
 */
function ac_composer_twitter_composer(){
	 return array(
			'ac_twitter' => array(
				'category' => array(t('Content')),
				 "icon_image" => url(drupal_get_path('module', 'ac_composer') . '/assets/img/twitter.png', array('absolute'=> TRUE)),
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
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "key",
						 "admin_label" => true,
						 "description" => __("Twitter key.", "js_composer")
					 ),
					 array(
						 "type" => "textfield",
						 "heading" => __("Twitter Id", "js_composer"),
						 "param_name" => "items",
						 "admin_label" => true,
						 "description" => __("Number of items to retrieve.", "js_composer")
					 )
				 ),
			),
	 );
}
