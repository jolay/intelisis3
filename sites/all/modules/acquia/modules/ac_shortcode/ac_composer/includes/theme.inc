<?php
/**
 * @file
 *  Contains helper functions to build and override theme functions
 */
 
 /**
 * Theme function for wrapping the template as needed for Backbone.View.render.
 *
 * By default, Drupal.Backbone.View uses Underscore templating and the
 * element's DOM ID to extract the template source.
 *
 * @param Array $variables
 *   Variables array containing the id and source for the template.
 *
 *   Note: all template sources provided by modules should be provided by theme
 *   functions as well, so they can be overridden at the theme level as desired.
 *
 * @return String
 *   The HTML for the wrapped template.
 */
function theme_backbone_template($variables = array()) {
  $template_id = $variables['template']['#template_id'];
  $template_source = $variables['template']['#template_source'];

  return <<<TEMPLATE
<script id="{$template_id}" type="text/underscore-template">
{$template_source}
</script>
TEMPLATE;
}

/**
 * Theme function for wrapping bootstrap modal templates for VC.
 */
function theme_wpb_bootstrap_modals($vars = array()){
 	// Include required libs
	acquia_include('interface', 'ac_visual_composer');
  
  $shortcodes = isset($vars['shortcodes']) ? $vars['shortcodes'] : array();
  
  $out = '<div class="wpb_bootstrap_modals">';
  
  $out .= theme('backbone_template', array(
    'template' => array(
       '#template_id' => 'wpb-elements-list-modal-template',
       '#template_source' => theme('wpb_elements_list_modal_template', array(
         'contentCategoriesLayouts' => ac_vc_getContentCategoriesLayouts($shortcodes),
         'contentLayouts' => ac_vc_getContentLayouts($shortcodes),
        )),
    ),

  ));
  
  $out .= theme('backbone_template', array(
    'template' => array(
       '#template_id' => 'wpb-element-settings-modal-template',
       '#template_source' => theme('wpb_element_settings_modal_template'),
    ),
  ));

  $out .= '</div>';

  return $out;
}

/**
 * Theme function for the main navbar of VC 
 */
function theme_wpb_vc_nav_bar($vars = array()) {
	$buttons = theme('wpb_vc_');
  $title = t('Visual Composer for WordPress');
  $update = t('Update');
	return <<<TEMPLATE
			<div id="wpb_visual_composer-elements" class="vc_navbar">
					<input type="hidden" name="wpb_js_composer_group_access_show_rule" class="wpb_js_composer_group_access_show_rule" />
					<div class="vc_navbar-inner clearfix">
							<!--<div class="container">-->
									<ul class="vc_nav">
										<li>
											<a title="{$title}" href="http://vc.wpbakery.com/" class="vc_logo" target="_blank"></a>
										</li>
									</ul>
									'.$buttons.'
											<ul class="vc_nav pull-right wpb-update-button">
													<li><a class="button" id="wpb-save-post">{$update}</a></li>
											</ul>
							<!--</div>-->
					</div>
			</div>
TEMPLATE;
}

function theme_composer_swith_btn(){
 return '<a class="wpb_switch-to-composer button-primary" href="#">'. t('Visual Composer') .'</a>';
}