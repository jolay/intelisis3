<?php

/**
 * @file
 *  Acquia Composer settings for {{ac_contact_info}} and {{ac_contact_info_icon}} shortcode
 */
function ac_composer_contact_info_composer(){
		return array(
				'ac_contact_info' => array(
						'element_class' => 'ac_composer_full_controll',
						"show_settings_on_create" => TRUE,
						"icon_image" => url(drupal_get_path('module', 'ac_composer') . '/assets/img/contact_info.png', array('absolute'=> TRUE)),
						"category" => array(__('Content', 'js_composer')),
						"params" => array(
								array(
									"type" => "textfield",
									"class" => "",
									"heading" => __("Style"),
									"admin_label" => true,
									"param_name" => "style",
									"value" => t('list'),
								),
						),
						"js_view" => 'acquiaShortcodeView',
				),
		);
}
