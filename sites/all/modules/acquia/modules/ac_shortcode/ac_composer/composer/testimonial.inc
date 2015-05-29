<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_testimonials}} shortcode
 */

function ac_composer_testimonial_composer(){
	 return array(
			'ac_testimonials' => array(
				'class' => 'ac_testimonials_composerView',
				'required' => array('vc_accordion'),
				'category' => array(t('Content')),
				'wrapper_class' => 'ac-full-height ac-no-icon',
				 "icon" => "ac-icon-testimonial",
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
				<div class="wpb_testimonial_holder wpb_holder clearfix vc_container_for_children">
				%content%
				</div>
				<div class="testimonial_controls">
				<button class="add_tab" title="'.__("Add testimonial item", "js_composer").'">'.__("Add testimonial section", "js_composer").'</button>
				</div>
				',
				'default_content' => '
				[ac_testimonial title="'.__('Section 1', "js_composer").'" icon="59522" font="fontello"][/ac_testimonial]
				[ac_testimonial title="'.__('Section 2', "js_composer").'" icon="59522" font="fontello"][/ac_testimonial]
				',
				"clone_tag" => "ac_testimonial",
				'js_view' => 'AcItemsList',
			),
			'ac_testimonial' => array(
				'class' => 'ac_testimonial_composerView',
				'required' => array('vc_accordion_tab'),
				"allowed_container_element" => 'ac_testimonials',
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
						"description" => __("Accordion section title.", "js_composer")
					),
				),
				'js_view' => 'acquiaImageView',
			),
	 );
}

// {{ac_testimonials}} Composer Class
if (class_exists('vc_accordion_composerView')) {
	 class ac_testimonials_composerView extends vc_accordion_composerView {

	 }
}

// {{ac_testimonial}} Composer Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_testimonial_composerView extends acquiaCustomComposerView {
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
				 $output = '';
				 
				 $column_controls = $this->getColumnControls($this->settings('controls'));
				 $column_controls_bottom =  $this->getColumnControls('add', 'bottom-controls');
				 
				 $output .= '<div class="group wpb_sortable ac_composer_full_controll">';
				 
				 $pic_template = $this->update_template("src", "<img src='{{src}}' alt=''/>");
				 $name_template = $this->update_template("name", '<h4 class="name">{{name}}</h4>');
				 $position_template = $this->update_template("position", '<span class="position">{{position}}</span>');

				 $url_template = $this->update_template("url", '<span class="url"><a href="{{url}}">{{url}}</a></span>');
				 $testimonial_template = $this->update_template("content", '<div class="testimonial">{{content}}</div>');

				 $default_img_src = drupal_get_path('module', 'ac_shortcode') . '/shortcodes/assets/images/placeholder.jpg';
				 $img = "<img src='".url($default_img_src, array('absolute' => TRUE))."' alt=''  />";
					
				 $inner = "<div class='ac-testimonial-item ac-sortable-item clearfix'>";
				 $inner .= "  <div class='author_pic' {$pic_template}>{$img}</div>";
				 $inner .= "  <div class='author_inner'>";
				 $inner .= "    <div class='name' {$name_template}><h5 class='name'>".t('Author Name')."</h5></div>";
				 $inner .= "    <div class='position' {$position_template}><span class='position'>".t('Author position')."</span></div>";
				 $inner .= "    <div class='url' {$url_template}><span class='url'>".l('http://example.net', 'http://example.net')."</span></div>";
				 $inner .= "    <div class='testimonial' {$testimonial_template}><span class='testimonial'>".t('Testimonial text here.')."</span></div>";
				 $inner .= "  </div>";
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