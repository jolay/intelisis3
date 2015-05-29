<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function layerslider_layerslider_composer(){
	 return array(
		 'layerslider' => array(
				 'category' => array(t('Sliders')),
				 "icon" => 'icon-wpb-layerslider',
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
