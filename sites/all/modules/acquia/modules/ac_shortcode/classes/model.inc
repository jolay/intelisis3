<?php
/**
 * @file
 *  Model class for Acquia shortcodes
 */

/**
 * Acquia Shortcode Model class
 *
 * @package AcquiaComposer
 */
abstract class acquiaShortcodeModel{
  /**
   * Shortcode settings array consists of below values:
   *  %tag : Shortcode tag
   *  %title: Shortcode title
   *  %description: Shortcode description
   *  %category: An array of categories that this shortcode belongs to
   *  %nested shortcodes: Array of shortcode tags that can be nested
   *    in this shortcode and processed as a value of current shortcode
   *  %hidden: A Boolean value indicating whether this shortcode must
   *    be hidden in the shortcodes list or not. it works in conjunction
   *    with %enabled key.
   *  %enabled: Array of shortcode tags and a Boolean value that represents
   *    the circumstances that the shortcode can be enabled based on the
   *    status of other shortcodes.
   */
  protected $settings;
  
  /**
   * Array of error messages that generated in validation or other process of this shortcode
   */
  protected $error_messages;
  
  /**
   * The name of View class for this model
   */
  protected $viewClass = 'acquiaComposerView';
  
  /**
   * Array of shortcode asset files
   */
  protected $assets;
  
  function __construct($settings) {
    // validate shortcode settings
    $this->validate_settings();
    $this->settings = $settings;
  }
  
  /**
   * Validates Shortcode settings values and populates $error_messages property
   */
  protected function validate_settings(){
    if ( !isset($this->settings['title']) ) {
      $error_messages[] = t('Acquia Shortcode - %shortcode: A shortcode must have title!', array('%shortocde' => get_class($this)));
    }
    
    if ( !isset($this->settings['tag']) ) {
      $error_messages[] = t('Acquia Shortcode - %shortcode: A shortcode must have shortcode tag!', array('%shortocde' => get_class($this)));
    }
  }
  
  /**
   * Returns an array of wysiwyg editor js settings
   */
  protected function assets() {
   $this->assets = array(
     'js' => array(),// js files
     'css' => array(),// CSS files
     'libs' => array(),// Registered Drupal libraries
   );
  }
  
  /**
   * Returns an array of wysiwyg editor js settings
   */
  protected function wysiwyg_settings() {}
  
  /**
   * Implements edit form of shortcode
   *   this settings will be used in the shortcode selector button of enabled wysiwyg editor.
   * @param {array} $form
   *   An array of a Drupal form elements
   * @param {array} $form_state
   *   An array of a current form state
   */
  protected function edit_form($form, &$form_state) {}
  
  /**
   * Implements sitewide settings form of shortcode
   *   this form will be used in theme settings page for populating default value
   *   of fields in shortcodes which accept a sitewide settings value
   * @return {array} Drupal form array
   */
  protected function sitewide_settings_form() {}
  
  /**
   * Preprocess shortcode values from shortcode form before making shortcode string
   * @param {array} $values
   *   A reference to shortcode form values
   */
  protected function preprocess_shortcode(&$values) {}
  
  /**
   * Process shortcode string
   *   This methods returns HTML Code for frontend representation of your shortcode.
   * @param {array} $attrs
   *   An array of shortcode attributes
   * @param {string} $text
   *   A string of shortcode inner content
   * @param {string} $shortcode
   *   Shortcode tag
   */
  protected function process_shortcode($attrs, $text = null, $shortcode = '') {}

  /**
   * Getter method to get shortcode assets
   */
  public function get_assets() {
   return $this->assets;
  }
  
  
  public function settings($name) {
    return isset($this->settings[$name]) ? $this->settings[$name] : null;
  }
  
}

/**
 * Acquia Shortcode dummy class
 *
 * This class is an empty class for shortcodes that have no predefined defined class
 */
class AcquiaShortcodeDummy extends acquiaShortcodeModel {
	public function __construct($settings) {
		$this->settings = $settings;
		$this->shortcode = $this->settings['base'];
	}

	protected function content( $atts, $content = null ) {
		return ''; // this method is not used
	}
}