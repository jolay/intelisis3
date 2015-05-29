<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_progressbar}} shortcode
 */

function ac_composer_progressbar_composer(){
	 return array(
			'ac_progressbar' => array(
				'class' => 'ac_progressbar_composerView',
				'required' => array('vc_accordion'),
				'category' => array(t('Content')),
				'wrapper_class' => 'ac-full-height ac-no-icon',
				 "icon" => "ac-icon-progressbar",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				"show_settings_on_create" => TRUE,
				"as_parent" => TRUE,
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "el_class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 )
				 ),
				"custom_markup" => '
				<div class="wpb_progressbar_holder wpb_holder clearfix vc_container_for_children">
				%content%
				</div>
				<div class="progressbar_controls">
				<button class="add_tab" title="'.__("Add progressbar item", "js_composer").'">'.__("Add progressbar item", "js_composer").'</button>
				</div>
				',
				'default_content' => '
				[ac_progressbar_item title="'.__('Skill or Task 1', "js_composer").'" progress="50"][/ac_progressbar_item]
				[ac_progressbar_item title="'.__('Skill or Task 2', "js_composer").'" progress="50"][/ac_progressbar_item]
				',
				"clone_tag" => "ac_progressbar_item",
				'js_view' => 'AcItemsList',
			),
			
			'ac_progressbar_item' => array(
				'class' => 'ac_progressbar_item_composerView',
				'required' => array('vc_accordion_tab'),
				"allowed_container_element" => 'vc_row',
				"is_container" => FALSE,
				"content_element" => FALSE,
				"params" => array(
					array(
						"type" => "textfield",
						"heading" => __("Title", "js_composer"),
						"param_name" => "title",
						"description" => __("Accordion section title.", "js_composer")
					),
				),
				'js_view' => 'AcprogressbarItemView',
				'asset' => array(
						'library' => array(
							array('acquia', 'fontello'),
						),
						'css' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/css/ac_progressbar.css' => array(),
						),
						/*
						'js' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/ac_progressbar.css' => array(),
						),*/
				)
			),
	 );
}

// {{ac_progressbar}} Composer Class
if (class_exists('vc_accordion_composerView')) {
	 class ac_progressbar_composerView extends vc_accordion_composerView {
	 }
}

// {{ac_progressbar_item}} Composer Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_progressbar_item_composerView extends acquiaCustomComposerView {
			public function __construct($settings = array()) {
					parent::__construct($settings);
					acquia_include('utility', 'ac_composer');
					acquia_include('wp_bridge', 'ac_composer');
					acquia_include('content');
			}
					
			protected  $predefined_atts = array(
					'el_class' => '',
					'width' => '',
					'title' => ''
			);
			public function contentAdmin($atts, $content = null) {
				 $el_class = $title = '';
				 $width = '1/1';

				 extract(shortcode_atts($this->predefined_atts, $atts));
	
				 $column_controls = $this->getColumnControls($this->settings('controls'));
				 $column_controls_bottom =  $this->getColumnControls('add', 'bottom-controls');

				 $output = '<div class="group wpb_sortable ac_composer_full_controll">';
				
				 $font_template =  acquia_get_class_by_args(array('font'), array('font' => ''));
				 $title_template = $this->update_template("title", '<h4 class="title">{{title}}</h4>');
				 $bar_template = $this->update_template("progress", '<div class="progress" style="width:{{progress}}%;"></div>');
				 
				 $inner  = "<div class='ac-progressbar-item ac-sortable-item clearfix'>";
				 $inner .= "	<div class='progressbar_content_wrap'>";
				 $inner .= "		<div class='progressbar_title' {$title_template}><h4 class='title'>".t('Skill or Task')."</h4></div>";
				 $inner .= "		<div class='progressbar_progress' {$bar_template}><div class='progress'><span class='inner' style='width:{{progress}}%;'></span></div></div>";
				 $inner .= "	</div>";
				 $inner .= "</div>";
				 
				 
				 $output .= '	<div '.$this->mainHtmlBlockParams($width).'>';
				 $output .= '		'.str_replace("%column_size%", ac_composer_class_to_col_with($width), $column_controls);		 
				 $output .= '		'.$inner;		 
				 $output .= '	</div>';
				 $output .= '</div>';
				 return $output;
			}

			public function mainHtmlBlockParams($width) {
				 return 'data-element_type="'.$this->settings["base"].'" class=" wpb_'.$this->settings['base'].'"'.$this->customAdminBlockParams();
			}
			public function containerHtmlBlockParams($width) {
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