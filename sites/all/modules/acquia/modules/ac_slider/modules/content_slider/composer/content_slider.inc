<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function content_slider_content_slider_composer(){
	 return array(
		 'content_slider' => array(
				 'category' => array(t('Sliders')),
				 "icon_image" => url(drupal_get_path('module', 'content_slider') . '/images/content_slider.png', array('absolute'=> TRUE)),
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
