<?php
// $Id
/**
 *
 */

/**
 * Preprocess Product page - Teaser view
 */
function ac_ubercart_preprocess_teaser_view(&$vars){
	 acquia_include('utility', 'ac_ubercart');
	 ac_ubercart_load_resources(array('product', 'products'));
}

/**
 * Preprocess Product page - Full view
 */
function ac_ubercart_preprocess_full_view(&$vars){
	 acquia_include('utility', 'ac_ubercart');
	 ac_ubercart_load_resources(array('product', 'products'));
	 
	 // Share links
	 $vars['share_links'] = theme('acquia_share_links', array('node' => $vars['node'], 'socials' => array_filter(array_values(variable_get('ac_ubercart_share_links', array())))));
	 
	 // slider
	 $images = field_get_items('node', $vars['node'], AC_PRODUCT_FIELD_IMAGES_MN, $vars['node']->language);
	 
	 $settings = array('id' => 'product-images');
	 $settings['preview'] = array(
		 'cols' => 1,
		 'style' => variable_get('ac_ubercart_product_carousel_preview_style', NULL),
		 'frame' => variable_get('ac_ubercart_product_carousel_preview_frame', NULL),
		 'lightbox' => TRUE,
		 'lightbox_style' => variable_get('ac_ubercart_product_carousel_lightbox_style', NULL),
	 );
	 
	 $settings['thumb'] = array(
		 'cols' => 3,
		 'style' => variable_get('ac_ubercart_product_carousel_thumb_style', NULL),
		 'frame' => '',
	 );
	 
	 // Full width style
	 if (isset($vars['context']) && in_array($vars['context'], array('no-sidebars', 'fullwidth'))) {
		 $settings['carousel_type'] = 'vertical';
	 }

	 $vars['product_images'] = theme('acquia_carousel_slider', array('items' => $images, 'settings' => $settings));
}