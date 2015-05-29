<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_socials}} shortcode
 */

function ac_composer_social_composer(){
	 return array(
			'ac_socials' => array(
				'class' => 'ac_socials_composerView',
				'required' => array('vc_accordion'),
				'category' => array(t('Content')),
				'wrapper_class' => 'ac-full-height ac-no-icon',
				'icon' => 'ac-icon-socials',
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
				<div class="wpb_iconlist_holder wpb_holder clearfix vc_container_for_children">
				%content%
				</div>
				<div class="iconlist_controls">
				<button class="add_tab" title="'.__("Add Icon", "js_composer").'">'.__("Add Icon", "js_composer").'</button>
				</div>
				',
				'default_content' => '
				[ac_social icon="facebook" title="facebook"][/ac_social]
				[ac_social icon="twitter" title="facebook"][/ac_social]
				',
				"clone_tag" => "ac_social",
				'js_view' => 'AcItemsList',
			),
			'ac_social' => array(
				'class' => 'ac_social_composerView',
				'required' => array('vc_accordion_tab'),
				"allowed_container_element" => 'ac_socials',
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
				'js_view' => 'acIconView',
				'asset' => array(
						'library' => array(
							array('acquia', 'fontello'),
						),
						'css' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/css/global.css' => array(),
						),
						/*
						'js' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/ac_socials.css' => array(),
						),*/
				)
			),
	 );
}

// {{ac_socials}} Composer Class
if (class_exists('vc_accordion_composerView')) {
	 class ac_socials_composerView extends vc_accordion_composerView {
	 }
}

// {{ac_social}} Composer Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_social_composerView extends acquiaCustomComposerView {
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
				
				 $ico_template = $this->update_template("icon", '<span class="ac-font-fontello icon-{{icon}}">&nbsp;</span>');
				 $inner  = "	<div class='ac-sortable-item clearfix'>";
				 $inner .= "		<div class='social_icon' {$ico_template}><span class='ac-font-fontello icon-circle-empty'>&nbsp;</span></div>";
				 $inner .= "	</div>";
				 
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