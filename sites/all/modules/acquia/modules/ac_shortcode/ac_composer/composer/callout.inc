<?php
/**
 * @file
 *  Acquia Composer settings for {{callout}} shortcode
 */
function ac_composer_callout_composer(){
	 return array(
		 'ac_callout' => array(
				 'class' => 'ac_callout_composerView',
				 'category' => array(t('Content')),
				 "required" => array('raw_html'),
				 "icon" => "ac-icon-callout",
				 "modal_data" => array(
						'modal_size' => 'big',
				 ),
				 "params" => array(
					 array(
						 "type" => "textarea_raw_html",
						 "holder" => "div",
						 "heading" => __("Code View", "js_composer"),
						 "param_name" => "content",
						 "value" => base64_encode("<p>I am Callout block.<br/>Click edit button to change this html</p>"),
						 "description" => __("Enter your HTML content.", "js_composer")
					 ),
				 ),
			),
	 );
}

// ac_row_composerView Class
if (class_exists('ac_raw_html_composerView')) {
	 class ac_callout_composerView extends ac_raw_html_composerView {
	 }
}