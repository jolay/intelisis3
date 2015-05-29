<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function rev_slider_rev_slider_composer(){
	 return array(
		 'rev_slider' => array(
				 'category' => array(t('Sliders')),
				 "icon" => 'icon-wpb-revslider',
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
