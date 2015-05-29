<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_stick}} shortcode
 */
function ac_composer_stick_composer(){
	 return array(
		 'ac_stick' => array(
				 'class' => 'acquiaContainerComposerView',
				 'category' => array(t('Utility')),
				 "is_container" => TRUE,
				 'header_title' => TRUE,
				 'element_class' => 'ac_composer_full_controll',
				 'wrapper_class' => 'ac-full-height',
				 "icon_image" => url(drupal_get_path('module', 'ac_composer') . '/assets/img/stick.png', array('absolute'=> TRUE)),
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
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
