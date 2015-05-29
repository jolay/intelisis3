<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_divider}} shortcode
 */
function ac_composer_code_composer(){
	 return array(
		 'ac_code' => array(
				 'class' => 'ac_code_composerView',
				 'category' => array(t('Content')),
				 "required" => array('raw_html'),
				 "icon" => "ac-icon-code",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "textarea_raw_html",
						 "holder" => "div",
						 "heading" => __("Code View", "js_composer"),
						 "param_name" => "content",
						 "value" => base64_encode("[ac_code]I'm inside a code view tag[ac_code]"),
						 "description" => __("Enter your HTML content.", "js_composer")
					 ),
				 ),
			),
	 );
}

// ac_row_composerView Class
if (class_exists('ac_raw_html_composerView')) {
	 class ac_code_composerView extends ac_raw_html_composerView {
	 }
}