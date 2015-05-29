<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_audio}} shortcode
 */
function ac_composer_audio_composer(){
	 return array(
			'ac_audio' => array(
				'category' => array(t('Content')),
				 "icon" => "ac-icon-audio",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
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
