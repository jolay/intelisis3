<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_iconlist}} shortcode
 */

function ac_composer_iconlist_composer(){
	 return array(
			'ac_iconlist' => array(
				'class' => 'ac_iconlist_composerView',
				'required' => array('vc_accordion'),
				'category' => array(t('Content')),
				'wrapper_class' => 'ac-full-height ac-no-icon',
				 "icon" => "ac-icon-iconlist",
				 "clone_tag" => "ac_iconlist_item",
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
				<button class="add_tab" title="'.__("Add iconlist item", "js_composer").'">'.__("Add iconlist section", "js_composer").'</button>
				</div>
				',
				'default_content' => '
				[ac_iconlist_item title="'.__('Section 1', "js_composer").'"]List Content Here[/ac_iconlist_item]
				[ac_iconlist_item title="'.__('Section 2', "js_composer").'"]List Content Here[/ac_iconlist_item]
				',
				'js_view' => 'AcItemsList',
				"clone_tag" => "ac_iconlist_item",
			),
			'ac_iconlist_item' => array(
				'class' => 'ac_iconlist_item_composerView',
				'required' => array('vc_accordion_tab'),
				"allowed_container_element" => 'ac_iconlist',
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
							 ACQUIA_COMPOSER_ASSET_PATH . '/ac_iconlist.css' => array(),
						),*/
				)
			),
	 );
}

// {{ac_iconlist}} Composer Class
if (class_exists('vc_accordion_composerView')) {
	 class ac_iconlist_composerView extends vc_accordion_composerView {
	 }
}

// {{ac_iconlist_item}} Composer Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_iconlist_item_composerView extends acquiaCustomComposerView {
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
				 $ico_template = $this->update_template("icon_str", '<span class="ac-font-fontello {{icon_str}}">&nbsp;</span>');
				 $title_template = $this->update_template("title", '<h4 class="title">{{title}}</h4>');
				 $content_template = $this->update_template("content", '<span class="content">{{content}}</span>');
				 
				 if(isset($params['icon']) && isset($params['font'])) {
						$icon = theme('acquia_iconfont', array('font'=> $params['font'], 'icon' => $params['icon']));
				 }else {
						$icon = theme('acquia_iconfont', array('font'=> 'fontello', 'icon' => 59523));
				 }
				 
				 $inner = "<div class='ac-iconlist-item ac-sortable-item clearfix'>";
				 $inner .= "	<div class='iconlist_icon' {$ico_template}>{$icon}</div>";
				 $inner .= "	<div class='iconlist_content_wrap'>";
				 $inner .= "		<div class='iconlist_title' {$title_template}><h4 class='title'>".t('List Title')."</h4></div>";
				 $inner .= "		<div class='iconlist_content' {$content_template}><span class='content'>".t('List Content Here.')."</span></div>";
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