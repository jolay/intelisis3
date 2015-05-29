<?php

/**
 * Form builder; Configure acquia blog settings.
 *
 * @ingroup forms
 */
function ac_store_settings($form, &$form_state) {
 acquia_include('taxonomy');
 acquia_include('options');
 acquia_include('context');
 acquia_include('theme');
 
 // wrap acquia options style
 acquia_theme_wrap_acquia_admin_style($form, array('vtabs' => TRUE));
 acquia_load_resources();
 
 $form['ac_store_vtabas'] = array(
	 '#type' => 'vertical_tabs',
	 '#title' => t('Store general settings'),
 );

 // Default blog context
 $form['general'] = array(
   '#type' => 'fieldset',
   '#title' => t('General Settings'),
	 '#group' => 'ac_store_vtabas',
 );

//  //
//  //// Default blog Taxonomy
//  //$form['general']['ac_blog_taxonomy_mn'] = array(
//  // '#type' => 'select',
//  // '#title' => t('select default blog taxonomy'),
//  // '#options' => ac_get_taxonomies_option(),
//  // '#default_value' => variable_get('ac_blog_taxonomy_mn', NULL),
//  //);
//  //
//	$ops = acquia_image_frame_list();
//	add_default_option($ops);
//  
//  // Default image frame of gallery images
//  $form['general']['ac_blog_image_frame'] = array(
//   '#type' => 'select',
//   '#title' => t('Frame style'),
//   '#options' => $ops,
//   '#default_value' => variable_get('ac_blog_image_frame', NULL),
//  );
//
	$form['general']['ac_ubercart_product_carousel_thumb_style'] = array(
   '#type' => 'select',
   '#title' => t('Product carousel - image thumbnail style'),
   '#options' => image_style_options(),
   '#default_value' => variable_get('ac_ubercart_product_carousel_thumb_style', NULL),
  );
	
	
  $form['general']['ac_ubercart_product_carousel_preview_style'] = array(
   '#type' => 'select',
   '#title' => t('Product carousel - image preview style'),
   '#options' => image_style_options(),
   '#default_value' => variable_get('ac_ubercart_product_carousel_preview_style', NULL),
  );
	
	$form['general']['ac_ubercart_product_carousel_lightbox_style'] = array(
   '#type' => 'select',
   '#title' => t('Product image zoom style'),
   '#options' => image_style_options(),
   '#default_value' => variable_get('ac_ubercart_product_carousel_lightbox_style', NULL),
  );
	
  $form['general']['ac_ubercart_share_links'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enabled share links'),
    '#description' => t('select share links to display on blog page.'),
    '#options' => acquia_social_icons(),
    '#default_value' => variable_get('ac_ubercart_share_links', array()),
  );

	
   // Default blog context
	$form['cart'] = array(
   '#type' => 'fieldset',
   '#title' => t('Shopping cart'),
	 '#group' => 'ac_store_vtabas',
  );
	
  $form['cart']['ac_ubercart_cart_image_thumb_style'] = array(
   '#type' => 'select',
   '#title' => t('Shopping cart image style'),
   '#options' => image_style_options(),
   '#default_value' => variable_get('ac_ubercart_cart_image_thumb_style', NULL),
  );
	
  // Default blog context
	$form['related_products'] = array(
   '#type' => 'fieldset',
   '#title' => t('Related Products'),
	 '#group' => 'ac_store_vtabas',
  );
	
	$form['related_products']['ac_ubercart_related_products_cols'] = array(
   '#type' => 'select',
   '#title' => t('Columns'),
   '#options' => drupal_map_assoc ( range (1, 20) ),
   '#default_value' => variable_get('ac_ubercart_related_products_cols', 4),
   '#description' => t('Number of visible related Items; e.g., 4'),
  );
	$form['related_products']['ac_ubercart_related_products_spaced'] = array(
		'#type' => 'checkbox',
		'#title' => t('Spaced Items?'),
		'#description' => t ( 'Turn it On to display horizontally spaced.' ),
		'#default_value' => acquia_variable_get('ac_ubercart_related_products_spaced', TRUE),
	);
	
	$form['related_products']['ac_ubercart_related_products_padding'] = array (
		'#type' => 'textfield',
		'#field_suffix' => t('(px)'),
		'#title' => t('padding between items'),
		'#description' => t ( 'Items paddings (e.g. 5 pixel padding will give you 10 pixel paddings between items)' ),
		'#default_value' => acquia_variable_get('ac_ubercart_related_products_padding', '20px'),
		'#states' => array(
			'visible' => array(
				':input[name="ac_ubercart_related_products_spaced"]' => array('checked' => TRUE),
			),
		),
	);
	
  // Catalog
	$form['catalog_terms'] = array(
   '#type' => 'fieldset',
   '#title' => t('Catalog terms'),
	 '#group' => 'ac_store_vtabas',
  );
	
	$form['catalog_terms']['ac_ubercart_catalog_terms_url'] = array(
   '#type' => 'textfield',
   '#title' => t('Catalog taxonomy terms path'),
   '#default_value' => variable_get('ac_ubercart_catalog_terms_url', 'catalog'),
   '#description' => t('This path is the one used in "uc_catalog" views'),
  );
	
	$form['catalog_terms']['ac_ubercart_catalog_terms_cols'] = array(
   '#type' => 'select',
   '#title' => t('Columns'),
   '#options' => drupal_map_assoc ( range (1, 20) ),
   '#default_value' => variable_get('ac_ubercart_catalog_terms_cols', 4),
   '#description' => t('Number of items in each row; e.g., 4'),
  );
	
	$form['catalog_terms']['ac_ubercart_catalog_terms_spaced'] = array(
		'#type' => 'checkbox',
		'#title' => t('Spaced Items?'),
		'#description' => t ( 'Turn it On to display horizontally spaced.' ),
		'#default_value' => variable_get('ac_ubercart_catalog_terms_spaced', TRUE),
	);
	
	$form['catalog_terms']['ac_ubercart_catalog_terms_padding'] = array (
		'#type' => 'textfield',
		'#field_suffix' => t('(px)'),
		'#title' => t('padding between items'),
		'#description' => t ( 'Items paddings (e.g. 5 pixel padding will give you 10 pixel paddings between items)' ),
		'#default_value' => variable_get('ac_ubercart_catalog_terms_padding', '20px'),
		'#states' => array(
			'visible' => array(
				':input[name="ac_ubercart_catalog_terms_spaced"]' => array('checked' => TRUE),
			),
		),
	);
	
	// Catalog
	$form['catalog_products'] = array(
   '#type' => 'fieldset',
   '#title' => t('Catalog products'),
	 '#group' => 'ac_store_vtabas',
  );
	
	$form['catalog_products']['ac_ubercart_catalog_products_style'] = array(
   '#type' => 'select',
   '#title' => t('Image styles'),
   '#options' => image_style_options(),
   '#default_value' => variable_get('ac_ubercart_catalog_products_style', ''),
   '#description' => t('This style applies for 3 and for columns layout'),
  );
	
	$form['catalog_products']['ac_ubercart_catalog_products_2_cols_style'] = array(
   '#type' => 'select',
   '#title' => t('2 columns - image style'),
   '#options' => image_style_options(),
   '#default_value' => variable_get('ac_ubercart_catalog_products_2_cols_style', ''),
   '#description' => t('This style applies for 2 columns layout'),
  );
	
	$form['catalog_products']['ac_ubercart_catalog_products_cols'] = array(
   '#type' => 'select',
   '#title' => t('Columns'),
   '#options' => drupal_map_assoc ( range (1, 20) ),
   '#default_value' => variable_get('ac_ubercart_catalog_products_cols', 3),
   '#description' => t('Number of items in each row; e.g., 4'),
  );
	
	$form['catalog_products']['ac_ubercart_catalog_products_spaced'] = array(
		'#type' => 'checkbox',
		'#title' => t('Spaced Items?'),
		'#description' => t ( 'Turn it On to display horizontally spaced.' ),
		'#default_value' => variable_get('ac_ubercart_catalog_products_spaced', TRUE),
	);
	
	$form['catalog_products']['ac_ubercart_catalog_products_padding'] = array (
		'#type' => 'textfield',
		'#field_suffix' => t('(px)'),
		'#title' => t('padding between items'),
		'#description' => t ( 'Items paddings (e.g. 5 pixel padding will give you 10 pixel paddings between items)' ),
		'#default_value' => variable_get('ac_ubercart_catalog_products_padding', '20px'),
		'#states' => array(
			'visible' => array(
				':input[name="ac_ubercart_catalog_products_spaced"]' => array('checked' => TRUE),
			),
		),
	);
	
  // This form allows page compression settings to be changed, which can
  // invalidate the page cache, so it needs to be cleared on form submit.
  //$form['#submit'][] = 'acquia_clear_cache_submit';
 return system_settings_form($form);
}
