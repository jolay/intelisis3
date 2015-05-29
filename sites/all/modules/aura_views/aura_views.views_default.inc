<?php
/**
 * @file
 * aura_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aura_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ac_ubercart_product_by_category';
  $view->description = 'Catalog categories';
  $view->tag = '';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'ac_ubercart_product_by_category';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['css_class'] = 'uc-catalog-terms';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_uc_catalog_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'uc_catalog_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['alter']['path'] = 'catalog/[tid]';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['entity_id']['delta_limit'] = '1';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'catalog/[tid]';
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    49 => '49',
  );
  $export['ac_ubercart_product_by_category'] = $view;

  $view = new view();
  $view->name = 'ac_ubercart_product_category';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ac_ubercart_product_category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image']['element_class'] = 'front-image';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image_1']['id'] = 'uc_product_image_1';
  $handler->display->display_options['fields']['uc_product_image_1']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image_1']['element_class'] = 'back-image';
  $handler->display->display_options['fields']['uc_product_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image_1']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['type'] = 'text_plain';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['display_price']['separator'] = '';
  $handler->display->display_options['fields']['display_price']['format'] = 'numeric';
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['label'] = '';
  $handler->display->display_options['fields']['buyitnowbutton']['element_type'] = '0';
  $handler->display->display_options['fields']['buyitnowbutton']['element_label_type'] = '0';
  $handler->display->display_options['fields']['buyitnowbutton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['buyitnowbutton']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['buyitnowbutton']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating_1']['id'] = 'field_rating_1';
  $handler->display->display_options['fields']['field_rating_1']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating_1']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_rating_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating_1']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_rating_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton_1']['id'] = 'buyitnowbutton_1';
  $handler->display->display_options['fields']['buyitnowbutton_1']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton_1']['field'] = 'buyitnowbutton';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'catalog' => 'catalog',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $export['ac_ubercart_product_category'] = $view;

  $view = new view();
  $view->name = 'product_blocks';
  $view->description = 'Best Sellers';
  $view->tag = 'Best Sellers';
  $view->base_table = 'node';
  $view->human_name = 'product blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'product-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_class'] = 's-title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['type'] = 'text_plain';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Filter criterion: Node: Is a product */
  $handler->display->display_options['filters']['is_product']['id'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['table'] = 'uc_products';
  $handler->display->display_options['filters']['is_product']['field'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['value'] = '1';

  /* Display: top rated products */
  $handler = $view->new_display('block', 'top rated products', 'top_rated_products');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Top rated products';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'new-product-block';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['required'] = TRUE;
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'vote',
    'function' => 'average',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'product-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_class'] = 's-title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['type'] = 'text_plain';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field: rating (field_rating:rating) */
  $handler->display->display_options['sorts']['field_rating_rating']['id'] = 'field_rating_rating';
  $handler->display->display_options['sorts']['field_rating_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['sorts']['field_rating_rating']['field'] = 'field_rating_rating';
  $handler->display->display_options['sorts']['field_rating_rating']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node: Is a product */
  $handler->display->display_options['filters']['is_product']['id'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['table'] = 'uc_products';
  $handler->display->display_options['filters']['is_product']['field'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['value'] = '1';
  $handler->display->display_options['block_description'] = 'top rated products';

  /* Display: recent reviews */
  $handler = $view->new_display('block', 'recent reviews', 'recent_reviews');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent reviews';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'recent-reviews';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'product-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_class'] = 's-title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: Last comment author */
  $handler->display->display_options['fields']['last_comment_name']['id'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_name']['field'] = 'last_comment_name';
  $handler->display->display_options['fields']['last_comment_name']['label'] = '';
  $handler->display->display_options['fields']['last_comment_name']['element_type'] = '0';
  $handler->display->display_options['fields']['last_comment_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['last_comment_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last comment time */
  $handler->display->display_options['sorts']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['sorts']['last_comment_timestamp']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node: Is a product */
  $handler->display->display_options['filters']['is_product']['id'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['table'] = 'uc_products';
  $handler->display->display_options['filters']['is_product']['field'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['value'] = '1';
  /* Filter criterion: Content: Comment count */
  $handler->display->display_options['filters']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['filters']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['filters']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['filters']['comment_count']['operator'] = '!=';
  $handler->display->display_options['filters']['comment_count']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'recent reviews';

  /* Display: sale products */
  $handler = $view->new_display('block', 'sale products', 'sale_products');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'sale products';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'sale-products';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Node: Is a product */
  $handler->display->display_options['filters']['is_product']['id'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['table'] = 'uc_products';
  $handler->display->display_options['filters']['is_product']['field'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['value'] = '1';
  /* Filter criterion: Content: old price (field_old_price) */
  $handler->display->display_options['filters']['field_old_price_value']['id'] = 'field_old_price_value';
  $handler->display->display_options['filters']['field_old_price_value']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['filters']['field_old_price_value']['field'] = 'field_old_price_value';
  $handler->display->display_options['filters']['field_old_price_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'sale products';
  $export['product_blocks'] = $view;

  $view = new view();
  $view->name = 'products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_catalog' => 'field_catalog',
    'display_price' => 'display_price',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_catalog' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'display_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Add new <a href = "/node/add/product?destination=admin/config/cms/products">Product</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Catalog */
  $handler->display->display_options['fields']['field_catalog']['id'] = 'field_catalog';
  $handler->display->display_options['fields']['field_catalog']['table'] = 'field_data_taxonomy_catalog';
  $handler->display->display_options['fields']['field_catalog']['field'] = 'taxonomy_catalog';
  $handler->display->display_options['fields']['field_catalog']['delta_offset'] = '0';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['path'] = 'admin/acquia/products';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Related Products */
  $handler = $view->new_display('block', 'Related Products', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Products';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'catalog' => 'catalog',
    'category' => 0,
    'tags' => 0,
  );
  /* Relationship: Taxonomy term: Content using Catalog */
  $handler->display->display_options['relationships']['reverse_taxonomy_catalog_node']['id'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_catalog_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_taxonomy_catalog_node']['field'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['relationships']['reverse_taxonomy_catalog_node']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image']['element_class'] = 'front-image';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image_1']['id'] = 'uc_product_image_1';
  $handler->display->display_options['fields']['uc_product_image_1']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['uc_product_image_1']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image_1']['element_class'] = 'back-image';
  $handler->display->display_options['fields']['uc_product_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image_1']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['type'] = 'text_plain';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['display_price']['separator'] = '';
  $handler->display->display_options['fields']['display_price']['format'] = 'numeric';
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['label'] = '';
  $handler->display->display_options['fields']['buyitnowbutton']['element_label_colon'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating_1']['id'] = 'field_rating_1';
  $handler->display->display_options['fields']['field_rating_1']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating_1']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating_1']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['field_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_rating_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating_1']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_rating_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['arguments']['nid_1']['table'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid_1']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['arguments']['nid_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid_1']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid_1']['not'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: shop */
  $handler = $view->new_display('page', 'shop', 'ac_ubercart_shop');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Products';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => '',
    'function' => 'average',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image']['element_class'] = 'front-image';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image_1']['id'] = 'uc_product_image_1';
  $handler->display->display_options['fields']['uc_product_image_1']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['uc_product_image_1']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image_1']['element_class'] = 'back-image';
  $handler->display->display_options['fields']['uc_product_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image_1']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['type'] = 'text_plain';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['display_price']['separator'] = '';
  $handler->display->display_options['fields']['display_price']['format'] = 'numeric';
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['label'] = '';
  $handler->display->display_options['fields']['buyitnowbutton']['element_label_colon'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating_1']['id'] = 'field_rating_1';
  $handler->display->display_options['fields']['field_rating_1']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating_1']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating_1']['relationship'] = 'reverse_taxonomy_catalog_node';
  $handler->display->display_options['fields']['field_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_rating_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating_1']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_rating_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Latest arrivals';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  $handler->display->display_options['path'] = 'shop';
  $export['products'] = $view;

  $view = new view();
  $view->name = 'products_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Products - Taxonomy term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image']['element_class'] = 'front-image';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image_1']['id'] = 'uc_product_image_1';
  $handler->display->display_options['fields']['uc_product_image_1']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['uc_product_image_1']['element_class'] = 'back-image';
  $handler->display->display_options['fields']['uc_product_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image_1']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['label'] = '';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_old_price']['type'] = 'text_plain';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['display_price']['separator'] = '';
  $handler->display->display_options['fields']['display_price']['format'] = 'numeric';
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['label'] = '';
  $handler->display->display_options['fields']['buyitnowbutton']['element_type'] = '0';
  $handler->display->display_options['fields']['buyitnowbutton']['element_label_type'] = '0';
  $handler->display->display_options['fields']['buyitnowbutton']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['buyitnowbutton']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['buyitnowbutton']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating_1']['id'] = 'field_rating_1';
  $handler->display->display_options['fields']['field_rating_1']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating_1']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_rating_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating_1']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_rating_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton_1']['id'] = 'buyitnowbutton_1';
  $handler->display->display_options['fields']['buyitnowbutton_1']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton_1']['field'] = 'buyitnowbutton';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'products/tag/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'products/tag/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['products_taxonomy_term'] = $view;

  $view = new view();
  $view->name = 'uc_catalog';
  $view->description = 'Catalog';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Catalog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => '',
    'function' => 'average',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['entity_id']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'uc_product_list',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id']['delta_limit'] = '1';
  /* Field: Product: SKU */
  $handler->display->display_options['fields']['model']['id'] = 'model';
  $handler->display->display_options['fields']['model']['table'] = 'uc_products';
  $handler->display->display_options['fields']['model']['field'] = 'model';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Has new content */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'history';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['label'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Latest arrivals';
  /* Sort criterion: Product: Sell price */
  $handler->display->display_options['sorts']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['sorts']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sell_price']['expose']['label'] = 'Price low to high';
  /* Sort criterion: Product: Sell price */
  $handler->display->display_options['sorts']['sell_price_1']['id'] = 'sell_price_1';
  $handler->display->display_options['sorts']['sell_price_1']['table'] = 'uc_products';
  $handler->display->display_options['sorts']['sell_price_1']['field'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['sell_price_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sell_price_1']['expose']['label'] = 'Price High to Low';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['breadcrumb'] = 'Catalog';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'catalog' => 'catalog',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '10';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Node: Is a product */
  $handler->display->display_options['filters']['is_product']['id'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['table'] = 'uc_products';
  $handler->display->display_options['filters']['is_product']['field'] = 'is_product';
  $handler->display->display_options['filters']['is_product']['value'] = '1';
  
  /* Display: Grid */
  $handler = $view->new_display('page', 'Grid', 'catalog_grid');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'uc-catalog';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image']['id'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uc_product_image']['alter']['text'] = '[uc_product_image-fid]';
  $handler->display->display_options['fields']['uc_product_image']['element_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['uc_product_image']['separator'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['uc_product_image_1']['id'] = 'uc_product_image_1';
  $handler->display->display_options['fields']['uc_product_image_1']['table'] = 'field_data_uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['field'] = 'uc_product_image';
  $handler->display->display_options['fields']['uc_product_image_1']['label'] = '';
  $handler->display->display_options['fields']['uc_product_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uc_product_image_1']['alter']['text'] = '[uc_product_image_1-fid]';
  $handler->display->display_options['fields']['uc_product_image_1']['element_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['uc_product_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['uc_product_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['uc_product_image_1']['settings'] = array(
    'image_style' => 'rectangle-v-large',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['uc_product_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['uc_product_image_1']['separator'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['label'] = '';
  $handler->display->display_options['fields']['field_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Content: old price */
  $handler->display->display_options['fields']['field_old_price']['id'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['table'] = 'field_data_field_old_price';
  $handler->display->display_options['fields']['field_old_price']['field'] = 'field_old_price';
  $handler->display->display_options['fields']['field_old_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_old_price']['element_default_classes'] = FALSE;
  /* Field: Product: Display price */
  $handler->display->display_options['fields']['display_price']['id'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['table'] = 'uc_products';
  $handler->display->display_options['fields']['display_price']['field'] = 'display_price';
  $handler->display->display_options['fields']['display_price']['label'] = '';
  $handler->display->display_options['fields']['display_price']['element_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['display_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['display_price']['separator'] = '';
  $handler->display->display_options['fields']['display_price']['format'] = 'numeric';
  /* Field: Product: Buy it now button */
  $handler->display->display_options['fields']['buyitnowbutton']['id'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['table'] = 'uc_products';
  $handler->display->display_options['fields']['buyitnowbutton']['field'] = 'buyitnowbutton';
  $handler->display->display_options['fields']['buyitnowbutton']['label'] = '';
  /* Field: Field: rating */
  $handler->display->display_options['fields']['field_rating_1']['id'] = 'field_rating_1';
  $handler->display->display_options['fields']['field_rating_1']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating_1']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating_1']['label'] = '';
  $handler->display->display_options['fields']['field_rating_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rating_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rating_1']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating_1']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_rating_1']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Latest arrivals';
  /* Sort criterion: Product: Sell price */
  $handler->display->display_options['sorts']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['sorts']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sell_price']['expose']['label'] = 'Price low to high';
  /* Sort criterion: Product: Sell price */
  $handler->display->display_options['sorts']['sell_price_1']['id'] = 'sell_price_1';
  $handler->display->display_options['sorts']['sell_price_1']['table'] = 'uc_products';
  $handler->display->display_options['sorts']['sell_price_1']['field'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price_1']['order'] = 'DESC';
  $handler->display->display_options['sorts']['sell_price_1']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['sell_price_1']['expose']['label'] = 'Price High to Low';
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  $handler->display->display_options['sorts']['totalcount']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['totalcount']['expose']['label'] = 'Popularity';
  /* Sort criterion: Vote results: Value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['value']['expose']['label'] = 'Top Rated';
  $handler->display->display_options['sorts']['value']['coalesce'] = 0;
  $handler->display->display_options['path'] = '_catalog_grid';
  
  $export['uc_catalog'] = $view;

  return $export;
}
