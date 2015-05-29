<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_divider}} shortcode
 */
function ac_composer_divider_composer(){
	 return array(
		 'ac_divider' => array(
				 'category' => array(t('Content')),
				 "icon" => "ac-icon-divider",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				 "params" => array(
					 array(
						 "type" => "dropdown",
						 "class" => "",
						 "heading" => __("Divider Type"),
						 "admin_label" => true,
						 "param_name" => "type",
					 ),
				 ),
			),
	 );
}
