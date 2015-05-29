<?php
/**
 * @file
 * aura_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function aura_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_BASE_URL';
  $strongarm->value = 'http://lh/aura/sites/all/themes/aura/includes/acquia';
  $export['ACQUIA_BASE_URL'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_EXT_BASE_PATH';
  $strongarm->value = 'sites/all/themes/aura/includes';
  $export['ACQUIA_EXT_BASE_PATH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_FONTS_PATH';
  $strongarm->value = 'sites/all/libraries/fonts';
  $export['ACQUIA_FONTS_PATH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_LIBS_PATH';
  $strongarm->value = 'sites/all/libraries';
  $export['ACQUIA_LIBS_PATH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_M_INIT';
  $strongarm->value = TRUE;
  $export['ACQUIA_M_INIT'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_PUBLIC_PATH';
  $strongarm->value = 'acquia';
  $export['ACQUIA_PUBLIC_PATH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_TF_BASE_PATH';
  $strongarm->value = 'sites/all/themes/aura/includes/acquia';
  $export['ACQUIA_TF_BASE_PATH'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_THEME_NAME';
  $strongarm->value = 'aura';
  $export['ACQUIA_THEME_NAME'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_THEME_VERSION';
  $strongarm->value = '1.0.0';
  $export['ACQUIA_THEME_VERSION'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ACQUIA_T_INIT';
  $strongarm->value = TRUE;
  $export['ACQUIA_T_INIT'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_404_page_text';
  $strongarm->value = '[vc_row padding="zero"][vc_column width="1/1" first="true" last="true" odd="true"][vc_message title="Note" type="silver" border="none" size="large" animate="ac_appear" when="visible" icon="59547" font="fontello"]The Page You Are Looking For Is No Longer Here. You Can Try Searching For What You Are Looking For ...[/vc_message][ac_page_header tag="h4" align="left" margin="small"]from our blog[/ac_page_header][ac_blog id="blog-items-5331e549cdc67" appearance="circled" total="4" num_per_page="4" spaced="true" padding="20" cols="2" frame="none" width="equal" style="square-thumb" effect="none" media="true" title="true" date="true" date_format="M j, Y" sorting="false" fullwidth="false" author="false" tags="false" excerpt="false"][/ac_blog][/vc_column][/vc_row]';
  $export['ac_404_page_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_404_page_title';
  $strongarm->value = '404 - Page Not Found';
  $export['ac_404_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_branding_logo_linked';
  $strongarm->value = TRUE;
  $export['ac_blocks_branding_logo_linked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_branding_logo_render';
  $strongarm->value = TRUE;
  $export['ac_blocks_branding_logo_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_branding_site_name_hidden';
  $strongarm->value = FALSE;
  $export['ac_blocks_branding_site_name_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_branding_site_name_linked';
  $strongarm->value = TRUE;
  $export['ac_blocks_branding_site_name_linked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_branding_site_slogan_hidden';
  $strongarm->value = FALSE;
  $export['ac_blocks_branding_site_slogan_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_breadcrumb_current';
  $strongarm->value = TRUE;
  $export['ac_blocks_breadcrumb_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_breadcrumb_title_hidden';
  $strongarm->value = TRUE;
  $export['ac_blocks_breadcrumb_title_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_logo_linked';
  $strongarm->value = TRUE;
  $export['ac_blocks_logo_linked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_page_title_hidden';
  $strongarm->value = FALSE;
  $export['ac_blocks_page_title_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_recent_posts_nums';
  $strongarm->value = '6';
  $export['ac_blocks_recent_posts_nums'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_site_name_hidden';
  $strongarm->value = FALSE;
  $export['ac_blocks_site_name_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_site_name_linked';
  $strongarm->value = TRUE;
  $export['ac_blocks_site_name_linked'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_site_slogan_hidden';
  $strongarm->value = FALSE;
  $export['ac_blocks_site_slogan_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blocks_toggle';
  $strongarm->value = array(
    'page-title' => 'page-title',
    'header-search' => 'header-search',
    'breadcrumb' => 'breadcrumb',
    'recent-posts' => 'recent-posts',
    'recent-tweets' => 'recent-tweets',
    'logo' => 0,
    'site-name' => 0,
    'site-slogan' => 0,
    'branding' => 0,
    'tabs' => 0,
    'messages' => 0,
    'action-links' => 0,
    'feed-icons' => 0,
  );
  $export['ac_blocks_toggle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blog_about_author';
  $strongarm->value = 0;
  $export['ac_blog_about_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blog_default_context';
  $strongarm->value = 'second-sidebar';
  $export['ac_blog_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blog_image_frame';
  $strongarm->value = 'none';
  $export['ac_blog_image_frame'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blog_preview_style';
  $strongarm->value = 'node-default';
  $export['ac_blog_preview_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blog_share_links';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'gplus' => 'gplus',
    'email' => 'email',
    'dribbble' => 0,
    'youtube' => 0,
    'rss' => 0,
    'delicious' => 0,
    'flickr' => 0,
    'forrst' => 0,
    'lastfm' => 0,
    'linkedin' => 0,
    'vimeo' => 0,
    'tumblr' => 0,
    'pinterest' => 0,
    'deviantart' => 0,
    'skype' => 0,
    'stumbleupon' => 0,
    'behance' => 0,
    'github-circled' => 0,
    'instagram' => 0,
    'link' => 0,
    'dropbox' => 0,
    'stackoverflow' => 0,
  );
  $export['ac_blog_share_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_blog_thumb_style';
  $strongarm->value = '';
  $export['ac_blog_thumb_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_default_skin';
  $strongarm->value = 'minimal-blue';
  $export['ac_default_skin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_empty_thumb_fid';
  $strongarm->value = '329';
  $export['ac_empty_thumb_fid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_default_context';
  $strongarm->value = 'no-sidebars';
  $export['ac_portfolio_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_effect';
  $strongarm->value = 'sw_default';
  $export['ac_portfolio_effect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_enabled_share_links';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'gplus' => 'gplus',
    'pinterest' => 'pinterest',
    'email' => 'email',
    'dribbble' => 0,
    'youtube' => 0,
    'rss' => 0,
    'delicious' => 0,
    'flickr' => 0,
    'forrst' => 0,
    'lastfm' => 0,
    'linkedin' => 0,
    'vimeo' => 0,
    'tumblr' => 0,
    'deviantart' => 0,
    'skype' => 0,
    'stumbleupon' => 0,
    'behance' => 0,
    'github-circled' => 0,
    'instagram' => 0,
    'link' => 0,
    'dropbox' => 0,
    'stackoverflow' => 0,
  );
  $export['ac_portfolio_enabled_share_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_frame_style';
  $strongarm->value = 'sw_default';
  $export['ac_portfolio_frame_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_gallery_style';
  $strongarm->value = 'rectangle-v-large';
  $export['ac_portfolio_gallery_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_image_effect';
  $strongarm->value = 'blur';
  $export['ac_portfolio_image_effect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_image_frame';
  $strongarm->value = 'none';
  $export['ac_portfolio_image_frame'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_link_title';
  $strongarm->value = 'view project';
  $export['ac_portfolio_link_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_list_style';
  $strongarm->value = '';
  $export['ac_portfolio_list_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_nav_index';
  $strongarm->value = 'portfolio/4-columns';
  $export['ac_portfolio_nav_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_block_title';
  $strongarm->value = 'recent works';
  $export['ac_portfolio_recent_block_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_cols';
  $strongarm->value = '4';
  $export['ac_portfolio_recent_cols'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_date';
  $strongarm->value = 0;
  $export['ac_portfolio_recent_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_date_format';
  $strongarm->value = 'M j, Y';
  $export['ac_portfolio_recent_date_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_details_link';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_details_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_excerpt';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_excerpt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_media';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_no_date';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_no_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_no_detail';
  $strongarm->value = 0;
  $export['ac_portfolio_recent_no_detail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_no_proj';
  $strongarm->value = 0;
  $export['ac_portfolio_recent_no_proj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_no_tags';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_no_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_nums';
  $strongarm->value = '20';
  $export['ac_portfolio_recent_nums'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_proj_link';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_proj_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_rollover';
  $strongarm->value = 'slideInBottom';
  $export['ac_portfolio_recent_rollover'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_spaced';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_spaced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_style';
  $strongarm->value = 'rectangle-large';
  $export['ac_portfolio_recent_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_subtitle';
  $strongarm->value = 0;
  $export['ac_portfolio_recent_subtitle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_tags';
  $strongarm->value = 0;
  $export['ac_portfolio_recent_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_title';
  $strongarm->value = 1;
  $export['ac_portfolio_recent_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_view';
  $strongarm->value = 'simple-sep';
  $export['ac_portfolio_recent_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_recent_visible';
  $strongarm->value = '5';
  $export['ac_portfolio_recent_visible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_block_title';
  $strongarm->value = 'related works';
  $export['ac_portfolio_related_block_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_cols';
  $strongarm->value = '4';
  $export['ac_portfolio_related_cols'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_columns';
  $strongarm->value = '5';
  $export['ac_portfolio_related_columns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_date';
  $strongarm->value = 0;
  $export['ac_portfolio_related_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_date_format';
  $strongarm->value = 'M j, Y';
  $export['ac_portfolio_related_date_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_details_link';
  $strongarm->value = 1;
  $export['ac_portfolio_related_details_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_effect';
  $strongarm->value = 'none';
  $export['ac_portfolio_related_effect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_excerpt';
  $strongarm->value = 0;
  $export['ac_portfolio_related_excerpt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_frame';
  $strongarm->value = 'dropshadow';
  $export['ac_portfolio_related_frame'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_fullwidth';
  $strongarm->value = 0;
  $export['ac_portfolio_related_fullwidth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_media';
  $strongarm->value = 1;
  $export['ac_portfolio_related_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_nav_pager';
  $strongarm->value = 0;
  $export['ac_portfolio_related_nav_pager'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_nav_prev_next';
  $strongarm->value = 1;
  $export['ac_portfolio_related_nav_prev_next'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_no_date';
  $strongarm->value = 0;
  $export['ac_portfolio_related_no_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_no_detail';
  $strongarm->value = 0;
  $export['ac_portfolio_related_no_detail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_no_proj';
  $strongarm->value = 0;
  $export['ac_portfolio_related_no_proj'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_no_tags';
  $strongarm->value = 0;
  $export['ac_portfolio_related_no_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_nums';
  $strongarm->value = '8';
  $export['ac_portfolio_related_nums'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_padding';
  $strongarm->value = '20';
  $export['ac_portfolio_related_padding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_proj_link';
  $strongarm->value = 1;
  $export['ac_portfolio_related_proj_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_spaced';
  $strongarm->value = 1;
  $export['ac_portfolio_related_spaced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_style';
  $strongarm->value = 'rectangle-large';
  $export['ac_portfolio_related_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_subtitle';
  $strongarm->value = 0;
  $export['ac_portfolio_related_subtitle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_tags';
  $strongarm->value = 0;
  $export['ac_portfolio_related_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_title';
  $strongarm->value = 1;
  $export['ac_portfolio_related_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_view';
  $strongarm->value = 'simple-sep';
  $export['ac_portfolio_related_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_related_visible';
  $strongarm->value = '4';
  $export['ac_portfolio_related_visible'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_slider_style';
  $strongarm->value = 'node-default';
  $export['ac_portfolio_slider_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_slideshow_style';
  $strongarm->value = '';
  $export['ac_portfolio_slideshow_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_taxonomy_mn';
  $strongarm->value = 'portfolio';
  $export['ac_portfolio_taxonomy_mn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_portfolio_thumb_style';
  $strongarm->value = 'square-large';
  $export['ac_portfolio_thumb_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_product_default_context';
  $strongarm->value = 'first-sidebar';
  $export['ac_product_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_recent_posts_nums';
  $strongarm->value = '6';
  $export['ac_recent_posts_nums'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_author';
  $strongarm->value = 0;
  $export['ac_related_news_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_cols';
  $strongarm->value = '3';
  $export['ac_related_news_cols'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_date';
  $strongarm->value = 1;
  $export['ac_related_news_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_media';
  $strongarm->value = 1;
  $export['ac_related_news_media'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_nums';
  $strongarm->value = '6';
  $export['ac_related_news_nums'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_padding';
  $strongarm->value = '20';
  $export['ac_related_news_padding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_spaced';
  $strongarm->value = 1;
  $export['ac_related_news_spaced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_style';
  $strongarm->value = 'square-medium';
  $export['ac_related_news_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_tags';
  $strongarm->value = 1;
  $export['ac_related_news_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_title';
  $strongarm->value = 1;
  $export['ac_related_news_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_related_news_view';
  $strongarm->value = 'circled';
  $export['ac_related_news_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_skin_generator';
  $strongarm->value = array(
    'name' => 'Inspiration',
    'description' => 'light blue',
    'version' => '1.x.0',
    'author' => 'Acquaithemes',
    'screenshot' => array(
      'fid' => '0',
    ),
    'submit' => 'Generate skin',
  );
  $export['ac_skin_generator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_store_vtabas__active_tab';
  $strongarm->value = 'edit-catalog-products';
  $export['ac_store_vtabas__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_node_article_default_context';
  $strongarm->value = 'second-sidebar';
  $export['ac_styles_node_article_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_node_blog_default_context';
  $strongarm->value = 'first-sidebar';
  $export['ac_styles_node_blog_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_node_forum_default_context';
  $strongarm->value = 'second-sidebar';
  $export['ac_styles_node_forum_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_node_page_default_context';
  $strongarm->value = 'second-sidebar';
  $export['ac_styles_node_page_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_node_portfolio_default_context';
  $strongarm->value = 'second-sidebar';
  $export['ac_styles_node_portfolio_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_node_product_default_context';
  $strongarm->value = 'first-sidebar';
  $export['ac_styles_node_product_default_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_styles_vtabas__active_tab';
  $strongarm->value = 'edit-general';
  $export['ac_styles_vtabas__active_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_theme_presets';
  $strongarm->value = 'sites/all/themes/aura/includes/acquia/presets';
  $export['ac_theme_presets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_theme_skins_dir';
  $strongarm->value = 'sites/all/themes/aura/includes/acquia/presets/skins';
  $export['ac_theme_skins_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_tweetkey';
  $strongarm->value = '@envato';
  $export['ac_tweetkey'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_tweet_num_items';
  $strongarm->value = '6';
  $export['ac_tweet_num_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_cart_image_thumb_style';
  $strongarm->value = 'square-thumb';
  $export['ac_ubercart_cart_image_thumb_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_products_2_cols_style';
  $strongarm->value = 'rectangle-v-large';
  $export['ac_ubercart_catalog_products_2_cols_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_products_cols';
  $strongarm->value = '3';
  $export['ac_ubercart_catalog_products_cols'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_products_padding';
  $strongarm->value = '20px';
  $export['ac_ubercart_catalog_products_padding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_products_spaced';
  $strongarm->value = 1;
  $export['ac_ubercart_catalog_products_spaced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_products_style';
  $strongarm->value = 'rectangle-v-medium';
  $export['ac_ubercart_catalog_products_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_terms_cols';
  $strongarm->value = '4';
  $export['ac_ubercart_catalog_terms_cols'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_terms_padding';
  $strongarm->value = '20px';
  $export['ac_ubercart_catalog_terms_padding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_terms_spaced';
  $strongarm->value = 1;
  $export['ac_ubercart_catalog_terms_spaced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_catalog_terms_url';
  $strongarm->value = 'catalog';
  $export['ac_ubercart_catalog_terms_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_product_carousel_lightbox_style';
  $strongarm->value = '';
  $export['ac_ubercart_product_carousel_lightbox_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_product_carousel_popup_style';
  $strongarm->value = '';
  $export['ac_ubercart_product_carousel_popup_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_product_carousel_preview_style';
  $strongarm->value = 'rectangle-v-large';
  $export['ac_ubercart_product_carousel_preview_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_product_carousel_thumb_style';
  $strongarm->value = 'rectangle-v-medium';
  $export['ac_ubercart_product_carousel_thumb_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_product_full_style';
  $strongarm->value = '';
  $export['ac_ubercart_product_full_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_related_products_cols';
  $strongarm->value = '4';
  $export['ac_ubercart_related_products_cols'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_related_products_padding';
  $strongarm->value = '20px';
  $export['ac_ubercart_related_products_padding'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_related_products_spaced';
  $strongarm->value = 1;
  $export['ac_ubercart_related_products_spaced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ac_ubercart_share_links';
  $strongarm->value = array(
    'facebook' => 'facebook',
    'twitter' => 'twitter',
    'gplus' => 'gplus',
    'pinterest' => 'pinterest',
    'email' => 'email',
    'dribbble' => 0,
    'youtube' => 0,
    'rss' => 0,
    'delicious' => 0,
    'flickr' => 0,
    'forrst' => 0,
    'lastfm' => 0,
    'linkedin' => 0,
    'vimeo' => 0,
    'tumblr' => 0,
    'deviantart' => 0,
    'skype' => 0,
    'stumbleupon' => 0,
    'behance' => 0,
    'github-circled' => 0,
    'instagram' => 0,
    'link' => 0,
    'dropbox' => 0,
    'stackoverflow' => 0,
  );
  $export['ac_ubercart_share_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_article';
  $strongarm->value = 'edit-context';
  $export['additional_settings__active_tab_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_page';
  $strongarm->value = 'edit-context';
  $export['additional_settings__active_tab_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_product_image_field_attribute';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_product_image_field_attribute'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_teammate';
  $strongarm->value = 'edit-context';
  $export['additional_settings__active_tab_teammate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_testimonial';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_testimonial'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'address';
  $strongarm->value = array(
    'uc_store_street1' => '',
    'uc_store_street2' => '',
    'uc_store_city' => '',
    'uc_store_zone' => 0,
    'uc_store_country' => 840,
    'uc_store_postal_code' => '',
  );
  $export['address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product';
  $strongarm->value = '';
  $export['uc_image_product'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_shippable_product';
  $strongarm->value = 1;
  $export['uc_product_shippable_product'] = $strongarm;

  return $export;
}
