<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_list}} shortcode
 */
function ac_composer_list_composer(){
	 return array(
			'ac_list' => array(
				'category' => array(t('Content')),
				 "icon" => "ac-icon-list",
				 'wrapper_class' => 'ac-full-height',
				 "params" => array(
						array(
							 "type" => "textarea_html",
							 "holder" => "div",
							 "class" => "",
							 "heading" => __("Caption"),
							 "param_name" => "content",
							 "value" => __("<ul><li>Your list</li><li>goes</li><li>here!</li></ul>"),
							 "description" => __("")
						),
				 ),
				 "js_view" => 'acquiaShortcodeView',
			),
			'ac_list_item' => array(
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
