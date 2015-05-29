<?php

/**
 * @file
 * backend needed plugins defined here
 */

/**
 * implementing hook_library()
 * Only backend needed plugins defined here
 */
function ac_ubercart_library() {

	/** S2 - Middle Level Plugins **/
	$libs_path = acquia_variable_get('libs_path', 'sites/all/libraries');

	// tooltip.
  $libraries['easyzoom'] = array(
    'title' => 'easyzoom',
    'website' => 'http://i-like-robots.github.io/easyzoom/',
		'version' => '1.0',
    'js' => array(
      $libs_path . '/easyzoom/src/easyzoom.js' => array(),
    ),
    'css' => array(
      $libs_path . '/easyzoom/css/easyzoom.css' => array(),
    ),
  );

  return $libraries;
}
