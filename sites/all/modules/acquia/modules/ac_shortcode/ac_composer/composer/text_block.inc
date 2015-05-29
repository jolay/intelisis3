<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_tabs}} and {{ac_tab}} shortcode
 */
function ac_composer_text_block_composer(){
		return array(
			'vc_column_text' => array(
				 "class" => 'vc_column_text_composerView',
				 "icon" => "icon-wpb-layer-shape-text",
				 "wrapper_class" => "clearfix",
				 "category" => array(t('Content')),
				 "always_enabled" => TRUE,
				 "params" => array(
					 array(
						 "type" => "textarea_html",
						 "holder" => "div",
						 "heading" => __("Text", "js_composer"),
						 "param_name" => "content",
						 "value" => __("<p>I am text block. Click edit button to change this text.</p>", "js_composer")
					 ),
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 ),
				 ),
			),
	 );
}

// Shortcode Model Class
if (class_exists('acquiaComposerView')) {
	 class vc_column_text_composerView extends acquiaComposerView {
			public function outputTitle($title) {
					return '';
			}
	 }
}
