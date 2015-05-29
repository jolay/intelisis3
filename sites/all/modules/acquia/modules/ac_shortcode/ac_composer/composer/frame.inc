<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_frame}} shortcode
 */
function ac_composer_frame_composer(){
	 return array(
		 'ac_frame' => array(
				 'class' => 'acquiaContainerComposerView',
				 'category' => array(t('Utility')),
				 "is_container" => TRUE,
				 'header_title' => TRUE,
				 'element_class' => 'ac_composer_full_controll',
				 'wrapper_class' => 'ac-full-height',
				 "show_settings_on_create" => false,
				 "icon_image" => url(drupal_get_path('module', 'ac_composer') . '/assets/img/frame.png', array('absolute'=> TRUE)),
				 //"order" => 94,
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "el_class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 ),
				 ),
				'js_view' => 'VcColumnView',
			),
	 );
}
