<?php
/**
 * @file
 *  Acquia Composer settings for {{img_frame}} shortcode
 */
function ac_composer_row_composer(){
		return array(
			'vc_row' => array(
				 'class' => 'ac_row_composerView',
				 "base" => "vc_row",
				 "is_container" => true,
				 "icon" => "icon-wpb-row",
				 "show_settings_on_create" => false,
				 "category" => t('Content'),
				 "params" => array(
						array(
							"type" => "textfield",
							"heading" => t("Extra class name"),
							"param_name" => "el_class",
							"description" => t("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.")
						)
				 ),
						"js_view" => 'VcRowView'
			),
			'vc_row_inner' => array(
				 'class' => 'ac_row_inner_composerView',
				 "content_element" => false,
				 "is_container" => true,
				 "icon" => "icon-wpb-row",
				 "show_settings_on_create" => false,
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => t("Extra class name"),
						 "param_name" => "el_class",
						 "description" => t("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.")
					 )
				 ),
				 "js_view" => 'VcRowView'
			),
		);
 }
 
// ac_row_composerView Class
if (class_exists('acquiaComposerView')) {
	 class ac_row_composerView extends acquiaComposerView {
			protected $predefined_atts = array(
				 'el_class' => '',
			);
	 
			public function getColumnControls($controls, $extended_css = '') {
				 acquia_include('utility', 'ac_composer');
				 
				 $controls_start = '<div class="controls controls_row clearfix">';
				 $controls_end = '</div>';
				 
				 $right_part_start = '';//'<div class="controls_right">';
				 $right_part_end = '';//'</div>';
				 
				 //Create columns
				 $controls_center_start = '<span class="vc_row_layouts">';
				 $controls_layout = '';
				 foreach(ac_composer_row_layouts() as $layout) {
						$controls_layout .= '<a class="set_columns '.$layout['icon_class'].'" data-cells="'.$layout['cells'].'" data-cells-mask="'.$layout['mask'].'" title="'.$layout['title'].'"></a> ';
				 }
				 $controls_layout .= '<br/><a class="set_columns custom_columns" data-cells="custom" data-cells-mask="custom" title="'.__('Custom layout', 'js_composer').'">'.__('Custom layout', 'js_composer').'</a> ';
				 $controls_move = ' <a class="column_move" href="#" title="'.t('Drag row to reorder').'"></a>';
				 $controls_delete = '<a class="column_delete" href="#" title="'.t('Delete this row').'"></a>';
				 $controls_edit = ' <a class="column_edit" href="#" title="'.t('Edit this row').'"></a>';
				 $controls_clone = ' <a class="column_clone" href="#" title="'.t('Clone this row').'"></a>';
				 $controls_toggle = '<a class="column_toggle" href="#" title="'.t('Toggle this row').'"></a>';
				 $controls_center_end = '</span>';
				 
				 $row_edit_clone_delete = '<span class="vc_row_edit_clone_delete">';
				 $row_edit_clone_delete .= $controls_delete . $controls_clone . $controls_edit . $controls_toggle;
				 $row_edit_clone_delete .= '</span>';
				 
				 //$column_controls_full =  $controls_start. $controls_move . $controls_center_start . $controls_layout . $controls_delete . $controls_clone . $controls_edit . $controls_center_end . $controls_end;
				 $column_controls_full =  $controls_start. $controls_move . $controls_center_start . $controls_layout . $controls_center_end . $row_edit_clone_delete .$controls_end;
				 
				 return $column_controls_full;
			}
	 
			 
			 public function contentAdmin($atts, $content = null) {
					 $width = $el_class = '';
					  extract(shortcode_atts($this->predefined_atts, $atts));
						acquia_include('utility', 'ac_composer');
					 $output = '';
	 
					 $column_controls = $this->getColumnControls($this->settings('controls'));
	 
					 for ( $i=0; $i < count($width); $i++ ) {
							 $output .= '<div'.$this->customAdminBockParams().' data-element_type="'.$this->settings["base"].'" class="wpb_'.$this->settings['base'].' wpb_sortable">';
							 $output .= str_replace("%column_size%", 1, $column_controls);
							 $output .= '<div class="wpb_element_wrapper">';
							 $output .= '<div class="vc_row-fluid wpb_row_container vc_container_for_children">';
							 if($content=='' && !empty($this->settings["default_content_in_template"])) {
									$output .= do_shortcode( shortcode_unautop($this->settings["default_content_in_template"]) );
							 } else {
									$output .= do_shortcode( shortcode_unautop($content) );
							 }
							 $output .= '</div>';
							 if ( isset($this->settings['params']) ) {
									 $inner = '';
									 foreach ($this->settings['params'] as $param) {
											 $param_value = isset($param['param_name']) ? $param['param_name'] : '';
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
							 $output .= '</div>';
					 }
	 
					 return $output;
			 }
			 public function customAdminBockParams() {
					 return '';
			 }
	 }


	 class ac_row_inner_composerView extends ac_row_composerView {
			protected function getFileName() {
				 return 'vc_row';
			}
			public function template($content = '') {
				 return $this->contentAdmin($this->atts);
			}
	 }
}
