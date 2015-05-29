<?php
// $ID
/**
 *
 */
function ac_ubercart_theme_registry_alter(&$theme_registry) {
	// list of themes to override from acquia module
	$module_overrides = array('fivestar_static', 'uc_cart_block_items', 'uc_cart_block_summary', 'uc_empty_cart', 'uc_cart_review_table', 'uc_catalog_block');
	$theme_path = drupal_get_path('module', 'ac_ubercart') . '/includes/theme.inc';
	foreach ($module_overrides as $theme) {
		// alter form elements theme registry
		$theme_registry[$theme]['function'] = 'ac_ubercart_theme_' . $theme;
		$theme_registry[$theme]['includes'][] = $theme_path;
	}
} 


/**
 * implementing hook_theme()
 */
function ac_ubercart_theme($existing, $type, $theme, $path) {
	$path = drupal_get_path('module', 'ac_ubercart') . '/theme';
  $items = array(
    'ac_ubercart_layout_sel' => array(
      'variables' => array('class' => NULL),
      'file' => 'includes/theme.inc',
    ),
	);
	
	for($i =0; $i< 3; $i++){
		$items['catalog_layout_sel_cols' . ($i+2) . ''] = array(
      'variables' => array(),
			'template' => 'catalog-layout-sel-cols-' . ($i+2) . '',
			'path' => $path,
		);
	}
	return $items;
}

/**
 *
 */
function theme_ac_ubercart_layout_sel(&$vars) {
	$layouts = array('2', '3', '4');
	$default = isset($_COOKIE['acCatalogLayouts']) ? intval($_COOKIE['acCatalogLayouts']) : variable_get('ac_ubercart_catalog_products_cols', 4);
	$out = '<div class="ac-catalog-layouts">';
	$active = '';
	foreach ($layouts as $layout) {
		$active = $layout == $default ? ' on' : '';
		$out .= '<a href="#" class="cols-'.$layout.$active.'" data-cols="'.$layout.'">'.theme('catalog_layout_sel_cols'.$layout) .'</a>';
	}
	
	$out .= '</div>';
	return $out;
}

/**
 * Implements hook_preprocess_node()
 */
function ac_ubercart_preprocess_node(&$vars){
  if (isset($vars['node']->type) && $vars['node']->type == AC_PRODUCT_MN) {
		acquia_include('theme', 'ac_ubercart');
		// Teaser view
		if ($vars['view_mode'] == 'teaser') {
      ac_ubercart_preprocess_teaser_view($vars);
    }
		// Full view
		else{
			ac_ubercart_preprocess_full_view($vars);
		}

  }
}
/**
 * Implements hook_preprocess_page()
 */
function ac_ubercart_preprocess_region(&$vars){
	if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2)) &&  $vars['region'] == 'content') {
		// Dirty trick to add masonry effect only to product taxonomy pages
		// @todo find a proper trick!
		if (isset($vars['elements']['system_main']['main']['#markup']) && !empty($vars['elements']['system_main']['main']['#markup'])) {
			if (strstr($vars['elements']['system_main']['main']['#markup'], 'ac-product-teaser-item')){
				array_unshift($vars['theme_hook_suggestions'], 'page__taxonomy__' .AC_PRODUCT_MN);
				$vars['theme_hook_suggestions'][] = 'region__content__product_taxonomy';
				//$vars['page']['content']['taxonomy-type'] = AC_PRODUCT_MN;
			}
		}
	}
}

/**
 * Themes the catalog block.
 *
 * @see theme_uc_catalog_item()
 * @ingroup themeable
 */
function ac_ubercart_theme_uc_catalog_block($variables) {
	acquia_include('utility', 'ac_ubercart');
 $menu_tree = $variables['menu_tree'];

  $output = '<ul class="catalog menu">';

  foreach ($menu_tree->children as $branch) {
    list($inpath, $html) = ac_ubercart_catalog_navigation($branch);
    $output .= $html;
  }

  $output .= '</ul>';

  return $output;
}
/**
 * Formats the cart contents table on the checkout page.
 *
 * @param $variables
 *   An associative array containing:
 *   - show_subtotal: TRUE or FALSE indicating if you want a subtotal row
 *     displayed in the table.
 *   - items: An associative array of cart item information containing:
 *     - qty: Quantity in cart.
 *     - title: Item title.
 *     - price: Item price.
 *     - desc: Item description.
 *
 * @return
 *   The HTML output for the cart review table.
 *
 * @ingroup themeable
 */
function ac_ubercart_theme_uc_cart_review_table($variables) {
	acquia_include('utility', 'ac_ubercart');
	
  $items = $variables['items'];
  $show_subtotal = $variables['show_subtotal'];
  $subtotal = 0;

  // Set up table header.
  $header = array(
    array('data' => '&nbsp;', 'class' => array('thumb')),
    array('data' => t('Products'), 'class' => array('products')),
    array('data' => theme('uc_qty_label'), 'class' => array('qty')),
    array('data' => t('Price'), 'class' => array('price')),
  );

  // Set up table rows.
  $display_items = uc_order_product_view_multiple($items);
  if (!empty($display_items['uc_order_product'])) {
    foreach (element_children($display_items['uc_order_product']) as $key) {
      $display_item = $display_items['uc_order_product'][$key];
      $subtotal += $display_item['total']['#price'];
			if (isset($items[$key])) {
				$thumb = ac_ubercart_get_cart_item_thumb($items[$key]);
			}else{
				$thumb = '';
			}
      $rows[] = array(
        array('data' => $thumb, 'class' => array('thumb', 'ac-product-thumb')),
        array('data' => $display_item['product'], 'class' => array('products')),
        array('data' => $display_item['qty'], 'class' => array('qty')),
        array('data' => $display_item['total'], 'class' => array('price')),
      );
    }
  }

  // Add the subtotal as the final row.
  if ($show_subtotal) {
    $rows[] = array(
      'data' => array(
        // One cell
        array(
          'data' => array(
            '#theme' => 'uc_price',
            '#prefix' => '<span id="subtotal-title">' . t('Subtotal:') . '</span> ',
            '#price' => $subtotal,
          ),
          // Cell attributes
          'colspan' => 4,
          'class' => array('subtotal'),
        ),
      ),
      // Row attributes
      'class' => array('subtotal'),
    );
  }

  return theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('class' => array('cart-review'))));
}

/**
 * Themes the table listing the items in the shopping cart block.
 *
 * @param $variables
 *   An associative array containing:
 *   - items: An associative array of cart item information containing:
 *     - qty: Quantity in cart.
 *     - title: Item title.
 *     - price: Item price.
 *     - desc: Item description.
 *   - collapsed: TRUE or FALSE indicating whether or not the cart block is
 *     collapsed.
 *
 * @ingroup themeable
 */
function ac_ubercart_theme_uc_cart_block_items($variables) {
  $items = $variables['items'];
  $class = $variables['collapsed'] ? 'cart-block-items collapsed' : 'cart-block-items';
  // If there are items in the shopping cart...
  if ($items) {
		acquia_include('utility', 'ac_ubercart');
    $output = '<ul class="' . $class . ' ac-s-li">';

    // Loop through each item.
    $row_class = 'odd';
    foreach ($items as $item) {
			$node = node_load($item['nid']);
			$thumb = ac_ubercart_get_cart_item_thumb($node);
      // Add the basic row with quantity, title, and price.
      $output .= '<li class="' . $row_class . ' ac-bordered ac-table">'
                . '	<div class="thumb ac-cell">' . $thumb . '</div>'
								. '	<div class="ac-cell info">'
								. '		<h5 class="s-title">' . $item['title'] . '</h5>';
      // Add a row of description if necessary.
      if ($item['desc']) {
        $output .= $item['desc'];
      }
			
			$output .= '<span class="footer">';
			$output .= '	<span class="qty">' . $item['qty'] . '</span>';
			$output .= '	<span class="price">' . theme('uc_price', array('price' => $node->price)) . '</span>';
			$output .= '</span>';

			$output .= '</div></li>';
      // Alternate the class for the rows.
      $row_class = ($row_class == 'odd') ? 'even' : 'odd';
    }

    $output .= '</ul>';
  }
  else {
    // Otherwise display an empty message.
    $output = '<div class="vc-message ac-type-silver ac-animate' . $class . ' uc-cart-empty" data-anim-type="fadeInDown">'
		.'<div class="vc-message-content"><span class="vc-message-icon icon-tools">&nbsp;</span>'
		.'<p class="vc-message-message">'.t('There are no products in your shopping cart.').'</p></div></div>';
  }

  return $output;
}

/**
 * Display a plain HTML view-only version of the widget with a specified rating.
 *
 * @param $rating
 *   The desired rating to display out of 100 (i.e. 80 is 4 out of 5 stars).
 * @param $stars
 *   The total number of stars this rating is out of.
 * @param $tag
 *   Allows multiple ratings per node.
 * @return
 *   A themed HTML string representing the star widget.
 */
function ac_ubercart_theme_uc_cart_block_summary($variables) {
  $item_count = $variables['item_count'];
  $item_text = $variables['item_text'];
  $total = $variables['total'];
  $summary_links = $variables['summary_links'];

	foreach ($summary_links as &$link) {
		$link['title'] .= ' →';
		$link['attributes'] = array('class' => array(
																	 'ac-button',
																	 'ac-align-left',
																	 'ac-style-sw_default',
																	 'ac-type-sw_default',
																	 'ac-bg_color-sw_default',
																	 'ac-size-small'));
	}
  // Build the basic table with the number of items in the cart and total.
  $output = '<h3 class="cart-block-summary">'
						. '<strong>'.t('subtotal:').'</strong>'
						. '&nbsp;<span class="amount">'.theme('uc_price', array('price' => $total)).'</span>'
						.'</h3>';

  // If there are products in the cart...
  if ($item_count > 0) {
    // Add a view cart link.
    $output .= '<div class="cart-block-summary-links">'
             . theme('links', array('links' => $summary_links,
							 'attributes' => array('class' => array('ac-s-li'))))
						 . '</div>';
  }

  return $output;
}

 /**
 * Display a plain HTML view-only version of the widget with a specified rating.
 *
 * @param $rating
 *   The desired rating to display out of 100 (i.e. 80 is 4 out of 5 stars).
 * @param $stars
 *   The total number of stars this rating is out of.
 * @param $tag
 *   Allows multiple ratings per node.
 * @return
 *   A themed HTML string representing the star widget.
 */
function ac_ubercart_theme_fivestar_static($variables) {
  $rating  = $variables['rating'];
  $stars = $variables['stars'];
  $tag = $variables['tag'];
  $widget = $variables['widget'];
  if ($widget['name'] != 'default') {
    $path = drupal_get_path('module', 'fivestar');
    drupal_add_css($path . '/css/fivestar.css');
    drupal_add_css($widget['css']);
  }

  $output = '<div class="fivestar-' . $widget['name'] . '">';
  $output .= '<div class="fivestar-widget-static fivestar-widget-static-' . $tag . ' fivestar-widget-static-' . $stars . ' clearfix">';
  if (empty($stars)) {
    $stars = 5;
  }
  $numeric_rating = $rating/(100/$stars);
  for ($n=1; $n <= $stars; $n++) {
	 if ($n == 1)$output .= '<span class="stars-value element-invisible">' .$numeric_rating .'&nbsp;' .format_plural($numeric_rating, t('star'), t('stars') ) .'</span>';

		$inner = '';
    $star_value = ceil((100/$stars) * $n);
    $prev_star_value = ceil((100/$stars) * ($n-1));
    $zebra = ($n % 2 == 0) ? 'even' : 'odd';
    $first = $n == 1 ? ' star-first' : '';
    $last = $n == $stars ? ' star-last' : '';
    if ($rating < $star_value && $rating > $prev_star_value) {
      $percent = (($rating - $prev_star_value) / ($star_value - $prev_star_value)) * 100;
      $inner = '<span class="on" style="width: ' . $percent . '%">';
      $on_off = 'on';
    }
    elseif ($rating >= $star_value) {
      $inner = '<span class="on">';
			$on_off = 'on';
    }
    else {
      $inner = '<span class="off">';
			$on_off = 'off';
    }
		
		$output .= '<div class="star star-' . $n . ' star-' . $zebra . $first . $last . ' '.$on_off . '">';
		$output .= $inner;

    $output .= '</span></div>';
  }
  $output .= '</div></div>';
  return $output;
}

/**
 * Returns the text displayed for an empty shopping cart.
 *
 * @ingroup themeable
 */
function ac_ubercart_theme_uc_empty_cart() {
    // Otherwise display an empty message.
    $output = '<div class="uc-empty-message ac-animate uc-cart-empty" data-anim-type="fadeInDown">'
		.'<h6 class="vc-message-message">'.t('Your cart is Currently empty.').'</h6></div>';
		return $output;
}

/**
 * Implements theme_preprocess_block().
 *
 * Extend block's classes with any user defined classes.
 */
function ac_ubercart_preprocess_block(&$vars) {
  $block = $vars['block'];
  if ($block->module == 'uc_catalog' && isset($block->delta) && $block->delta == 'catalog') {
		$vars['classes_array'][] = 'ac-li-bordered';
  }
}

/**
 * preprocess theme_comment()
 */
function ac_ubercart_preprocess_comment(&$vars) {
  // Let's say you want to have a custom template like comment--custom-TYPE.tpl.php
  // e.g. for an article content type, the template file will be comment--custom-article.tpl.php
  $vars['theme_hook_suggestions'][] = 'product__review';
}

/**
 *
 */
function ac_ubercart_preprocess_views_view(&$vars) {
  $view = $vars['view'];
  if($view->name == 'products') {
			$path = drupal_get_path('module', 'ac_ubercart');
     // add needed javascript
     drupal_add_js($path . '/js/ac_ubercart.js');
  }
}