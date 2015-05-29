<?php
/**
 * @file
 * aura_theme_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function aura_theme_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ac_blocks-breadcrumb'] = array(
    'ac_block_settings' => NULL,
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'module' => 'ac_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ac_blocks-header-search'] = array(
    'ac_block_settings' => NULL,
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'header-search',
    'module' => 'ac_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -45,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -45,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ac_blocks-page-title'] = array(
    'ac_block_settings' => NULL,
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'ac_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ac_blocks-recent-tweets'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:0;}',
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent-tweets',
    'module' => 'ac_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ac_blog-related-news'] = array(
    'ac_block_settings' => 'a:1:{s:9:"css_class";s:0:"";}',
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'related-news',
    'module' => 'ac_blog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'node_bottom',
        'status' => 1,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => 'related posts',
    'visibility' => 0,
  );

  $export['ac_portfolio_blocks-portfolio-tags'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:0;}',
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'portfolio-tags',
    'module' => 'ac_portfolio_blocks',
    'node_types' => array(),
    'pages' => 'features/side-menu/*
shortcodes/*',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -41,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -41,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ac_portfolio_blocks-related-portfolio'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:0;}',
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'related-portfolio',
    'module' => 'ac_portfolio_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'node_bottom',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -21,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ac_ubercart-ac_cart'] = array(
    'ac_block_settings' => NULL,
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ac_cart',
    'module' => 'ac_ubercart',
    'node_types' => array(),
    'pages' => 'admin*',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -46,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -46,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blog-recent'] = array(
    'ac_block_settings' => NULL,
    'cache' => 1,
    'css_class' => 'ac-one-fourth column first',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-sub-footer-menu'] = array(
    'ac_block_settings' => 'a:4:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:1;s:16:"ac_dropdown_menu";i:0;s:10:"menu_style";s:16:"ac-simple-menu-h";}',
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-sub-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'sub_footer',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -22,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-topbar-menu'] = array(
    'ac_block_settings' => 'a:5:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:1;s:16:"ac_dropdown_menu";i:0;s:12:"ac_superfish";i:1;s:10:"menu_style";s:17:"ac-menu ac-menu-h";}',
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-topbar-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'topbar',
        'status' => 1,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:0;}',
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => 'features/side-menu/*
shortcodes/*',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -44,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'omega' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -44,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -9,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'ac_block_settings' => NULL,
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -47,
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -47,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'ac_block_settings' => 'a:1:{s:9:"css_class";s:0:"";}',
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -47,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -47,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['tagclouds-1'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:0;}',
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'tagclouds',
    'node_types' => array(),
    'pages' => 'shortcodes/*
features/side-menu/*',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -40,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -40,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => 'Blog tags',
    'visibility' => 0,
  );

  $export['uc_catalog-catalog'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:0:"";s:16:"hide_block_title";i:0;}',
    'cache' => 5,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'catalog',
    'module' => 'uc_catalog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'aura',
        'weight' => -46,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => -46,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => 'Browse',
    'visibility' => 0,
  );

  $export['views-931aacbd952a974c24e2fd27e2bc0cb7'] = array(
    'ac_block_settings' => NULL,
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '931aacbd952a974c24e2fd27e2bc0cb7',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-products-block'] = array(
    'ac_block_settings' => 'a:2:{s:9:"css_class";s:21:"ac-bottom-bar-section";s:16:"hide_block_title";i:0;}',
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'products-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'aura' => array(
        'region' => 'node_bottom',
        'status' => 1,
        'theme' => 'aura',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => 'branding',
        'status' => 1,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stark' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stark',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
