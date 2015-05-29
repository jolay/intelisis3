<?php
/**
 * @file
 * aura_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function aura_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-topbar-menu.
  $menus['menu-topbar-menu'] = array(
    'menu_name' => 'menu-topbar-menu',
    'title' => 'topbar menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('topbar menu');


  return $menus;
}
