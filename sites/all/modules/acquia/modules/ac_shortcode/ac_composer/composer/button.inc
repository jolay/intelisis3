<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_button}} shortcode
 */
function ac_composer_button_composer(){
	 return array(
			'ac_button' => array(
				'category' => array(t('Content')),
				 "icon" => "ac-icon-button",
				 "modal_data" => array(
						'modal_size' => 'big',
				 ),
				 'wrapper_class' => 'ac-full-height',
				 "params" => array(
						 array(
							 "type" => "textfield",
							 "class" => "",
							 "heading" => __("Caption"),
							 "admin_label" => true,
							 "param_name" => "label",
							 "value" => t('Click me'),
						 ),
						 array(
						   "type" => "textfield",
							 "class" => "",
							 "heading" => __("Style"),
							 "admin_label" => true,
							 "param_name" => "style",
							 "value" => t('2d'),
						 ),
						 array(
						   "type" => "textfield",
							 "class" => "",
							 "heading" => __("Type"),
							 "admin_label" => true,
							 "param_name" => "type",
							 "value" => t('rounded'),
						 ),
				 ),
			),
	 );
}
