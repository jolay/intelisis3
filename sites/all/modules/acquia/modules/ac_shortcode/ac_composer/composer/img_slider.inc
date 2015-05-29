<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_iconlist}} shortcode
 */

function ac_composer_img_slider_composer(){
	 return array(
			'img_slider' => array(
				'class' => 'img_slider_composerView',
				'required' => array('vc_accordion'),
				 'category' => array(t('Sliders')),
				'wrapper_class' => 'ac-full-height ac-no-icon',
				 "icon_image" => url(drupal_get_path('module', 'ac_composer') . '/composer/icons/img_slider.png', array('absolute'=> TRUE)),
				 "clone_tag" => "img_slider_item",
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				"show_settings_on_create" => TRUE,
				"as_parent" => TRUE,
				"allowed_container_element" => 'vc_row',
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("Extra class name", "js_composer"),
						 "param_name" => "el_class",
						 "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
					 )
				 ),
				"custom_markup" => '
				<div class="wpb_img_slider_holder wpb_holder clearfix vc_container_for_children">
				%content%
				</div>
				<div class="img_slider_controls">
				<button class="add_tab" title="'.__("Add new slide item", "js_composer").'">'.__("Add new slide", "js_composer").'</button>
				</div>
				',
				'default_content' => '
				[img_slider_item fid="0"]Caption Here[/img_slider_item]
				[img_slider_item fid="0"]Caption Here[/img_slider_item]
				',
				'js_view' => 'AcItemsList',
				"clone_tag" => "img_slider_item",
			),
			'img_slider_item' => array(
				'class' => 'img_slider_item_composerView',
				'required' => array('vc_accordion_tab'),
				"allowed_container_element" => 'img_slider',
				"is_container" => FALSE,
				"content_element" => FALSE,
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				"params" => array(
					array(
						"type" => "textfield",
						"heading" => __("Title", "js_composer"),
						"param_name" => "title",
						"description" => __("slide title.", "js_composer")
					),
				),
				'js_view' => 'acquiaImageView',
			),
	 );
}

// {{ac_iconlist}} Composer Class
if (class_exists('vc_accordion_composerView')) {
	 class img_slider_composerView extends vc_accordion_composerView {
	 }
}

// {{ac_iconlist_item}} Composer Class
if (class_exists('acquiaCustomComposerView')) {
	 class img_slider_item_composerView extends acquiaCustomComposerView {
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

				
				 $img_template = $this->update_template("src", "<img src='{{src}}' alt=''/>");
				 $content_template = $this->update_template("content", "<span class='content'>{{content}}</span>");

				 acquia_include('media');
				 $default_img_src = acquia_get_empty_thumb(ACQUIA_COMPOSER_IMAGE_STYLE);

				 $img = "<img src='".url($default_img_src, array('absolute' => TRUE))."' alt=''  />";
				 $inner = "<div class='container clearfix'>";
				 $inner .= "	<div class='img_slider-img vc_span3' {$img_template}>{$img}</div>";
				 $inner .= "	<div class='img_slider-caption vc_span9' {$content_template}><span class='content'>".t('Caption Here.')."</span></div>";
				 $inner .= "</div>";
				 
				 $output = '<div class="group wpb_sortable ac_composer_full_controll">';
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