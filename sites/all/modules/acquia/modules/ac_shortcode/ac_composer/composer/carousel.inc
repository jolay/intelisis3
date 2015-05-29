<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_carousel}} shortcode
 */
function ac_composer_carousel_composer(){
	 return array(
		 'ac_carousel' => array(
				 'class' => 'acquiaContainerComposerView',
				 'category' => array(t('Sliders')),
				 "is_container" => TRUE,
				 'header_title' => TRUE,
				 'element_class' => 'ac_composer_full_controll',
				 'wrapper_class' => 'ac-full-height',
				 'icon' => 'ac-icon-carousel',
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
