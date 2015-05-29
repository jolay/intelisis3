<?php
//$Id
/**
 *
 */
function ac_ubercart_get_cart_item_thumb($node) {
	if (!isset($node->nid)) {
		return;
	}
	$images = field_get_items('node', $node, AC_PRODUCT_FIELD_IMAGES_MN, $node->language);
	if (!empty($images)) {
		acquia_include('media');
		$style = variable_get('ac_ubercart_cart_image_thumb_style', NULL);
		
	 // @todo change it 
		$thumb = array_shift($images);
		$thumb = acquia_image_format_simple(array(
			'fid' => $thumb['fid'],
			'style' => array('image_style' => $style),
			'link' => array('path' => 'node/' .$node->nid, 'options' => array('attributes' => array('class' => array('ac-bordered', 'ac-product-thumb')))),
		 ));
		
		return $thumb;
	}
}

/**
 *
 */
/**
 * Load CSS,JS and Drupal registered libs files
 * @param $_type
 *		type of resources to load
 */
function ac_ubercart_load_resources($_type = 'products') {
  $done = &drupal_static(__FUNCTION__, array());
	
	if (is_array($_type)) {
		$type = array_pop($_type);
		if (count($_type) >0) {
			ac_ubercart_load_resources($_type);
		}
	}else{
		$type = $_type;
	}
	
	if (isset($done[$type])) {
		return;
	}
	
	$done[$type] = TRUE;
	$module_path = drupal_get_path('module', 'ac_ubercart');
	
	switch ($type) {
		
		case 'products':
			acquia_load_resources('isotope');
			break;
	
		case 'product':
			drupal_add_library('ac_ubercart', 'easyzoom');
			drupal_add_js($module_path . '/js/ac_ubercart.js');
			break;
	}
}

/**
 *
 */
function ac_ubercart_get_all_tags(){
  acquia_include('taxonomy');
  $vid = _ac_get_taxonomy_vid_by_name(AC_UBERCART_PRODUCT_TAGS_MN);
  return tagclouds_get_tags(array($vid));
}


/**
 * Emulates Drupal's menu system, but based around the catalog taxonomy.
 *
 * @param $branch
 *   A treeNode object. Determines if the URL points to itself, or possibly one
 *   of its children, if present. If the URL points to itself or one of its
 *   products, it displays its name and expands to show its children, otherwise
 *   displays a link and a count of the products in it. If the URL points to
 *   one of its children, it still displays a link and product count, but must
 *   still be expanded. Otherwise, it is collapsed and a link.
 *
 * @return
 *   An array whose first element is true if the treeNode is in hierarchy of
 *   the URL path. The second element is the HTML of the list item of itself
 *   and its children.
 */
function ac_ubercart_catalog_navigation($branch) {
  static $terms;
  static $breadcrumb;
  static $types;

  if (empty($types)) {
    $types = uc_product_types();
  }

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', $types)
    ->propertyCondition('status', 1) // Don't include unpublished products.
    ->fieldCondition('taxonomy_catalog', 'tid', $branch->tid)
    ->count();
  $num = $query->execute();


  $branch_path = uc_catalog_path($branch);
  if (!isset($breadcrumb)) {
    $breadcrumb = drupal_get_breadcrumb();
  }
  $vid = variable_get('uc_catalog_vid', 0);
  if ($_GET['q'] ==  $branch_path) {
    // The URL points to this term.
    $here = TRUE;
  }
  else {
    $here = FALSE;
  }
  if (!isset($terms)) {
    $node = menu_get_object('node', 1);
    $terms = array();
    if ($node && $field_data = field_get_items('node', $node, 'taxonomy_catalog')) {
      foreach ($field_data as $term) {
        $terms[$term['tid']] = $term['tid'];
      }
    }
  }
  // Determine whether to expand menu item.
  if ((arg(0) == 'node' && array_key_exists($branch->tid, $terms))) {
    $inpath = FALSE;
    foreach ($breadcrumb as $link) {
      if (strpos(urldecode($link), drupal_get_path_alias($branch_path)) !== FALSE) {
        $inpath = TRUE;
      }
    }
  }
  else {
    $inpath = $here;
  }

  $lis = array();
  $expand = variable_get('uc_catalog_expand_categories', FALSE);
  if ($expand || count($branch->children)) {
    foreach ($branch->children as $twig) {
      // Expand if children are in the menu path. Capture their output.
      list($child_in_path, $lis[], $child_num) = ac_ubercart_catalog_navigation($twig);
      $num += $child_num;
      if ($child_in_path) {
        $inpath = $child_in_path;
      }
    }
  }

  // No nodes in category or descendants. Not in path and display nothing.
  if (!$num) {
    return array(FALSE, '', 0);
  }

  // Checks to see if node counts are desired in navigation.
  $num_text = '( 0 )';
  if (variable_get('uc_catalog_block_nodecount', TRUE)) {
    $num_text = ' (' . $num . ')';
  }
	$num_text = '<span class="meta">' .$num_text .'</span>';
	
  $link = l($branch->name . $num_text, $branch_path, array('html' => TRUE));

  $output = theme('uc_catalog_item', array(
    'here' => $here,
    'link' => $link,
    'lis' => $lis,
    'expand' => $expand,
    'inpath' => $inpath,
    'count_children' => count($branch->children),
  ));

  // Tell parent category your status, and pass on output.
  return array($inpath, $output, $num);
}

