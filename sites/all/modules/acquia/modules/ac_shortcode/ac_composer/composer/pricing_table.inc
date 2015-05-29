<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_misc}} shortcode
 */
function ac_composer_pricing_table_composer(){
	 return array(
		 'pt' => array(
				 'category' => array(t('Content')),
				 "icon" => 'ac-icon-pt',
				 "modal_data" => array(
						'modal_size' => 'big',
				 ),
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
			),
		 
		 'pt_col' => array(
				 'category' => array(t('Content')),
				 "content_element" => FALSE,
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
			),
		 
		 'pt_row' => array(
				 'category' => array(t('Content')),
				 "content_element" => FALSE,
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
			),
		 
		 'pt_price' => array(
				 'category' => array(t('Content')),
				 "content_element" => FALSE,
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
			),
		 
		 'pt_package' => array(
				 'category' => array(t('Content')),
				 "content_element" => FALSE,
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
			),
		 
		 'pt_details' => array(
				 'category' => array(t('Content')),
				 "content_element" => FALSE,
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => __("Extra class name", "js_composer"),
							"param_name" => "el_class",
							"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
						),
				 ),
			),
		 
	 );
}
