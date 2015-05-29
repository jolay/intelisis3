<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_visibility}} shortcode
 */
function ac_composer_visibility_composer(){
	 return array(
		 'ac_visibility' => array(
				 'class' => 'acquiaContainerComposerView',
				 'category' => array(t('Utility')),
				 "is_container" => true,
				 'wrapper_class' => 'ac-full-height',
				 'element_class' => 'ac_composer_full_controll',
				 'header_title' => TRUE,
				 'icon' => 'ac-icon-visibility',
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 //"order" => 94,
				 "params" => array(
					 array(
							 "type" => "textfield",
							 "heading" => __("Title", "js_composer"),
							 "param_name" => "title",
							 "description" => __("Accordion section title.", "js_composer")
					 ),
				 ),
				 'js_view' => 'VcColumnView',
			),
	 );
}
