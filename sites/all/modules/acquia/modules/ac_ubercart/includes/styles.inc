<?php
/**
 * @file
 * image.api.inc
 */

 /**
  * Implementing hook_image_style_alter()
  * 	remove all ubercart module image styles
  */
function ac_ubercart_image_styles_alter(&$styles) {
	$targets = array('uc_cart', 'uc_category', 'uc_product', 'uc_product_full', 'uc_product_list', 'uc_thumbnail');
	foreach ($targets as $target) {
		if (isset($styles[$target])) {
			unset($styles[$target]);
		}
	}
}

/**
 * Implements hook_image_default_styles().
 */
function ac_ubercart_image_default_styles() {
  $styles = array();
	
	// Product Thumb
  $styles['product-thumb'] = array(
    'name' => 'product-thumb',
		'label' => 'Product - Thumb (114x130)',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '114',
          'height' => '130',
        ),
        'weight' => '1',
      ),
    ),
  );
	
	
  return $styles;
}
