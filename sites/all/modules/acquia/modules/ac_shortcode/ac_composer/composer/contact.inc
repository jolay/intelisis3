<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_contact}} shortcode
 */
function ac_composer_contact_composer(){
	 return array(
		 'ac_contact' => array(
				 'category' => array(t('Content')),
				 "icon" => "ac-icon-contact",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
						array(
							"type" => "textfield",
							"class" => "",
							"heading" => __("Category"),
							"admin_label" => true,
							"param_name" => "type_title",
							"value" => t('All - Display Category list'),
						),
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
