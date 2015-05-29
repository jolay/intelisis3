<?php
/**
 * @file
 *  Acquia Composer settings for {{quote}} shortcode
 */
function ac_composer_quote_composer(){
  return array(
		'ac_quote' => array(
			'class' => 'ac_quote_composerView',
			'category' => array(t('Content')),
			'wrapper_class' => 'ac-full-height ac-no-icon',
			"icon" => "ac-icon-quote",
			"show_settings_on_create" => TRUE,
			"modal_data" => array(
				 'modal_size' => 'small',
			),
     //"order" => 94,
     "params" => array(
       array(
         "type" => "textfield",
         "heading" => __("Extra class name", "js_composer"),
         "param_name" => "el_class",
         "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
       ),
       array(
         "type" => "attach_images",
         "heading" => __("Image File id", "js_composer"),
         "param_name" => "fid",
         "description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
       )
     ),
		'asset' => array(
				'library' => array(
					array('acquia', 'fontello'),
				),
				'css' => array(
					 ACQUIA_COMPOSER_ASSET_PATH . '/css/ac_quote.css' => array(),
				),
		),
     "js_view" => 'acquiaShortcodeView',
    ),
  );
}

// {{ac_quote}} Composer View Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_quote_composerView extends acquiaCustomComposerView {
			public function singleParamHtmlHolder($atts, $content) {
				 $title_template = $this->update_template("title", '<h4 class="title">{{title}}</h4>');
				 $content_template = $this->update_template("content", '<div class="content">{{content}}</span>');

				 $output = "<blockquote class='ac-fancy-quote'>";
				 $output .= "		<div class='fancy-quote-content' {$content_template}><span class='content'>".t('Fancy Quote Content Here.')."</span></div>";
				 $output .= "</blockquote>";
				 
				 return $output;
			}
	 }
}