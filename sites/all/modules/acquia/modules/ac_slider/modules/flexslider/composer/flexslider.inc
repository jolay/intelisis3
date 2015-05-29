<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function flexslider_flexslider_composer(){
	 return array(
		 'flexslider' => array(
			'category' => array(t('Sliders')),
				 "icon_image" => url(drupal_get_path('module', 'flexslider') . '/images/flexslider.png', array('absolute'=> TRUE)),
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						"type" => "textfield",
						"heading" => __("Title", "js_composer"),
						"param_name" => "title",
						"description" => __("Tab title.", "js_composer"),
						"admin_label" => true,
					 ),
				 ),
			),
	 );
}
