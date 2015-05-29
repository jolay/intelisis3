<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function ac_ubercart_catalog_terms_composer(){
	 return array(
		 'ac_catalog_terms' => array(
				 'category' => array(t('Shop')),
				 "icon_image" => url(drupal_get_path('module', 'acquia') . '/images/tags.png', array('absolute'=> TRUE)),
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "dropdown",
						 "class" => "",
						 "heading" => __("Appearance"),
						 "admin_label" => true,
						 "param_name" => "appearance",
					 ),
				 ),
			),
	 );
}
