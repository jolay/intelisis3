<?php

/**
 * @file
 * Contains the theme settings form elements for the global extension.
 */

/**
 * Implements hook_extension_EXTENSION_theme_settings_form_alter().
 */
function aura_extension_shortcodes_settings_form($element, &$form, $form_state) {
  if (module_exists('ac_shortcode')) {
    acquia_include('utility', 'ac_shortcode');
    acquia_t_include('themes');
    acquia_theme_settings_wrap_acquia($element);
    
    $shortcodes = ac_shortcode_get_sidewide_settings();
  
    $element['acquia']['shortcodes'] = array(
     '#type' => 'container',
     '#title' => t('Shortcodes sitewide settings'),
     '#description' => t('Here you can set shortcodes enabled shortcodes default setttings.'),
    );
    
    // save values
    $values = acquia_theme_get_settings('shortcodes', null);
    if (!empty($shortcodes)) {
      foreach ($shortcodes as $tag => $def) {
        $element['acquia']['shortcodes'][$tag] = array(
          '#type' => 'fieldset',
          '#title' => isset($def['title']) ? t($def['title']) : '',
          '#description' => isset($def['description']) ? t($def['description']) : '',
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );
        foreach ($def['settings'] as $field_name => $attrs) {
          $attrs['#default_value'] = isset($values[$field_name]) ? $values[$field_name] : null;
          $attrs['#parents'] = array('acquia', 'shortcodes', $field_name);
          $element['acquia']['shortcodes'][$tag][$field_name] = $attrs;
        }
       
      }
     
    }
   
  }
 
 return $element;
}
