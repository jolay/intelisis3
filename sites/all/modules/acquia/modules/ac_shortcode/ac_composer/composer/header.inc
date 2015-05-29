<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_fancy_header}} and {{ac_page_header}} shortcode
 */
function ac_composer_header_composer(){
	 return array(
		 'ac_fancy_header' => array(
				 'category' => array(t('Content')),
				 "icon" => "ac-icon-fancy-header",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("Title", "js_composer"),
						 "param_name" => "content",
						 "holder" => "div",
						 "value" => __("Title", "js_composer"),
					 ),
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "el_class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 )
				 ),
			),
		 'ac_page_header' => array(
				 'category' => array(t('Content')),
				 "icon" => "ac-icon-pg-header",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("Title", "js_composer"),
						 "param_name" => "content",
						 "holder" => "div",
						 "value" => __("Title", "js_composer"),
					 ),
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "el_class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 )
				 ),
			),
	 );
}
