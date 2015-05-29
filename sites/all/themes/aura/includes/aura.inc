<?php

// Adds acquia theme framework required files - don't edit/remove below line
require_once dirname(__FILE__) . '/acquia/acquia.inc';

// Theme specific libs 
require_once dirname(__FILE__) . '/libs.inc';

// Init theme required vars
init_acquia_theme();

/**
 * Init Acquia Theme Here
 * 	here we define only theme specific variables.
 * 	other variables should be defined in {init_acquia_module} function.
 * 	@todo change to acquia_variable_set
 */
function init_acquia_theme($reset = TRUE){
	
	if ($reset || !variable_get('ACQUIA_T_INIT', false)) {
		// Acquia enabled theme
		variable_set('ACQUIA_THEME_NAME', ACQUIA_THEME_NAME);
		
		// Acquia enabled theme version
		variable_set('ACQUIA_THEME_VERSION', ACQUIA_THEME_VERSION);

		// Acquia theme framework base path
		variable_set('ACQUIA_TF_BASE_PATH', drupal_get_path('theme', ACQUIA_THEME_NAME) . '/includes/acquia');
		
		// Skin Path
		acquia_variable_set('theme_presets', drupal_get_path('theme', ACQUIA_THEME_NAME) . '/includes/acquia/presets');
		
		// Skin Path
		acquia_variable_set('theme_skins_dir', drupal_get_path('theme', ACQUIA_THEME_NAME) . '/includes/acquia/presets/skins');
		
		// Acquia framework base URL
		variable_set('ACQUIA_BASE_URL', url(drupal_get_path('theme', ACQUIA_THEME_NAME) . '/includes/acquia',
																				array('absolute' => true)));
		// We don't wanna reinit!
		variable_set('ACQUIA_T_INIT', true);
	}
}

/**
 * Override theme function
 */
function aura_status_messages($variables) {
 $display = $variables['display'];
  $output = '';
  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages $type ac-animate\" data-animate=\"data-anim-type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li><span class="vc-message-icon font-icon">&nbsp;</span>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= '<span class="vc-message-icon font-icon">&nbsp;</span>' .$messages[0];
    }
    $output .= "</div>\n";
  }
  return $output;
}


/**
 * Returns HTML for a query pager.
 *
 * Menu callbacks that display paged query results should call theme('pager') to
 * retrieve a pager control so that users can view other results. Format a list
 * of nearby pages with additional query results.
 *
 * @param $variables
 *   An associative array containing:
 *   - tags: An array of labels for the controls in the pager.
 *   - element: An optional integer to distinguish between multiple pagers on
 *     one page.
 *   - parameters: An associative array of query string parameters to append to
 *     the pager links.
 *   - quantity: The number of pages in the list.
 *
 * @ingroup themeable
 */
function aura_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current selected'),
            'data' => '<a href="#">' .$i .'</a>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '<a href="#"><i class="icon-dot-3"></i></a>',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
		
		$items[0]['class'][] = 'first';
		$items[count($items)-1]['class'][] = 'last';
		
		$pager_class = array('filter', 'ac-tabs');
		if (isset($variables['style']) && !empty($variables['style'])) {
			$variables['style'] = explode(' ', $variables['style']);
			foreach ($variables['style'] as $style) {
				$pager_class[] = $style . '-style';
			}
		}else {
			// @TODO move to UI
			$pager_class[] = 'simple-style sep-style';
		}
		
		$pager_class[] = 'clearfix';
		$pager_class = implode(' ', $pager_class);
		
		$out = '<h2 class="element-invisible">' . t('Pages') . '</h2>';
		$out .= '<section class="pager-o"><div class="s-i col-inner"><div class="'.$pager_class.'">';
    $out .= theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager ac-tabs-tabs')),
    ));
		$out .= '</div></div></section>';
		return $out;
  }
}

