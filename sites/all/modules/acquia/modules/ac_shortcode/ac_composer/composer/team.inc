<?php

/**
 * @file
 *  Acquia Composer settings for {{ac_team}} and {{ac_team_icon}} shortcode
 */
function ac_composer_team_composer(){
		return array(
				'ac_team' => array(
						"class" => "ac_ac_team_composerView",
						'element_class' => 'ac_composer_full_controll',
						'wrapper_class' => 'ac-full-height ac-no-icon',
						"show_settings_on_create" => TRUE,
						"icon" => "ac-icon-team",
						"category" => array(__('Content', 'js_composer')),
						"params" => array(
							array(
								"type" => "textfield",
								"heading" => __("Extra class name", "js_composer"),
								"param_name" => "el_class",
								"description" => __("If you wish to style particular content element differently, then use this field to add a class name and then refer to it in your css file.", "js_composer")
							)
						),
						"js_view" => 'acquiaImageView',
						
				),
		);
}


// {{ac_img_frame}} Composer View Class
if (class_exists('acquiaCustomComposerView')) {
	 class ac_ac_team_composerView extends acquiaCustomComposerView {
			public function singleParamHtmlHolder($atts, $content) {
				$name_template = $this->update_template("name", '<h4 class="name">{{name}}</h4>');
				$job_template = $this->update_template("job", '<div class="job">{{job}}</span>');
				$pic_template = $this->update_template("src", "<img src='{{src}}' alt=''/>");

				$default_img_src = drupal_get_path('module', 'ac_shortcode') . '/shortcodes/assets/images/placeholder.jpg';
				$img = "<img src='".url($default_img_src, array('absolute' => TRUE))."' alt=''  />";
				 
				$output = "<div class='ac-team-item wpb_header_enabled clearfix'>";
				$output .= "  <div class='ac-team_image' {$pic_template}>{$img}</div>";
				$output .= "  <div class='ac-team_name' {$name_template}><h4 class='name'>".t('Team Member Name')."</h4></div>";
				$output .= "  <div class='ac-team_job' {$job_template}><span class='job'>".t('Team Member Job title.')."</span></div>";
				$output .= "</div>";
				
				return $output;
			}
	 }
}