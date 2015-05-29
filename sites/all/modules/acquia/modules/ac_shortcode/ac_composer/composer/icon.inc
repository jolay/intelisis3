<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_font_icon}} shortcode
 */
function ac_composer_icon_composer(){
	 return array(
		 'ac_font_icon' => array(
				 'class' => 'ac_font_icon_composerView',
				 'category' => array(t('Content')),
				 "icon" => "ac-font-icon",
				 'wrapper_class' => 'ac-full-height ac-no-icon',
				 "modal_data" => array(
						'modal_size' => 'big',
				 ),
				 //"order" => 94,
				 "params" => array(
					 array(
						 "type" => "textfield",
						 "heading" => __("icon", "js_composer"),
						 "param_name" => "icon",
						 "holder" => "div",
						 "value" => __("", "js_composer"),
					 ),
				 ),
				'asset' => array(
						'library' => array(
							array('acquia', 'fontello'),
						),
						'css' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/css/global.css' => array(),
						),
				),
				'js_view' => 'acIconView',
			),
	 );
}

// {{ac_iconbox}} Composer View Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_font_icon_composerView extends acquiaCustomComposerView {
			public function __construct($settings = array()) {
					parent::__construct($settings);
					acquia_include('utility', 'ac_composer');
					acquia_include('wp_bridge', 'ac_composer');
					acquia_include('content');
			}
			public function singleParamHtmlHolder($atts, $content) {
				 $font_template =  acquia_get_class_by_args(array('font'), array('font' => ''));
				 $ico_template = $this->update_template("icon_str", '<span class="ac-font-fontello {{icon_str}}">&nbsp;</span>');
				 
				 if(isset($params['icon']) && isset($params['font'])) {
						$icon = theme('acquia_iconfont', array('font'=> $params['font'], 'icon' => $params['icon']));
				 }else {
						$icon = theme('acquia_iconfont', array('font'=> 'fontello', 'icon' => 59523));
				 }
				 
				 $output = "<div class='ac-iconbox clearfix'>";
				 $output .= "	<div class='iconbox_icon' {$ico_template}>{$icon}</div>";
				 $output .= "</div>";
				 
				 return $output;
			}
	 }
}
