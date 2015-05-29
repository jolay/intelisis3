<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function ac_portfolio_portfolio_composer(){
	 return array(
		 'ac_portfolio' => array(
				 'category' => array(t('Content')),
				 "icon_image" => url(drupal_get_path('module', 'ac_portfolio') . '/images/portfolio.png', array('absolute'=> TRUE)),
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
						 "param_name" => "nums",
					 ),
					 array(
						 "type" => "sorting",
						 "class" => "",
						 "heading" => __("Sorting"),
						 "admin_label" => true,
						 "param_name" => "sorting",
					 ),
				 ),
			),
		 'ac_portfolio_tags' => array(
				 'category' => array(t('Content')),
				 "icon_image" => url(drupal_get_path('module', 'acquia') . '/images/tags.png', array('absolute'=> TRUE)),
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "view",
						 "class" => "",
						 "heading" => __("View"),
						 "admin_label" => true,
						 "param_name" => "view",
					 ),
				 ),
			),
	 );
}
