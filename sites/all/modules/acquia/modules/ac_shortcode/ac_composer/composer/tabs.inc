<?php

// Tabs
define('TAB_TITLE', __("Tab", "js_composer"));

/**
 * @file
 *  Acquia Composer settings for {{ac_tabs}} and {{ac_tab}} shortcode
 */
function ac_composer_tabs_composer(){
		return array(
				'ac_tabs' => array(
					 'class' => 'ac_tabs_composerView',
						"show_settings_on_create" => false,
						"is_container" => true,
						"icon" => "icon-wpb-ui-tab-content",
						"category" => array(__('Content', 'js_composer')),
						"params" => array(
							array(
								"type" => "textfield",
								"heading" => __("Widget title", "js_composer"),
								"param_name" => "title",
								"description" => __("What text use as a widget title. Leave blank if no title is needed.", "js_composer")
							),
							array(
								"type" => "dropdown",
								"heading" => __("Auto rotate tabs", "js_composer"),
								"param_name" => "interval",
								"value" => array(__("Disable", "js_composer") => 0, 3, 5, 10, 15),
								"description" => __("Auto rotate tabs each X seconds.", "js_composer")
							),
							array(
								"type" => "textfield",
								"heading" => __("Extra class name", "js_composer"),
								"param_name" => "el_class",
								"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
							)
						),
						"custom_markup" => '
						<div class="wpb_tabs_holder wpb_holder vc_container_for_children">
						<ul class="tabs_controls">
						</ul>
						%content%
						</div>'
						,
						'default_content' => '
						[ac_tab title="'.__('Tab 1','js_composer').'" tab_id="'.time().'-1-'.rand(0, 100).'"][/ac_tab]
						[ac_tab title="'.__('Tab 2','js_composer').'" tab_id="'.time().'-2-'.rand(0, 100).'"][/ac_tab]
						',
						"js_view" => 'VcTabsView',
						"header_title" => FALSE,
					),
			
				// tabs inner
				'ac_tab' => array(
					 'class' => 'ac_tab_composerView',
					 'required' => array('vc_column'),
					 'enabled' => array('ac_tabs' => TRUE),
					 // Composer Settings
						"allowed_container_element" => 'vc_row',
						"is_container" => true,
						"content_element" => false,
						"params" => array(
							array(
								"type" => "textfield",
								"heading" => __("Title", "js_composer"),
								"param_name" => "title",
								"description" => __("Tab title.", "js_composer")
							),
							array(
								"type" => "tab_id",
								"heading" => __("Tab ID", "js_composer"),
								"param_name" => "tab_id"
							)
						),
						'js_view' => 'VcTabView',
				),
		);
}

// {{ac_tab}} Composer Class
if (class_exists('vc_column_composerView')) {
	 class ac_tab_composerView extends vc_column_composerView {
				protected $predefined_atts = array(
														'tab_id' => TAB_TITLE,
														'title' => ''
														);
				public function customAdminBlockParams() {
						return ' id="tab-'.$this->atts['tab_id'] .'"';
				}
				public function mainHtmlBlockParams($width, $i) {
						return 'data-element_type="'.$this->settings["base"].'" class="wpb_'.$this->settings['base'].' wpb_sortable wpb_content_holder"'.$this->customAdminBlockParams();
				}
				public function containerHtmlBlockParams($width, $i) {
						return 'class="wpb_column_container vc_container_for_children"';
				}
				public function getColumnControls($controls, $extended_css = '') {
						$controls_start = '<div class="controls controls_column'.(!empty($extended_css) ? " {$extended_css}" : '').'">';
						$controls_end = '</div>';
						
						if ($extended_css=='bottom-controls') $control_title = sprintf(__('Append to this %s', 'js_composer'), strtolower($this->settings('title')));
						else $control_title = sprintf(__('Prepend to this %s', 'js_composer'), strtolower($this->settings('title')));
						
						$controls_add = ' <a class="column_add" href="#" title="'.$control_title.'"></a>';
						$controls_edit = ' <a class="column_edit" href="#" title="'.sprintf(__('Edit this %s', 'js_composer'), strtolower($this->settings('title'))).'"></a>';
						$controls_clone = '<a class="column_clone" href="#" title="'.sprintf(__('Clone this %s', 'js_composer'), strtolower($this->settings('title'))).'"></a>';
		
						$controls_delete = '<a class="column_delete" href="#" title="'.sprintf(__('Delete this %s', 'js_composer'), strtolower($this->settings('title'))).'"></a>';
						return $controls_start .  $controls_add . $controls_edit . $controls_clone . $controls_delete . $controls_end;
				}
	 }
}

// {{ac_tabs}} Composer Class
if (class_exists('acquiaComposerView')) {
		class ac_tabs_composerView extends acquiaComposerView {
				public function __construct($settings = array()) {
						parent::__construct($settings);
						acquia_include('utility', 'ac_composer');
						acquia_include('wp_bridge', 'ac_composer');
				}
		
				public function contentAdmin($atts, $content = null) {
						$width = $custom_markup = '';
						$shortcode_attributes = array('width' => '1/1');
						foreach ( $this->settings['params'] as $param ) {
								if ( $param['param_name'] != 'content' ) {
										//$shortcode_attributes[$param['param_name']] = $param['value'];
										if (isset($param['value']) && is_string($param['value']) ) {
												$shortcode_attributes[$param['param_name']] = __($param['value'], "js_composer");
										} elseif(isset($param['value'])) {
												$shortcode_attributes[$param['param_name']] = $param['value'];
										}
								} else if ( $param['param_name'] == 'content' && $content == NULL ) {
										//$content = $param['value'];
										$content = __($param['value'], "js_composer");
								}
						}
						extract(shortcode_atts(
								$shortcode_attributes
								, $atts));
		
						// Extract tab titles
		
						preg_match_all( '/ac_tab title="([^\"]+)"(\stab_id\=\"([^\"]+)\"){0,1}/i', $content, $matches, PREG_OFFSET_CAPTURE );
						/*
						$tab_titles = array();
						if ( isset($matches[1]) ) { $tab_titles = $matches[1]; }
						*/
						$output = '';
						$tab_titles = array();
		
						if ( isset($matches[0]) ) { $tab_titles = $matches[0]; }
						$tmp = '';
						if( count($tab_titles) ) {
								$tmp .= '<ul class="clearfix tabs_controls">';
								foreach ( $tab_titles as $tab ) {
										preg_match('/title="([^\"]+)"(\stab_id\=\"([^\"]+)\"){0,1}/i', $tab[0], $tab_matches, PREG_OFFSET_CAPTURE );
										if(isset($tab_matches[1][0])) {
												$tmp .= '<li><a href="#tab-'. (isset($tab_matches[3][0]) ? $tab_matches[3][0] : sanitize_title( $tab_matches[1][0] ) ) .'">' . $tab_matches[1][0] . '</a></li>';
		
										}
								}
								$tmp .= '</ul>'."\n";
						} else {
								$output .= do_shortcode( $content );
						}
		
		
		
						/*
						if ( count($tab_titles) ) {
								$tmp .= '<ul class="clearfix">';
								foreach ( $tab_titles as $tab ) {
										$tmp .= '<li><a href="#tab-'. sanitize_title( $tab[0] ) .'">' . $tab[0] . '</a></li>';
								}
								$tmp .= '</ul>';
						} else {
								$output .= do_shortcode( $content );
						}
						*/
						$elem = $this->getElementHolder($width);
		
						$iner = '';
						foreach ($this->settings['params'] as $param) {
								$custom_markup = '';
								$param_value = isset($$param['param_name']) ? $$param['param_name'] : '';
								if ( is_array($param_value)) {
										// Get first element from the array
										reset($param_value);
										$first_key = key($param_value);
										$param_value = $param_value[$first_key];
								}
								$iner .= $this->singleParamHtmlHolder($param, $param_value);
						}
						//$elem = str_ireplace('%wpb_element_content%', $iner, $elem);
		
						if ( isset($this->settings["custom_markup"]) &&$this->settings["custom_markup"] != '' ) {
								if ( $content != '' ) {
										$custom_markup = str_ireplace("%content%", $tmp.$content, $this->settings["custom_markup"]);
								} else if ( $content == '' && isset($this->settings["default_content_in_template"]) && $this->settings["default_content_in_template"] != '' ) {
										$custom_markup = str_ireplace("%content%",$this->settings["default_content_in_template"],$this->settings["custom_markup"]);
								} else {
										$custom_markup =  str_ireplace("%content%", '', $this->settings["custom_markup"]);
								}
								//$output .= do_shortcode($this->settings["custom_markup"]);
								$iner .= do_shortcode($custom_markup);
						}
						$elem = str_ireplace('%wpb_element_content%', $iner, $elem);
						$output = $elem;
		
						return $output;
				}
		
				public function getTabTemplate() {
						return '<div class="wpb_template">'.do_shortcode('[ac_tab title="Tab" tab_id=""][/ac_tab]').'</div>';
				}
		
		
		}
}