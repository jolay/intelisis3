<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_flickr}} shortcode
 */
function ac_composer_flickr_composer(){
	 return array(
			'ac_flickr' => array(
				'category' => array(t('Content')),
				 "icon_image" => url(drupal_get_path('module', 'ac_composer') . '/assets/img/flickr.png', array('absolute'=> TRUE)),
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
						 "param_name" => "type",
						 "admin_label" => true,
						 "description" => __("Photo stream type.", "js_composer")
					 ),
					 array(
						 "type" => "textfield",
						 "heading" => __("Flickr Id", "js_composer"),
						 "param_name" => "id",
						 "admin_label" => true,
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 )
				 ),
			),
	 );
}
