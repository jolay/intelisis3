<?php

/**
 * @file theme specific libs definition
 *
 */

/**
 * Implements hook_omega_theme_libraries_info().
 */
function aura_omega_theme_libraries_info($theme) {
  $libs_path = acquia_variable_get('libs_path', 'sites/all/libraries');

  $theme_plugins_path = drupal_get_path('theme', 'aura') . '/css/plugins';

 // Customized animate.css library
	$libraries['cookie'] = array(
    'name' => t('jQuery cookie'),
    'description' => t('A simple, lightweight jQuery plugin for reading, writing and deleting cookies. Some Acquia functionality depends on this library.'),
    'vendor' => 'carhartl',
    'vendor url' => 'https://github.com/carhartl/jquery-cookie',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery.cookie.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
	// Customized animate.css library
	$libraries['animate.css'] = array(
    'name' => t('animate.css'),
    'description' => t('this is a customized version of animate.css (a bunch of cool, fun, and cross-browser animations for you to use in your projects. Great for emphasis, home pages, sliders, and general just-add-water-awesomeness.)'),
    'vendor' => 'Dan Eden',
    'vendor url' => 'http://daneden.me/animate/',
    'package' => t('Acquia'),
    'files' => array(
      'css' => array(
        'animate-custom.css' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
  // parallax scrolling js library
	$libraries['skrollr'] = array(
    'name' => t('skrollr'),
    'description' => t('Stand-alone "parallax scrolling" JavaScript library for mobile (Android, iOS, etc.) and desktop in just over "9.6k" (minified) or "4.5k" (minified + gzipped).'),
    'vendor' => 'skrollr',
    'vendor url' => 'ttp://travis-ci.org/Prinzhorn/skrollr',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'skrollr.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
	$libraries['touchswipe'] = array(
    'name' => t('touchSwipe'),
    'description' => t('jQuery Mobile Touch Swipe Plugin'),
    'vendor' => 'TouchSwipe',
    'vendor url' => 'https://github.com/mattbryson/TouchSwipe-Jquery-Plugin',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery.touchSwipe.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
  $libraries['debouncedresize'] = array(
    'name' => t('Debounced Resize Events for jQuery'),
    'description' => t('Debounced and Throttled Resize Events for jQuery http://louisremi.github.com/jquery-smartresize/demo/index.html'),
    'vendor' => 'Louis-Rémi Babé',
    'vendor url' => 'https://github.com/louisremi/jquery-smartresize',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery.debouncedresize.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
  $libraries['jquery-easing'] = array(
    'name' => t('jQuery Easing'),
    'description' => t('A jQuery plugin from GSGD to give advanced easing options.'),
    'vendor' => 'GSGD',
    'vendor url' => 'http://gsgd.co.uk/sandbox/jquery/easing/',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery-easing.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
  $libraries['jquery-waypoints'] = array(
    'name' => t('jQuery Waypoints'),
    'description' => t('Waypoints is a jQuery plugin that makes it easy to execute a function whenever you scroll to an element.'),
    'vendor' => 'Caleb Troughton',
    'vendor url' => 'https://github.com/imakewebthings/jquery-waypoints/',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'waypoints.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );

//	
//  $libraries['nicescroll'] = array(
//    'name' => t('Nice Scroll'),
//    'description' => t('Nicescroll is a jquery plugin, for nice scrollbars with a very similar ios/mobile style.'),
//    'vendor' => 'inuyaksa',
//    'vendor url' => ' http://areaaperta.com/nicescroll',
//    'package' => t('Acquia'),
//    'files' => array(
//      'js' => array(
//        'jquery.nicescroll.min.js' => array(
//          'weight' => 0,
//          'every_page' => TRUE,
//        ),
//      ),
//			'css' => array(
//				'/nicescroll.css' => array(
//          'weight' => 0,
//          'every_page' => TRUE,
//        ),
//      ),
//    ),
//  );

	$libraries['superfish'] = array(
    'name' => t('superfish'),
    'description' => t('Superfish is a jQuery plugin that adds usability enhancements to existing multi-level drop-down menus.'),
    'vendor' => 'Joel Birch',
    'vendor url' => 'http://users.tpg.com.au/j_birch/plugins/superfish/',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'src/js/superfish.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
				'src/js/hoverIntent.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
				'src/js/supersubs.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
				'src/js/supposition.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
  $libraries['modernizr'] = array(
    'name' => t('Modernizr'),
    'description' => t('Modernizr is a JavaScript library that detects HTML5 and CSS3 features in the user’s browser.'),
    'vendor' => 'http://modernizr.com/',
    'vendor url' => 'http://modernizr.com/',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'modernizr.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	  
	$libraries['mobilemenu'] = array(
    'name' => t('mobileMenu'),
    'description' => t('jQuery mobile menu is a jquery plugin for turn an unordered list menu into dropdown select menu.'),
    'vendor' => 'mambows',
    'vendor url' => 'https://github.com/mambows/mobilemenu',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery.mobilemenu.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
	$libraries['fitvids'] = array(
    'name' => t('FitVids'),
    'description' => t('A lightweight, easy-to-use jQuery plugin for fluid width video embeds.'),
    'vendor' => 'davatron5000',
    'vendor url' => 'https://github.com/davatron5000/FitVids.js',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery.fitvids.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );

	$libraries['imagesloaded'] = array(
    'name' => t('imagesLoaded'),
    'description' => t('Detect when images have been loaded.'),
    'vendor' => 'desandro',
    'vendor url' => 'https://github.com/desandro/imagesloaded',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'imagesloaded.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
	$libraries['equalheights'] = array(
    'name' => t('equalheights'),
    'description' => t('Simple jQuery plugin to equalize heights of multiple elements on a page.'),
    'vendor' => 'mattbanks',
    'vendor url' => 'https://github.com/mattbanks/jQuery.equalHeights',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'jquery.equalheights.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
	
	$libraries['pixastic'] = array(
    'name' => t('Pixastic'),
    'description' => t('a javaScript Image Processing Library.'),
    'vendor' => 'Jacob Seidelin',
    'vendor url' => 'http://www.pixastic.com/lib/',
    'package' => t('Acquia'),
    'files' => array(
      'js' => array(
        'pixastic.min.js' => array(
          'weight' => 0,
          'every_page' => TRUE,
        ),
      ),
    ),
  );
  return $libraries;
}