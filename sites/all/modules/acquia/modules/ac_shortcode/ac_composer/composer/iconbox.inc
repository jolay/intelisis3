<?php
/**
 * @file
 *  Acquia Composer settings for {{ac_iconbox}} shortcode
 */

function ac_composer_iconbox_composer(){
	 return array(
			'ac_iconbox' => array(
				 'class' => 'acquiaContainerComposerView',
				 'category' => array(t('Utility')),
				 "is_container" => TRUE,
				 'header_title' => TRUE,
				 'element_class' => 'ac_composer_full_controll',
				 'wrapper_class' => 'ac-full-height',
				 "show_settings_on_create" => TRUE,
				 'icon' => 'ac-icon-iconbox',
				 "modal_data" => array(
						'modal_size' => 'small',
				 ),
				'asset' => array(
						'library' => array(
							array('acquia', 'fontello'),
						),
						'css' => array(
							 ACQUIA_COMPOSER_ASSET_PATH . '/css/global.css' => array(),
						),
				),
				'js_view' => 'VcColumnView',
			),
	 );
}
