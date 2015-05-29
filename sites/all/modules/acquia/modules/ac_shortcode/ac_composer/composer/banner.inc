<?php
/**
 * @file
 *  Acquia Composer settings for {{vc_accordion}} and {{vc_accordion_tab}} shortcode
 */
function ac_composer_banner_composer(){
		return array(
			'ac_banner' => array(
				'class' => 'vc_accordion_composerView',
				"category" => __('Content', 'js_composer'),
				"show_settings_on_create" => false,
				"is_container" => true,
				"icon" => "ac-icon-banner",
				'required' => array('vc_accordion'),
				'wrapper_class' => 'ac-full-height ac-no-icon',
				"params" => array(
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
				',
				'default_content' => '
				[ac_banner_item][/ac_banner_item]
				[ac_banner_item second="true"][/ac_banner_item]
				',
				'js_view' => 'VcAccordionView',
			),
			
			'ac_banner_item' => array(
				'class' => 'ac_banner_item_composerView',
				'required' => array('vc_accordion'),
				"allowed_container_element" => 'vc_row',
				"is_container" => true,
				"content_element" => false,
				'element_class' => 'wpb_vc_accordion_tab',
				"params" => array(
					array(
						"type" => "textfield",
						"heading" => __("second", "js_composer"),
						"param_name" => "second",
						"description" => __("second box?.", "js_composer")
					),
				),
				'js_view' => 'VcAccordionTabView',
			),
	 );
}

// {{ac_banner_item_composerView}} Class
if (class_exists('vc_accordion_tab_composerView')) {
		class ac_banner_item_composerView extends vc_accordion_tab_composerView {

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
										$output .= '<h3><span class="tab-label">'.t('Banner Box').'</span></h3>';
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
		}
}