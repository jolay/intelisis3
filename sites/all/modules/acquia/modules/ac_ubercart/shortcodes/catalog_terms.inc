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

function ac_ubercart_catalog_terms_shortcode() {
	 return array(
		 'ac_catalog_terms' => array(
				 'title' => t('Catalog Terms'),
				 'description' => t('Display total number of products in catalogs.'),
				 'form callback' => 'ac_shortcode_ac_catalog_terms_form',
				 'values process callback' => 'ac_shortcode_ac_catalog_terms_preprocess',
				 'process callback' => 'ac_shortcode_ac_catalog_terms_process',
			),
	 );
}

/**
 * Implements edit form of {{ac_products_block}} shortcode
 */
function ac_shortcode_ac_catalog_terms_form($form, &$form_state) {
	acquia_include('options');
  acquia_include('fields');
	acquia_include('options', 'ac_ubercart');
	
	$values = isset($form_state['values']) ? $form_state['values'] : array();

	 /** Global shortcode elements **/
	 $form['appearance'] = array(
		 '#type' => 'select',
		 '#title' => t('Appearance'),
		 '#description' => '',
		 '#options' => array('scroller' => t('Display items in slides'), 'grid' => t('Display items in Grid')),
		 '#default_value' => isset($values['appearance']) ? $values['appearance'] : '',
	 );
	 
	 $form['nav_pager'] = array (
			 '#type' => 'checkbox',
			 '#title' => t('Display slider pager?'),
			 '#description' => t ( 'Check it to Display slider pager.' ),
			 '#default_value' => isset($values['nav_pager']) && $values['nav_pager'] == 'true' ? TRUE : FALSE,
				'#states' => array(
					'visible' => array(
						':input[name="appearance"]' => array('value' => 'scroller'),
					),
				),
		 );
		 
		 $form['nav_prev_next'] = array (
			 '#type' => 'checkbox',
			 '#title' => t('Display slider prev/next navigation?'),
			 '#description' => t ( 'Check it to Display Navigation.' ),
			 '#default_value' => isset($values['nav_prev_next']) && $values['nav_prev_next'] == 'true' ? TRUE : FALSE,
				'#states' => array(
					'visible' => array(
						':input[name="appearance"]' => array('value' => 'scroller'),
					),
				),
		 );
	
	$form['cols'] = array (
    '#type' => 'select',
    '#title' => t('Columns'),
    '#description' => t ( 'Number of Columns to show. in slider appearance type this is the number of items visible in each slides loop; e.g., 4' ),
    '#default_value' => isset($values['cols']) ? $values['cols'] : acquia_variable_get('ac_ubercart_catalog_terms_cols', 4),
		'#options' => drupal_map_assoc ( range (1, 6) ) 
  );
	
	$form['spaced'] = array(
		 '#type' => 'checkbox',
		 '#title' => t('Spaced Items?'),
	 );
	if (isset($values['spaced'])) {
    $form['spaced']['#default_value'] = $values['spaced'] == 'true' ? TRUE : FALSE;
	}else {
    $form['spaced']['#default_value'] = acquia_variable_get('ac_ubercart_catalog_terms_spaced', TRUE);
	}
	$form['padding'] = array (
		'#type' => 'textfield',
		'#field_suffix' => t('(px)'),
		'#title' => t('padding between items'),
		'#description' => t ( 'Items paddings (e.g. 5 pixel padding will give you 10 pixel paddings between items)' ),
		'#default_value' => isset($values['padding']) ? $values['padding'] : acquia_variable_get('ac_ubercart_catalog_terms_padding', 20),
		'#states' => array(
			'visible' => array(
				':input[name="spaced"]' => array('checked' => TRUE),
			),
		),
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

function ac_shortcode_ac_catalog_terms_preprocess(&$values){
   if (isset($values['appearance']) && $values['appearance'] == 'scroller') {
			if (isset($values['nav_pager']) && $values['nav_pager'] == TRUE) {
				$values['nav_pager'] = 'true';
			}else{
				unset($values['nav_pager']);
			}
			
			if (isset($values['nav_prev_next']) && $values['nav_prev_next'] == TRUE) {
				$values['nav_prev_next'] = 'true';
			}else{
				unset($values['nav_prev_next']);
			}
	 }
	 if (isset($values['spaced']) && $values['spaced'] == TRUE) {
		 $values['spaced'] = 'true';
	 }else{
		 $values['spaced'] = 'false';
		 $values['padding'] = 0;
	 }
	 
}

/**
 * process {{ac_catalog_terms}} Shortcode 
 * 	building the HTML output of shortcode
 */
function ac_shortcode_ac_catalog_terms_process($attrs, $text = null, $shortcode = '') {
	$_attrs = ac_shortcode_attrs(array(
		'appearance' => 'scroller',
	), $attrs);

	$sc_name = str_replace('_', '-', $shortcode);

	$view_name = 'uc_catalog_terms';
  $display_id = 'default';
  $view = views_get_view($view_name);
  if (!$view || !$view->access($display_id)) {
		drupal_set_message('You don\'t have enough permission to access this page!', 'warning');
    return;
  }
	$tids = get_products_terms_tids();
	if (empty($tids)) {
    return;
	}
	$view->set_display($display_id);
	
	 acquia_load_resources('isotope');
	 acquia_include('grid');
	 
	 $wrap_attrs['class'] = array('ac-catalog-terms','ac-products', 'clearfix');
	 $wrap_attrs['class'][] = 'ac-init-hidden';

	 $inner_attrs = array();
	 
	 if (isset($attrs['spaced']) && $attrs['spaced'] == 'true') {
			$attrs['padding'] = isset($attrs['padding']) ? $attrs['padding']: acquia_variable_get('ac_ubercart_catalog_terms_padding', '20');
	 }else{
			$attrs['padding'] = 0;
	 }
	 
	 acquia_add_grid_attributes(array(
			'columns' => isset($attrs['cols']) ? $attrs['cols']: acquia_variable_get('ac_ubercart_catalog_terms_cols', 4),
			'padding' => $attrs['padding'],
	 ),$inner_attrs);
	if ($_attrs['appearance'] == 'scroller') {
    // Scroller
    acquia_load_resources('slider');
    $wrap_attrs['class'][]= 'ac-appearance-grid';
    $wrap_attrs['class'][]= 'ac-slider';
    $wrap_attrs['data-columns'] = isset($attrs['cols']) ? $attrs['cols']: acquia_variable_get('ac_ubercart_catalog_terms_cols', 4);
    $wrap_attrs['data-controlnav'] = isset($attrs['nav_pager']) && $attrs['nav_pager'] == 'true' ? 'true' : 'false';
    $wrap_attrs['data-directionNav'] = isset($attrs['nav_prev_next']) && $attrs['nav_prev_next'] == 'true' ? 'true' : 'false';
    $inner_attrs['class'][] = 'slides';
	}else{
			$inner_attrs['class'][] = 'ac-appearance-masonry';
			$inner_attrs['class'][] = 'ac-s-li';
			$inner_attrs['class'][] = 'clearfix';
	}
	return $view->preview('default', array(implode('+', $tids), 'inner_attrs' => $inner_attrs, 'wrap_attrs' => $wrap_attrs));
}

/**
 *
 */
function get_products_terms_tids($reset = false){
	$tids = &drupal_static(__FUNCTION__, null);
	
	if (!isset($tids)){
	 $cid = 'ac_products_terms_tids';
    if (!$reset && $tids = cache_get($cid, 'cache')) {
      $tids = $tids->data;
    }else{
			$tids = array();
			// Extract parent terms only
			foreach(taxonomy_get_tree(variable_get('uc_catalog_vid', 0)) as $term){
				if ($term->depth == 0) {
					$tids[] = $term->tid;
				}
			}
		}
		cache_set($cid, $tids);
	}
	
	return $tids;
}

