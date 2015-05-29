<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function elastic_slider_elastic_slider_composer(){
	 return array(
		 'elastic_slider' => array(
				 'category' => array(t('Sliders')),
				 "icon_image" => url(drupal_get_path('module', 'elastic_slider') . '/images/elastic-slider.png', array('absolute'=> TRUE)),
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
