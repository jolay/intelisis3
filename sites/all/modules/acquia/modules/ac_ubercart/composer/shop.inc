<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function ac_ubercart_shop_composer(){
	 return array(
		 'ac_shop' => array(
				 'category' => array(t('Shop')),
				 "icon_image" => url(drupal_get_path('module', 'ac_ubercart') . '/images/shop.png', array('absolute'=> TRUE)),
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
					 array(
						 "type" => "nums",
						 "class" => "",
						 "heading" => __("Number of items"),
						 "admin_label" => true,
						 "param_name" => "total",
					 ),
					 array(
						 "type" => "nums",
						 "class" => "",
						 "heading" => __("Pager items"),
						 "admin_label" => true,
						 "param_name" => "num_per_page",
					 ),
				 ),
			),
		 'ac_shop_tags' => array(
				 'category' => array(t('Shop')),
				 "icon_image" => url(drupal_get_path('module', 'acquia') . '/images/tags.png', array('absolute'=> TRUE)),
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "dropdown",
						 "class" => "",
						 "heading" => __("view"),
						 "admin_label" => true,
						 "param_name" => "view",
					 ),
				 ),
			),
		 'ac_products_block' => array(
				 'category' => array(t('Shop')),
				 "icon_image" => url(drupal_get_path('module', 'ac_ubercart') . '/images/products.png', array('absolute'=> TRUE)),
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "dropdown",
						 "class" => "",
						 "heading" => __("block type"),
						 "admin_label" => true,
						 "param_name" => "type",
					 ),
				 ),
			),
	 );
}
