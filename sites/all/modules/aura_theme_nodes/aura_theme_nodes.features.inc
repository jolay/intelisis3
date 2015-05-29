<?php
/**
 * @file
 * aura_theme_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function aura_theme_nodes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
