<?php
/**
 * @file
 *  Acquia Composer settings for {{vc_accordion}} and {{vc_accordion_tab}} shortcode
 */
function ac_composer_accordion_composer(){
		return array(
			'vc_accordion' => array(
				'class' => 'vc_accordion_composerView',
				"category" => __('Content', 'js_composer'),
				"show_settings_on_create" => false,
				"is_container" => true,
				"icon" => "icon-wpb-ui-accordion",
				'required' => array('ac_tab'),
				"params" => array(
					array(
						"type" => "textfield",
						"heading" => __("Widget title", "js_composer"),
						"param_name" => "title",
						"description" => __("What text use as a widget title. Leave blank if no title is needed.", "js_composer")
					),
					array(
						"type" => "textfield",
						"heading" => __("Active tab", "js_composer"),
						"param_name" => "active_tab",
						"description" => __("Enter tab number to be active on load or enter false to collapse all tabs.", "js_composer")
					),
					array(
						"type" => 'checkbox',
						"heading" => __("Allow collapsible all", "js_composer"),
						"param_name" => "collapsible",
						"description" => __("Select checkbox to allow for all sections to be be collapsible.", "js_composer"),
						"value" => Array(__("Allow", "js_composer") => 'yes')
					),
					array(
						"type" => "textfield",
						"heading" => __("Extra class name", "js_composer"),
						"param_name" => "el_class",
						"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					)
				),
				"custom_markup" => '
				<div class="wpb_accordion_holder wpb_holder clearfix vc_container_for_children">
				%content%
				</div>
				<div class="tab_controls">
				<button class="add_tab" title="'.__("Add accordion section", "js_composer").'">'.__("Add accordion section", "js_composer").'</button>
				</div>
				',
				'default_content' => '
				[vc_accordion_tab title="'.__('Section 1', "js_composer").'"][/vc_accordion_tab]
				[vc_accordion_tab title="'.__('Section 2', "js_composer").'"][/vc_accordion_tab]
				',
				'js_view' => 'VcAccordionView',
				"header_title" => FALSE,
			),
			
			'vc_accordion_tab' => array(
				'class' => 'vc_accordion_tab_composerView',
				'required' => array('ac_tab'),
				"allowed_container_element" => 'vc_row',
				"is_container" => true,
				"content_element" => false,
				"params" => array(
					array(
						"type" => "textfield",
						"heading" => __("Title", "js_composer"),
						"param_name" => "title",
						"description" => __("Accordion section title.", "js_composer")
					),
				),
				'js_view' => 'VcAccordionTabView',
			),
	 );
}

// {{ac_tabs}} Composer Class
if (class_exists('acquiaComposerView')) {
		class vc_accordion_composerView extends acquiaComposerView {

				public function __construct($settings = array()) {
						parent::__construct($settings);
						acquia_include('utility', 'ac_composer');
						acquia_include('wp_bridge', 'ac_composer');
				}
		
				public function contentAdmin( $atts, $content ) {
						$width = $custom_markup = '';
						$shortcode_attributes = array('width' => '1/1');
						foreach ( $this->settings['params'] as $param ) {
								if ( $param['param_name'] != 'content' ) {
										if (isset($param['value']) && is_string($param['value']) ) {
												$shortcode_attributes[$param['param_name']] = __($param['value'], "js_composer");
										} elseif(isset($param['value'])) {
												$shortcode_attributes[$param['param_name']] = $param['value'];
										}
								} else if ( $param['param_name'] == 'content' && $content == NULL ) {
										$content = __($param['value'], "js_composer");
								}
						}
						extract(shortcode_atts(
								$shortcode_attributes
								, $atts));
		
						$output = '';
		
						$elem = $this->getElementHolder($width);
						
						$inner = '';
						foreach ($this->settings['params'] as $param) {
								$param_value = '';
								$param_value = isset($$param['param_name']) ? $$param['param_name'] : '';
								if ( is_array($param_value)) {
										// Get first element from the array
										reset($param_value);
										$first_key = key($param_value);
										$param_value = $param_value[$first_key];
								}
								$inner .= $this->singleParamHtmlHolder($param, $param_value);
						}
						//$elem = str_ireplace('%wpb_element_content%', $iner, $elem);
						$tmp = '';
						// $template = '<div class="wpb_template">'.do_shortcode('[vc_accordion_tab title="New Section"][/vc_accordion_tab]').'</div>';
		
						if ( isset($this->settings["custom_markup"]) && $this->settings["custom_markup"] != '' ) {
								if ( $content != '' ) {
										$custom_markup = str_ireplace("%content%", $tmp.$content, $this->settings["custom_markup"]);
								} else if ( $content == '' && isset($this->settings["default_content_in_template"]) && $this->settings["default_content_in_template"] != '' ) {
										$custom_markup = str_ireplace("%content%", $this->settings["default_content_in_template"], $this->settings["custom_markup"]);
								} else {
										$custom_markup =  str_ireplace("%content%", '', $this->settings["custom_markup"]);
								}
								//$output .= do_shortcode($this->settings["custom_markup"]);
								$inner .= do_shortcode($custom_markup);
						}
						$elem = str_ireplace('%wpb_element_content%', $inner, $elem);
						$output = $elem;
		
						return $output;
				}
		
				/**
				 *
				 * @param {string} $width
				 *  width of element in string format e.g. vc_span2
				 */
				public function getElementHolder($width) {
					
					acquia_include('utility', 'ac_composer');
					
					$class = explode(' ', $this->settings("wrapper_class"));
					array_unshift($class, 'wpb_element_wrapper');
					
					$output = '';
					$column_controls = $this->getColumnControls($this->settings('controls'));
					
					$classes = array('wpb_'.$this->settings["base"]);
					$classes[] = 'wpb_content_element';
					$classes[] = 'wpb_sortable';
					$classes[] = isset($this->settings['header_title']) &&
					$this->settings['header_title'] != FALSE ? 'wpb_header_enabled' : NULL;
					$classes[] = isset($this->settings["class"]) ? $this->settings["class"] : NULL;
					$classes = array_filter($classes, 'strlen');
					$classes = implode(' ', $classes);
		
					$output .= '<div data-element_type="'.$this->settings["base"].'" class="'.$classes.'">';
					$output .= str_replace("%column_size%", ac_composer_class_to_col_with($width), $column_controls);
					if (isset($this->settings['header_title']) && $this->settings['header_title'] != FALSE) {
					  $output .= '<h4 class="header-title">'.$this->iconTemplate() . $this->settings['title'].'</h4>';
					}
					if (isset($this->settings["as_parent"]) && $this->settings["as_parent"] == TRUE) {
					  $class[]= 'ac-composer-parent';
					}
					$output .= '<div class="'.implode(' ', $class).'">';
					$output .= '%wpb_element_content%';
					$output .= '</div>'; // <!-- end .wpb_element_wrapper -->';
					$output .= '</div>'; // <!-- end #element-'.$this->shortcode.' -->';
					return $output;
				}
		}
}
// {{vc_accordion_tab}} Class
if (class_exists('ac_tab_composerView')) {
		class vc_accordion_tab_composerView extends ac_tab_composerView {
				public function __construct($settings = array()) {
						parent::__construct($settings);
						acquia_include('utility', 'ac_composer');
						acquia_include('wp_bridge', 'ac_composer');
				}
						
				protected  $predefined_atts = array(
						'el_class' => '',
						'width' => '',
						'title' => ''
				);
				public function contentAdmin($atts, $content = null) {
						$width = $el_class = $title = '';
						extract(shortcode_atts($this->predefined_atts, $atts));
						$output = '';
		
						$column_controls = $this->getColumnControls($this->settings('controls'));
						$column_controls_bottom =  $this->getColumnControls('add', 'bottom-controls');
		
						if ( $width == 'column_14' || $width == '1/4' ) {
								$width = array('vc_span3');
						}
						else if ( $width == 'column_14-14-14-14' ) {
								$width = array('vc_span3', 'vc_span3', 'vc_span3', 'vc_span3');
						}
		
						else if ( $width == 'column_13' || $width == '1/3' ) {
								$width = array('vc_span4');
						}
						else if ( $width == 'column_13-23' ) {
								$width = array('vc_span4', 'vc_span8');
						}
						else if ( $width == 'column_13-13-13' ) {
								$width = array('vc_span4', 'vc_span4', 'vc_span4');
						}
		
						else if ( $width == 'column_12' || $width == '1/2' ) {
								$width = array('vc_span6');
						}
						else if ( $width == 'column_12-12' ) {
								$width = array('vc_span6', 'vc_span6');
						}
		
						else if ( $width == 'column_23' || $width == '2/3' ) {
								$width = array('vc_span8');
						}
						else if ( $width == 'column_34' || $width == '3/4' ) {
								$width = array('vc_span9');
						}
						else if ( $width == 'column_16' || $width == '1/6' ) {
								$width = array('vc_span2');
						}
						else {
								$width = array('');
						}
		
						for ( $i=0; $i < count($width); $i++ ) {
								$output .= '<div class="group wpb_sortable">';
										$output .= '<h3><span class="tab-label"><%= params.title %></span></h3>';
										$output .= '<div '.$this->mainHtmlBlockParams($width, $i).'>';
												$output .= str_replace("%column_size%", ac_composer_class_to_col_with($width[$i]), $column_controls);
												$output .= '<div class="wpb_element_wrapper">';
														$output .= '<div '.$this->containerHtmlBlockParams($width, $i).'>';
																//$output .= do_shortcode( shortcode_unautop($content) );
																$output .= $content;
																//$output .= WPBakeryVisualComposer::getInstance()->getLayout()->getContainerHelper();
														$output .= '</div>';
														if ( isset($this->settings['params']) ) {
																$inner = '';
																foreach ($this->settings['params'] as $param) {
																		$param_value = isset($$param['param_name']) ? $$param['param_name'] : '';
																		if ( is_array($param_value)) {
																				// Get first element from the array
																				reset($param_value);
																				$first_key = key($param_value);
																				$param_value = $param_value[$first_key];
																		}
																		$inner .= $this->singleParamHtmlHolder($param, $param_value);
																}
																$output .= $inner;
														}
												$output .= '</div>';
												$output .= str_replace("%column_size%", ac_composer_class_to_col_with($width[$i]), $column_controls_bottom);
										$output .= '</div>';
								$output .= '</div>';
						}
						return $output;
				}
		
				public function mainHtmlBlockParams($width, $i) {
						return 'data-element_type="'.$this->settings["base"].'" class=" wpb_'.$this->settings['base'].' '.$this->settings['element_class'].'"'.$this->customAdminBlockParams();
				}
				public function containerHtmlBlockParams($width, $i) {
						return 'class="wpb_column_container vc_container_for_children"';
				}
		
				protected function outputTitle($title) {
						return  '';
				}
		
				public function customAdminBlockParams() {
						return '';
				}
		}
}