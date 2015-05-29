<?php
/**
 * @file
 * aura_features.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function aura_features_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'ac_shortcode' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'ac_blog' => 1,
          'ac_portfolio' => 1,
          'ac_portfolio_tags' => 1,
          'ac_catalog_terms' => 1,
          'ac_shop' => 1,
          'ac_shop_tags' => 1,
          'ac_products_block' => 1,
          'content_slider' => 1,
          'elastic_slider' => 1,
          'flexslider' => 1,
          'layerslider' => 1,
          'rev_slider' => 1,
          'swipe_slider' => 1,
          'vc_accordion_tab' => 1,
          'vc_accordion' => 1,
          'ac_audio' => 1,
          'ac_banner' => 1,
          'ac_banner_item' => 1,
          'ac_button' => 1,
          'ac_callout' => 1,
          'ac_carousel' => 1,
          'ac_code' => 1,
          'vc_column' => 1,
          'vc_column_inner' => 1,
          'ac_contact' => 1,
          'ac_contact_info' => 1,
          'ac_counter' => 1,
          'ac_divider' => 1,
          'ac_flickr' => 1,
          'ac_frame' => 1,
          'ac_gmap' => 1,
          'ac_gmap_marker' => 1,
          'ac_grid' => 1,
          'ac_fancy_header' => 1,
          'ac_page_header' => 1,
          'ac_font_icon' => 1,
          'ac_iconbox' => 1,
          'ac_iconlist' => 1,
          'ac_iconlist_item' => 1,
          'ac_image' => 1,
          'ac_img_frame' => 1,
          'img_slider' => 1,
          'img_slider_item' => 1,
          'ac_list' => 1,
          'ac_list_item' => 1,
          'vc_message' => 1,
          'ac_highlight' => 1,
          'ac_dropcap' => 1,
          'ac_pie' => 1,
          'pt' => 1,
          'pt_col' => 1,
          'pt_row' => 1,
          'pt_price' => 1,
          'pt_package' => 1,
          'pt_details' => 1,
          'ac_progressbar_item' => 1,
          'ac_progressbar' => 1,
          'ac_quote' => 1,
          'ac_raw_html' => 1,
          'ac_raw_js' => 1,
          'vc_row' => 1,
          'vc_row_inner' => 1,
          'vc_text_separator' => 1,
          'ac_socials' => 1,
          'ac_social' => 1,
          'ac_stick' => 1,
          'ac_tabs' => 1,
          'ac_tab' => 1,
          'ac_team' => 1,
          'ac_testimonials' => 1,
          'ac_testimonial' => 1,
          'vc_column_text' => 1,
          'ac_tooltip' => 1,
          'ac_twitter' => 1,
          'ac_video' => 1,
          'ac_visibility' => 1,
        ),
      ),
      'ac_shortcode_text_corrector' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
