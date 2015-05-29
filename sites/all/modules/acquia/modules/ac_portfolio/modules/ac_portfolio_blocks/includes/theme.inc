<?php

/**
 * @file
 *  Contains helper functions to build and override theme functions
 */

 /**
 * Implements hook_theme().
 */
function ac_portfolio_blocks_theme() {
  acquia_include('options', 'ac_portfolio');

  $path = drupal_get_path('module', 'ac_portfolio_blocks') . '/theme';
  
  $items = array();
  $items['portfolio_recent'] = array(
    'variables' => array(
      'settings' => array(),
    ),
    'template' => 'portfolio-recent',
    'path' => $path,
  );
  
  $items['portfolio_related'] = array(
    'variables' => array(
      'nid' => NULL,
    ),
    'template' => 'portfolio-related',
    'path' => $path,
  );

  return $items;
}

/**
 * @TODO document here
 */
function ac_portfolio_blocks_preprocess_portfolio_recent(&$vars){
  acquia_include('utility');
  acquia_include('slider');
  acquia_include('utility', 'ac_portfolio');
  acquia_include('media', 'ac_portfolio');
  acquia_include('utility', 'ac_portfolio_blocks');
  $vars['items'] = array();

  $settings = isset($vars['settings']) ? $vars['settings'] : array();
  $settings+= drupal_get_query_parameters();
  ac_portfolio_item_prepare_settings($settings);

  if ($settings['appearance'] == 'slider') {
    $settings['num_per_page'] = $settings['total'];
    $settings['view'] = 'slider';
  }elseif ($settings['appearance'] == 'thumb') {
    $settings['view'] = 'thumb';
  }

  $items = ac_portfolio_get_recent_items($settings);
  $vars['pager'] = $items['pager_pager'];
  $items = $items['pager_nodes'];

  $tags = array();
  $thumbs = array();
  
  if ($items && !empty($items)) {
    foreach ($items as $item) {
      $item = ac_portfolio_prepare_view($item, $settings);
      $item['frame'] = isset($settings['frame']) ? $settings['frame'] : '';
      if (isset($item['thumb'])) {
        $thumbs[] = $item['thumb'];
      }
      if (isset($settings['view'])) {
        
        $tags += isset($item['tags-raw']) ? $item['tags-raw'] : array();
        $vars['items'][] = theme('portfolio_thumb_view_' .$settings['view'], $item );
      }
    }
  }
  
  // tag sorting
  if ($settings['sorting']) {
    $vars['sortings'] = theme('portfolio_sortings', array(
      'tags' => $tags,
      'style' => $settings['filter_style'],
      'filter_type' => $settings['appearance'] == 'multigrid' ? 'ajax' : 'isotope',
      ));
  }
  
  $settings['framed'] = $settings['frame'];
  $vars['items'] = array_filter($vars['items'], 'strlen');
  $vars['wrap_attrs']['id'] = $settings['id'];
  $vars['wrap_attrs']['class'][] = 'ac-portfolio';
  $vars['inner_attrs']['class'][] = isset($settings['spaced']) && $settings['spaced'] ? 'ac-spaced' : 'ac-no-sapced';
  $vars['wrap_attrs']['class'][] =  acquia_get_class_by_args(array('pager'), $settings, CHECK_LENGTH);
  $vars['wrap_attrs']['class'][] =  $settings['appearance'] == 'multigrid' ? 'ac-filter-ajax' : 'ac-filter-isotope';
  $vars['wrap_attrs']['class'][] = 'ac-s-li';
  $vars['wrap_attrs']['class'][] = isset($settings['fullwidth']) && $settings['fullwidth'] ? 'ac-full-container-width' : NULL;
  $vars['fullwidth'] = $settings['fullwidth'];
  
  // -- Inner
  $vars['inner_attrs']['class'] = array('ac-portfolio-i');

  // -- Container
  $vars['container_attrs']['class'] = array('p-items', 'clearfix');
  $vars['container_attrs']['class'][] = $settings['appearance'] == 'masonry' ? 'ac-init-hidden' : NULL;
  $vars['container_attrs']['class'][] = acquia_get_class_by_args(array('view', 'framed'), $settings, CHECK_LENGTH);
  
  $vars['container_attrs']['class'][] = acquia_get_class_by_args(array('cols'), $settings, CHECK_LENGTH);
  $vars['container_attrs']['data-columns'] = $settings['cols'];
  $vars['container_attrs']['data-padding'] = $settings['spaced'] ? $settings['padding'] : 0;
  // in case of infscroller
  $vars['container_attrs']['class'][] = 'pager-target';
  $vars['container_attrs']['class'][] = acquia_get_class_by_args(array('appearance'), $settings, CHECK_LENGTH);

  if ($settings['appearance'] == 'scroller') {
    $vars['inner_attrs']['class'][] = 'ac-init-hidden';
    // Scroller
    acquia_load_resources('slider');
    $vars['container_attrs']['class'][]= 'ac-appearance-grid';
    $vars['inner_attrs']['class'][]= 'ac-slider';
    $vars['inner_attrs']['class'][]= 'ac-darkstyle';
    $vars['inner_attrs']['data-columns'] = isset($settings['cols']) ? $settings['cols'] : acquia_variable_get('portfolio_recent_cols', 4);
    
    if (isset($settings['nav_prev_next']) && !$settings['nav_prev_next']) {
      $vars['inner_attrs']['data-directionnav'] = 'false';
    }else{
      $vars['inner_attrs']['class'][]= 'ac-prev-next-enabled';
    }
    
    if (isset($settings['nav_pager']) && !$settings['nav_pager']) {
      $vars['inner_attrs']['data-controlnav'] = 'false';
    }else{
      $vars['inner_attrs']['class'][]= 'ac-pager-enabled';
    }
    
    if (isset($settings['auto_scroll']) && $settings['auto_scroll']) {
      $vars['inner_attrs']['data-auto'] = 'true';
    }
    
    $vars['container_attrs']['class'][] = 'slides';
    $vars['pager'] = '';
  }else if ($settings['appearance'] == 'slider') {
    $vars['wrap_attrs']['class'][] = 'ac-init-hidden';
    // Scroller
    acquia_load_resources('slider');
    //$vars['wrap_attrs']['data-controlNav'] = 'false';
    $vars['wrap_attrs']['data-columns'] = 1;
    $vars['container_attrs']['class'][] = 'slides';
    $vars['pager'] = '';
    if (isset($settings['thumb']) && $settings['thumb']) {
      $vars['footer'] = get_thumb_slider_js(array('id' => $vars['wrap_attrs']['id']), $thumbs);
      $vars['wrap_attrs']['data-thumbNav'] = 'true';
      $vars['wrap_attrs']['class'][]= 'flexslider';
      $vars['wrap_attrs']['class'][]= 'ac-thumb-slider';
    }else{
      $vars['wrap_attrs']['class'][]= 'ac-slider';
    }
    
    if (isset($settings['pager']) && $settings['pager']) {
      $vars['wrap_attrs']['class'][]= 'ac-pager-enabled';
    }
    
    if ($settings['excerpt'] == false) {
      $vars['wrap_attrs']['data-controlnav'] = 'false';
      $vars['wrap_attrs']['class'][]= 'ac-simple-style';
      
    }else{
      $vars['wrap_attrs']['class'][]= 'ac-mini-nav';
    }
  }else if($settings['appearance'] == 'thumb'){
    $vars['container_attrs']['class'][]= 'ac-appearance-grid';
  }else{
    if ($settings['appearance'] == 'multigrid'){
      // Add lib
      drupal_add_library('acquia', 'collageplus');
      if (isset($settings['gplus_height']) && !empty($settings['gplus_height'])) {
        $vars['container_attrs']['data-gplus_height'] = $settings['gplus_height'];
      }
      if (isset($settings['gplus_effect']) && !empty($settings['gplus_effect'])) {
        $vars['container_attrs']['data-gplus_effect'] = $settings['gplus_effect'];
      }
    }else{
      // Masonry and Grid view
      acquia_load_resources('isotope');
    }
    
    if ($settings['pager'] == 'ajax') {
      $vars['container_attrs']['data-ajax_type'] = $settings['ajax_type'];
    }
  
    if ($settings['pager'] == 'ajax' && $settings['num_per_page'] !=-1) {
      /**
       * slider for items
       *  when pager enabled and infinite scroll paging some libraries won't load so we need to load them manually
       */
      acquia_load_resources('minslider');
      $js = array(
        'pager' => '.ac-pager-ajax .pager',
        'pagerNext' => '.ac-pager-ajax .pager .pager-next a',
        'doneText' => t('all is loaded!'),
      );
    
      drupal_add_js(array('infscr' => $js), 'setting');
      acquia_load_resources('infscroller');
      
      $vars['pager'] .= theme('acquia_ajax_load_btn');
    }
  }

	$vars['wrap_attrs']['class'] = array_filter($vars['wrap_attrs']['class'], 'strlen');
	$vars['wrap_attrs']['class'] = implode(' ', $vars['wrap_attrs']['class']);
  
	$vars['container_attrs']['class'] = array_filter($vars['container_attrs']['class'], 'strlen');
	$vars['container_attrs']['class'] = implode(' ', $vars['container_attrs']['class']);
  
	$vars['inner_attrs']['class'] = array_filter($vars['inner_attrs']['class'], 'strlen');
	$vars['inner_attrs']['class'] = implode(' ', $vars['inner_attrs']['class']);
}

/**
 * @TODO document here
 */
function ac_portfolio_blocks_preprocess_portfolio_related(&$vars){
  acquia_include('content');
  acquia_include('utility', 'ac_portfolio');
  acquia_include('media', 'ac_portfolio');
  acquia_include('utility', 'ac_portfolio_blocks');

  if (!isset($vars['nid']) || $vars['nid'] == 0) {
    $node = menu_get_object();
  }else {
    $node = node_load($vars['nid']);
  }
  
  $vars['items'] = array();
  if (!is_object($node) || !isset($node->nid)) {
    return;
  }

  $settings = isset($vars['settings']) ? $vars['settings'] : array();
  $vars['settings'] = $settings;

  $items = ac_portfolio_get_related_items($node);
  if ($items && !empty($items)) {
    foreach ($items as $item) {
      $item = ac_portfolio_prepare_view($item, $settings);
      if (isset($settings['view'])) {
        $item['frame'] = isset($settings['frame']) ? $settings['frame'] : '';
        $vars['items'][] = theme('portfolio_thumb_view_' .$settings['view'], $item );
      }
    }
  }
  $vars['items'] = array_filter($vars['items'], 'strlen');

  // Load resources
  acquia_load_resources('slider');
  
  // Wrapper attributes
  $vars['wrap_attrs']['class'][] = 'ac-portfolio';
  $vars['wrap_attrs']['class'][] = 'block';
  
  // Inner attributes
  $vars['inner_attrs']['class'][]= 'p-items';
  $vars['inner_attrs']['class'][]= 'clearfix';
  $vars['inner_attrs']['class'][] = acquia_get_class_by_args(array('view'), $settings, CHECK_LENGTH);
  $vars['inner_attrs']['class'][]= 'ac-slider';
  $vars['inner_attrs']['class'][] = 'ac-init-hidden';
  $vars['inner_attrs']['class'][]= 'ac-darkstyle';
  
  if (isset($settings['nav_prev_next']) && !$settings['nav_prev_next']) {
    $vars['inner_attrs']['data-directionnav'] = 'false';
  }else{
    $vars['inner_attrs']['class'][]= 'ac-prev-next-enabled';
  }
  if (isset($settings['nav_pager']) && !$settings['nav_pager']) {
    $vars['inner_attrs']['data-controlnav'] = 'false';
  }else{
    $vars['inner_attrs']['class'][]= 'ac-pager-enabled';
  }
  
  if (isset($settings['auto_scroll']) && $settings['auto_scroll']) {
    $vars['inner_attrs']['data-auto'] = 'true';
  }
  
  // container attributes
  $vars['container_attrs']['class'][]= 'ac-appearance-grid';
  $vars['container_attrs']['class'][] = 'slides';
  $vars['container_attrs']['data-columns'] = isset($settings['cols']) ? $settings['cols'] : acquia_variable_get('portfolio_related_cols', 4);
  $vars['container_attrs']['data-padding'] = $settings['spaced'] ? $settings['padding'] : 0;
    
  $vars['pager'] = '';
}
