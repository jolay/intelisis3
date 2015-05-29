<?php
/**
 * @file shortcode defenition of audio
 */
/**
 * Implements ac_shortcode_SHORTCODE_shortcode()
 * @return an array of shortcodes defenition
 * 
 * 	Shortcode settings array consists of below values:
 * 	 %tag : Shortcode tag
 * 	 %title: Shortcode title
 * 	 %description: Shortcode description
 * 	 %category: An array of categories that this shortcode belongs to
 * 	 %class: A class name that contains methods to process the tag
 * 	 %file: Shortcode class file name
 * 	 %path: Relative path to shortcode class file
 * 	 %nested shortcodes: Array of shortcode tags that can be nested
 *    	in this shortcode and processed as a value of current shortcode
 * 	 %hidden: A Boolean value indicating whether this shortcode must
 *    	be hidden in the shortcodes list or not. it works in conjunction
 *    	with %enabled key.
 * 	 %enabled: Array of shortcode tags and a Boolean value that represents
 *    	the circumstances that the shortcode can be enabled based on the
 *    	status of other shortcodes.
 */

function ac_ubercart_shop_shortcode() {
	 return array(
		 'ac_shop' => array(
				 'title' => t('Shop'),
				 'description' => t('Display products list sorted by date added.'),
				 'form callback' => 'ac_shortcode_ac_shop_form',
				 'values process callback' => 'ac_shortcode_ac_shop_preprocess',
				 'process callback' => 'ac_shortcode_ac_shop_process',
			),
		 'ac_shop_tags' => array(
				 'title' => t('Shop Tags'),
				 'description' => t('Display List of product\'s Tags.'),
				 'form callback' => 'ac_shortcode_ac_shop_tags_form',
				 'values process callback' => 'ac_shortcode_ac_shop_tags_preprocess',
				 'process callback' => 'ac_shortcode_ac_shop_tags_process',
			),
		 'ac_products_block' => array(
				 'title' => t('products block'),
				 'description' => t('products views.'),
				 'form callback' => 'ac_shortcode_ac_products_block_form',
				 'values process callback' => 'ac_shortcode_ac_products_block_preprocess',
				 'process callback' => 'ac_shortcode_ac_products_block_process',
			),
	 );
}

/**
 * Implements edit form of {{ac_products_block}} shortcode
 */
function ac_shortcode_ac_products_block_form($form, &$form_state) {
	acquia_include('options');
  acquia_include('fields');
	acquia_include('options', 'ac_ubercart');
	
	$values = isset($form_state['values']) ? $form_state['values'] : array();

	 /** Global shortcode elements **/
	 $form['type'] = array(
		 '#type' => 'select',
		 '#title' => t('block type'),
		 '#description' => t('select a block type from the list.'),
		 '#options' => array('sale' => t('Sale products'), 'top_rated' => t('top rated products'), 'reviews' => t('Recent reviews')),
		 '#default_value' => isset($values['type']) ? $values['type'] : '',
	 );
	 
	 /** Global shortcode elements **/
	 $form['class'] = array(
		 '#type' => 'textfield',
		 '#title' => t('Extra class name'),
		 '#description' => t('If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.'),
		 '#default_value' => isset($values['class']) ? $values['class'] : '',
	 );
	 
	 $form['submit'] = array(
		 '#type' => 'submit',
		 '#value' => t('submit'),
	 );

	return $form;
}

/**
 * process {{ac_shop_tags}} Shortcode 
 * 	building the HTML output of shortcode
 */
function ac_shortcode_ac_products_block_process($attrs, $text = null, $shortcode = '') {
	$_attrs = ac_shortcode_attrs(array(
		'type' => 'top_rated',
	), $attrs);
	extract($_attrs);
	$sc_name = str_replace('_', '-', $shortcode);

	$display_ids = array('top_rated' => 'top_rated_products', 'sale' => 'sale_products', 'reviews' => 'recent_reviews');
	$view_name = 'product_blocks';
  $display_id = isset($display_ids[$type]) ? $display_ids[$type] : 'top_rated_products';
  $view = views_get_view($view_name);
  if (!$view || !$view->access($display_id)) {
		drupal_set_message('You don\'t have enough permission to access this page!', 'warning');
    return;
  }
	
	$view->set_display($display_id);
	return $view->preview();
}



/**
 * Implements edit form of {{ac_shop_tags}} shortcode
 */
function ac_shortcode_ac_shop_tags_form($form, &$form_state) {
	acquia_include('options');
  acquia_include('fields');
	acquia_include('options', 'ac_ubercart');
	
	$values = isset($form_state['values']) ? $form_state['values'] : array();

	 /** Global shortcode elements **/
	 $form['view'] = array(
		 '#type' => 'select',
		 '#title' => t('view type'),
		 '#description' => t('select a view type from the list to render the tags.'),
		 '#options' => ac_ubercart_tags_view(),
		 '#default_value' => isset($values['view']) ? $values['view'] : '',
	 );
	 
	 /** Global shortcode elements **/
	 $form['class'] = array(
		 '#type' => 'textfield',
		 '#title' => t('Extra class name'),
		 '#description' => t('If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.'),
		 '#default_value' => isset($values['class']) ? $values['class'] : '',
	 );
	 
	 $form['submit'] = array(
		 '#type' => 'submit',
		 '#value' => t('submit'),
	 );

	return $form;
}


/**
 * process {{ac_shop_tags}} Shortcode 
 * 	building the HTML output of shortcode
 */
function ac_shortcode_ac_shop_tags_process($attrs, $text = null, $shortcode = '') {
	$_attrs = ac_shortcode_attrs(array(
		'view' => 'list',
	), $attrs);
	extract($_attrs);
	$sc_name = str_replace('_', '-', $shortcode);

  $vars = array();
  if ($_attrs['view'] != 'tagclouds') {
	  acquia_include('utility', 'ac_ubercart');
	  $vars['tags'] = ac_ubercart_get_all_tags();
	}

	$vars['vocabulary'] = AC_UBERCART_PRODUCT_TAGS_MN;

  $block  = theme('acquia_tags_view_' . $_attrs['view'], $vars);
	return $block;
}


/**
 * Implements edit form of {{ac_shop}} shortcode
 */
function ac_shortcode_ac_shop_form($form, &$form_state) {
	acquia_include('options');
  acquia_include('fields');
	
	$values = isset($form_state['values']) ? $form_state['values'] : array();
	
	$form['total'] = array (
		'#type' => 'textfield',
		'#title' => t('Total Number of Items'),
		'#description' => t ( 'Number of product items to extract from database. Enter -1 to extract all product items.' ),
		'#default_value' => isset($values['total']) ? $values['total'] : -1,
	);
	
	$form['num_per_page'] = array (
		'#type' => 'textfield',
		'#title' => t('Pager items'),
		'#description' => t ( 'Number of items in each page. Enter -1 to disable pager view.' ),
		'#default_value' => isset($values['num_per_page']) ? $values['num_per_page'] : 12,
	);
	

	$form['cols'] = array (
    '#type' => 'select',
    '#title' => t('Columns'),
    '#description' => t ( 'Number of Columns to show.' ),
    '#default_value' => isset($values['cols']) ? $values['cols'] : 4,
		'#options' => drupal_map_assoc ( range (1, 6) ),
  );
	
	$form['spaced'] = array(
		 '#type' => 'checkbox',
		 '#title' => t('Spaced Items?'),
		 '#default_value' => isset($values['spaced']) ? ($values['spaced'] == 'false' ? FALSE : TRUE) : 'false',
	 );
	
	$form['padding'] = array (
		'#type' => 'textfield',
		'#field_suffix' => t('(px)'),
		'#title' => t('padding between items'),
		'#description' => t ( 'Items paddings (e.g. 5 pixel padding will give you 10 pixel paddings between items)' ),
		'#default_value' => isset($values['padding']) ? $values['padding'] : '20',
	);
	
	 /** Global shortcode elements **/
	 $form['class'] = array(
		 '#type' => 'textfield',
		 '#title' => t('Extra class name'),
		 '#description' => t('If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.'),
		 '#default_value' => isset($values['class']) ? $values['class'] : '',
	 );
	 
	 $form['submit'] = array(
		 '#type' => 'submit',
		 '#value' => t('submit'),
	 );

	return $form;
}


/**
 * Process {{ac_shop}} shortcode values before making shortcode string
 */
function ac_shortcode_ac_shop_preprocess(&$values) {
	 if (isset($values['spaced']) && $values['spaced'] == TRUE) {
		 $values['spaced'] = 'true';
	 }else{
		 $values['spaced'] = 'false';
		 $values['padding'] = 0;
	 }
}

/**
 * process {{ac_shop}} Shortcode 
 * 	building the HTML output of shortcode
 */
function ac_shortcode_ac_shop_process($attrs, $text = null, $shortcode = '') {
	$_attrs = ac_shortcode_attrs(array(
		'cols' => 4,
		'padding' => '20',
		'spaced' => 'true',
		'total' => -1,
		'num_per_page' => 12,
		), $attrs);
  foreach($_attrs as $key => &$val){
    if ($val == 'true') {
      $val = TRUE;
    }else if ($val == 'false') {
      $val = FALSE;
    }
  }
  extract($_attrs);
	 
	 // Load resources
	 drupal_add_library('ac_ubercart', 'easyzoom');
	 $module_path = drupal_get_path('module', 'ac_ubercart');
	 drupal_add_js($module_path . '/js/ac_ubercart.js');
	 // Grid view
	 acquia_load_resources('isotope');
	 
	$view_name = 'products';
  $display_id = 'ac_ubercart_shop';
  $view = views_get_view($view_name);
  if (!$view || !$view->access($display_id)) {
		drupal_set_message('You don\'t have enough permission to access this page!', 'warning');
    return;
  }


	//$limit = intval($limit);

	$view->set_display($display_id);
	$view->args['cols'] = $cols;
	$view->args['padding'] = $padding;
	$view->args['spaced'] = $spaced;
	
	// pager enabled
	if ($num_per_page >0){
	  $view->display_handler->options['defaults']['pager'] = TRUE;
	 	$view->set_items_per_page($num_per_page);
	}else{
	 $view->display_handler->options['defaults']['pager'] = FALSE;
	 $view->display_handler->options['pager']['type'] = 'some';
	 $view->display_handler->options['pager']['options']['items_per_page'] = '' .$total . '';
	 $view->display_handler->options['pager']['options']['offset'] = '0';
	}

	//$view->args['carousel'] = ($carousel == 'true' && $slider == 'false') ? TRUE : FALSE;
	//$view->args['class'] = implode(' ', $classes);
	//$view->args['display_image'] = $display_image;
	//$view->args['columns'] = $columns;


	//if ($read_more_button == 'true') {
	//	$view->display_handler->options['use_more'] = true;
	//}else {
	//	$view->display_handler->options['use_more'] = false;
	//}
	
	return $view->preview();
}