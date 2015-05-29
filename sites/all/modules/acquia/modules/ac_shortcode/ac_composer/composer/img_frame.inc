<?php
/**
 * @file
 *  Acquia Composer settings for {{img_frame}} shortcode
 */
function ac_composer_img_frame_composer(){
  return array(
		'ac_img_frame' => array(
			'class' => 'ac_img_frame_composerView',
			'category' => array(t('Content')),
			'wrapper_class' => 'ac-full-height ac-no-icon',
			"icon_image" => url(drupal_get_path('module', 'ac_composer') . '/assets/img/image_frame.png', array('absolute'=> TRUE)),
			"is_parent" => true,
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
     "js_view" => 'acquiaImageView',
    ),
  );
}

// {{ac_img_frame}} Composer View Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_img_frame_composerView extends acquiaCustomComposerView {
			public function singleParamHtmlHolder($atts, $content) {
				
				 $atts['align'] = isset($atts['align']) ? $atts['align'] : 'left';
				 $template = $this->update_template("src", "<img src='{{src}}' alt=''/>");

				acquia_include('media');
				$default_img_src = acquia_get_empty_thumb(ACQUIA_COMPOSER_IMAGE_STYLE);
				
				$img = "<img src='".url($default_img_src, array('absolute' => TRUE))."' alt=''  />";
				 
				 $output  = "<div class='ac-image'>";
				 $output .= "<div ".$this->class_by_arguments('align' ,$atts).">";
				 $output .= "<div class='ac-image-container' {$template}>{$img}</div>";
				 $output .= "</div>";
				 $output .= "</div>";
				 return $output;
			}
	 }
}