<?php
/**
 * @file
 *  Acquia Composer settings for {{portfolio}} shortcode
 */
function ac_blog_blog_composer(){
	 return array(
		 'ac_blog' => array(
				 'category' => array(t('Content')),
				 "icon_image" => url(drupal_get_path('module', 'ac_blog') . '/images/blog.png', array('absolute'=> TRUE)),
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
				 ),
			),
	 );
}
