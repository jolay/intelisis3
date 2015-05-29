<?php
/**
 * @file
 *  Acquia Composer Abstract classes
 */

/**
 * Base Acquia Composer class
 *
 * @package AcquiaComposer
 */
class AcquiaComposer {
	/**
	 * Visual composer config
	 *  An array of Composer settings
	 */
	public static $config;
	
	/**
	 * Composer data
	 *  An array of Shortcode's composer list
	 */
	public static $composer = array();
	
	/**
	 * Storage for Acquia Composer layout object
	 */
	private $layout;
	
  /**
   * An array of enabled shortcodes list
   */
	public static $enabled = array();
	
	/**
	 *
	 */
	public function __construct() {
		self::setConfig();
	}

 /**
	* Returns an instantiated AcquiaComposer object
	*/
 public static function getInstance($reset = FALSE) {
	 $instance = &drupal_static(__FUNCTION__, NULL, $reset);
	 
	 if ( !isset($instance) ) {
			$instance = new AcquiaComposer();
	 }

	 return $instance;
 }
 
 /**
	* Returns an instantiated AcquiaComposer object
	*/
 public function setEnabled($shortcodes = array()) {
		$this->enabled = $shortcodes;
 }
 
 /**
	* Returns an instantiated AcquiaComposer object
	*/
	public function getEnabled() {
		return $this->enabled;
	}
 
	/**
	 * init config properties
	 */
	private static function setConfig() {
			$path = drupal_get_path('module', 'ac_composer');
			
			self::$config = array();
			self::$config['assets_dir'] = $path . '/assets';
	}

	/**
	 * returns given param value from $_POST array
	 */
	public function post($param) {
			return isset($_POST[$param]) ? $_POST[$param] : null;
	}
	
	/**
	 * returns given param value from $_GET array
	 */
	public function get($param) {
			return isset($_GET[$param]) ? $_GET[$param] : null;
	}
	
	/**
	 * returns URL of asset directory
	 */
	public function assetURL($asset) {
			return self::$config['APP_DIR'] . self::$config['ASSETS_DIR'] . $asset;
	}
	
	/**
	 * returns path to asset directory
	 */
	public function assetPath($asset) {
			return self::$config['APP_ROOT'] . self::$config['ASSETS_DIR'] . $asset;
	}
	
	/**
	 * returns value from VC config 
	 */
	public static function config($name) {
			return isset(self::$config[$name]) ? self::$config[$name] : null;
	}
}


/**
 * Acquia Composer View Class
 *
 * This is the class for working with shortcode in composer
 * @TODO document
 */
class acquiaComposerView extends AcquiaComposer{

	protected $atts, $settings;
  
  function __construct() {
  }

	/**
	 * Set settings for our shortcode
	 */
	public function setSettings($settings) {
    $this->settings = $settings;
    $this->settings['base'] = $settings['tag'];
		$this->settings['element_class'] = isset($this->settings['element_class']) ? $this->settings['element_class'] :'';
		$this->settings["header_title"] = isset($this->settings["header_title"]) ? $this->settings["header_title"] : TRUE;
	}
	
	/**
	 * Set attributes of our shortcode
	 */
	public function setAttrs($attrs) {
    $this->attrs = $attrs;
	}
	
	/**
	 * helper function for the editor_element function that tells the javascript were to insert the returned content
	 * you need to provide a "key" and a template
	 *
	 * @param string $key a string with argument or content key eg: img_src
	 * @param string $template a template that tells which content to insert. eg: <img src='{{img_src}}' />
	 * @return string
	 */

	function update_template($key, $template)	{
		$data = "data-update_with='$key' data-update_template='".htmlentities($template, ENT_QUOTES)."'";
		return $data;
	}
	
	/**
	 * helper function for the editor_element function that creates the correct classnames
	 * and data attributes for an AviaBuilder Canvas element in your backend
	 *
	 * @param string $classNames a string with classnames separated by coma
	 * @param array $args
	 * @return string
	 */
	function class_by_arguments($classNames, $args, $classNamesOnly = false) {
		$classNames = str_replace(" ","",$classNames);
		$dataString = "data-update_class_with='$classNames' ";
		$classNames = explode(',',$classNames);
		$classString = "class='";
		$classes = "";

		foreach($classNames as $class)
		{
			$classes .= "ac-$class-".str_replace(" ","_",$args[$class])." ";
		}

		if($classNamesOnly) return $classes;
		return $classString .$classes."' ".$dataString;
	}
	
  /**
   * Controls for shortcode
   *
   * This method returns the controls buttons for our
   * shortcode based on controls in shortcode settings properties.
   * @param {strings} $controls
   *    An string representing which controls are available to our shortcode
   * @param {strings} $extended_css
   *    An string of classes to add to controls wrapper
   */
   public function getColumnControls($controls, $extended_css = '') {
    $controls_start = '<div class="controls controls_element'.(!empty($extended_css) ? " {$extended_css}" : '').'">';
    $controls_end = '</div>';

    $controls_add = '';//' <a class="column_add" href="#" title="'.sprintf(__('Add to %s', 'js_composer'), strtolower($this->settings('name'))).'"></a>';
    $controls_edit = ' <a class="column_edit" href="#" title="'.sprintf(t('Edit %s'), strtolower($this->settings('title'))).'"></a>';
    $controls_delete = ' <a class="column_clone" href="#" title="'.sprintf(t('Clone %s'), strtolower($this->settings('title'))).'"></a> <a class="column_delete" href="#" title="'.sprintf(t('Delete %s'), strtolower($this->settings('title'))).'"></a>';
    $controls_toggle = '<a class="column_toggle" href="#" title="'.sprintf(t('Toggle %s'), strtolower($this->settings('title'))).'"></a>';

    $column_controls_full = $controls_start . $controls_toggle .  $controls_add . $controls_edit . $controls_delete . $controls_end;
    $column_controls_size_delete = $controls_start . $controls_toggle . $controls_delete . $controls_end;
    $column_controls_popup_delete = $controls_start . $controls_toggle . $controls_delete . $controls_end;
    $column_controls_edit_popup_delete = $controls_start . $controls_toggle . $controls_edit . $controls_delete . $controls_end;

    if ( $controls == 'popup_delete' ) {
        return $column_controls_popup_delete;
    } else if ( $controls == 'edit_popup_delete' ) {
        return $column_controls_edit_popup_delete;
    } else if ( $controls == 'size_delete' ) {
        return $column_controls_size_delete;
    } else if ( $controls == 'popup_delete' ) {
        return $column_controls_popup_delete;
    } else if ($controls == 'add') {
        return $controls_start . $controls_add . $controls_end;
    } else {
        return $column_controls_full;
    }
   }
   
  /**
   *
   * @param {string} $width
   *  width of element in string format e.g. vc_span2
   */
  public function getElementHolder($width) {
    
    acquia_include('utility', 'ac_composer');
    
    $output = '';
    $column_controls = $this->getColumnControls($this->settings('controls'));
		
		$classes = array('wpb_'.$this->settings["base"]);
		$classes[] = 'wpb_content_element';
		$classes[] = 'wpb_sortable';
		$classes[] = isset($this->settings['header_title']) &&
		$this->settings['header_title'] != FALSE ? 'wpb_header_enabled' : NULL;
		$classes[] = isset($this->settings["class"]) ? $this->settings["class"] : NULL;
		$classes = array_filter($classes, 'strlen');
		$classes = implode(' ', $classes);
		
    $output .= '<div data-element_type="'.$this->settings["base"].'" class="'.$classes.'">';
		if (isset($this->settings['header_title']) && $this->settings['header_title'] != FALSE) {
				$output .= '<h4 class="header-title">'.$this->iconTemplate() . $this->settings['title'].'</h4>';
		}
    $output .= str_replace("%column_size%", ac_composer_class_to_col_with($width), $column_controls);
    $output .= '<div class="wpb_element_wrapper '.$this->settings("wrapper_class").'">';
    $output .= '%wpb_element_content%';
    $output .= '</div>'; // <!-- end .wpb_element_wrapper -->';
    $output .= '</div>'; // <!-- end #element-'.$this->shortcode.' -->';
    return $output;
  }
  
  public function contentAdmin($atts, $content) {
		// we parse shortcode values as an array not as a shortcode string so return empty
    acquia_include('wp_bridge', 'ac_composer');
    
    $element =  $this->settings['tag'];
    $output = $custom_markup = $width = $el_position = '';

    if ( $content != NULL ) { $content = wpautop(stripslashes($content)); }

    if ( isset($this->settings['params']) ) {
        $shortcode_attributes = array('width' => '1/1');
        foreach ( $this->settings['params'] as $param ) {
            if ( $param['param_name'] != 'content' ) {
                if ( isset($param['value']) ) {
                    $shortcode_attributes[$param['param_name']] = is_string($param['value']) ? t($param['value']) : $param['value'];
                } else {
                    $shortcode_attributes[$param['param_name']] = '';
                }
            } else if ( $param['param_name'] == 'content' && $content == NULL ) {
                $content = t($param['value']);
            }
        }
        
        extract(shortcode_atts(
            $shortcode_attributes
            , $atts));
        $elem = $this->getElementHolder($width);
        if(isset($atts['el_position'])) $el_position = $atts['el_position'];
        $iner = $this->outputTitle($this->settings['title']);
        foreach ($this->settings['params'] as $param) {
            $param_value = isset($$param['param_name']) ? $$param['param_name'] : '';
            if ( is_array($param_value)) {
                // Get first element from the array
                reset($param_value);
                $first_key = key($param_value);
                $param_value = $param_value[$first_key];
            }
            $iner .= $this->singleParamHtmlHolder($param, $param_value);
        }
        $elem = str_ireplace('%wpb_element_content%', $iner, $elem);
        $output .= $elem;
    } else {
        //This is used for shortcodes without params (like simple divider)
        // $column_controls = $this->getColumnControls($this->settings['controls']);
        $width = '1/1';

        $elem = $this->getElementHolder($width);

        $inner = '';
        if ( isset($this->settings["custom_markup"]) && $this->settings["custom_markup"] != '' ) {
            if ( $content != '' ) {
                $custom_markup = str_ireplace("%content%", $content, $this->settings["custom_markup"]);
            } else if ( $content == '' && isset($this->settings["default_content_in_template"]) && $this->settings["default_content_in_template"] != '' ) {
                $custom_markup = str_ireplace("%content%", $this->settings["default_content_in_template"], $this->settings["custom_markup"]);
            }
            //$output .= do_shortcode($this->settings["custom_markup"]);
            $inner .= do_shortcode($custom_markup);
        }
        $elem = str_ireplace('%wpb_element_content%', $inner, $elem);
        $output .= $elem;
    }
    return $output;
  }

  public function singleParamHtmlHolder($param, $value) {
      $output = '';
          // Compatibility fixes
      $old_names = array('yellow_message', 'blue_message', 'green_message', 'button_green', 'button_grey', 'button_yellow', 'button_blue', 'button_red', 'button_orange');
      $new_names = array('alert-block', 'alert-info', 'alert-success', 'btn-success', 'btn', 'btn-info', 'btn-primary', 'btn-danger', 'btn-warning');
      $value = str_ireplace($old_names, $new_names, $value);
          //$value = __($value, "js_composer");
          //
      $param_name = isset($param['param_name']) ? $param['param_name'] : '';
      $type = isset($param['type']) ? $param['type'] : '';
      $class = isset($param['class']) ? $param['class'] : '';

      if ( isset($param['holder']) === true && $param['holder'] !== 'hidden' ) {
          $output .= '<'.$param['holder'].' class="wpb_vc_param_value ' . $param_name . ' ' . $type . ' ' . $class . '" name="' . $param_name . '">'.$value.'</'.$param['holder'].'>';
      } elseif(isset($param['holder']) === true && $param['holder'] == 'input') {
          $output .= '<'.$param['holder'].' readonly="true" class="wpb_vc_param_value ' . $param_name . ' ' . $type . ' ' . $class . '" name="' . $param_name . '" value="'.$value.'">';
      } elseif(isset($param['holder']) === true && in_array($param['holder'], array('img', 'iframe'))) {
          $output .= '<'.$param['holder'].' class="wpb_vc_param_value ' . $param_name . ' ' . $type . ' ' . $class . '" name="' . $param_name . '" src="'.$value.'">';
      }

      if(isset($param['admin_label']) && $param['admin_label'] === true) {
          $output .= '<span class="vc_admin_label admin_label_'.$param['param_name'].(empty($value) ? ' hidden-label' : '').'"><label>'.__($param['heading'], 'js_composer').'</label>: '.$value.'</span>';
      }

      return $output;
  }
  
  /**
   * Get Shortcode template
   */
  public function template($content = '') {
    return $this->contentAdmin($this->atts, $content);
  }
	
  /**
   * Get Shortcode settings by name
   */
	public function settings($name) {
		return isset($this->settings[$name]) ? $this->settings[$name] : null;
	}
	
  protected function outputTitle($title) {
		if (!isset($this->settings['header_title']) || $this->settings['header_title'] == FALSE) {
			$title = '<h4 class="wpb_element_title">'.t($title).'</h4>';
		}else{
			$title = '';
		}
		return $title;
  }
	
  protected function iconTemplate() {
		$icon = isset($this->settings['icon']) ?  $this->settings['icon'] : 'icon-'.str_replace('_', '-', $this->settings['base']);
		if (isset($this->settings['icon'])) {
			$icon = '<i class="ac-icon '.$this->settings['icon'].'"></i>';
		}else if (isset($this->settings['icon_image'])) {
			$icon = '<img class="ac-icon" src="'.$this->settings['icon_image'].'"/>';
		}else {
			$icon = '<i class="ac-icon icon-'.str_replace('_', '-', $this->settings['base']).'"></i>';
		}
		return  $icon;
  }
}



/**
 * Acquia Container Composer View Class
 *
 * This is the class for working with shortcode in composer
 * @TODO document
 */
class acquiaContainerComposerView extends acquiaComposerView {
	public function __construct($settings = array()) {
		parent::__construct($settings);
		acquia_include('utility', 'ac_composer');
		acquia_include('wp_bridge', 'ac_composer');
	}
	
	protected  $predefined_atts = array(
		'el_class' => '',
		'width' => '',
		'title' => ''
	);
	
	public function contentAdmin($atts, $content = null) {
		acquia_include('utility', 'ac_composer');
		acquia_include('wp_bridge', 'ac_composer');
		acquia_include('process', 'ac_shortcode');
		
		$width = $el_class = '';
		extract(shortcode_atts($this->predefined_atts, $atts));
		$output = '';

		$column_controls = $this->getColumnControls($this->settings('controls'));
		$column_controls_bottom =  $this->getColumnControls('add', 'bottom-controls');

		if ( $width == 'column_14' || $width == '1/4' ) {
				$width = array('vc_span3');
		}
		else if ( $width == 'column_14-14-14-14' ) {
				$width = array('vc_span3', 'vc_span3', 'vc_span3', 'vc_span3');
		}

		else if ( $width == 'column_13' || $width == '1/3' ) {
				$width = array('vc_span4');
		}
		else if ( $width == 'column_13-23' ) {
				$width = array('vc_span4', 'vc_span8');
		}
		else if ( $width == 'column_13-13-13' ) {
				$width = array('vc_span4', 'vc_span4', 'vc_span4');
		}

		else if ( $width == 'column_12' || $width == '1/2' ) {
				$width = array('vc_span6');
		}
		else if ( $width == 'column_12-12' ) {
				$width = array('vc_span6', 'vc_span6');
		}

		else if ( $width == 'column_23' || $width == '2/3' ) {
				$width = array('vc_span8');
		}
		else if ( $width == 'column_34' || $width == '3/4' ) {
				$width = array('vc_span9');
		}
		else if ( $width == 'column_16' || $width == '1/6' ) {
				$width = array('vc_span2');
		} else if ( $width == 'column_56' || $width == '5/6' ) {
				$width = array('vc_span10');
		} else {
				$width = array('');
		}
		
		for ( $i=0; $i < count($width); $i++ ) {
				$output .= '<div '.$this->mainHtmlBlockParams($width, $i).'>';
				$output .= str_replace("%column_size%", ac_composer_class_to_col_with($width[$i]), $column_controls);
				if (isset($this->settings['header_title']) && $this->settings['header_title'] != FALSE) {
					$output .= '<h4 class="header-title">'.$this->iconTemplate() . $this->settings['title'].'</h4>';
				}
				$output .= '<div class="wpb_element_wrapper">';
				$output .= '<div '.$this->containerHtmlBlockParams($width, $i).'>';
				$output .= do_shortcode( $content );
				$output .= '</div>';
				if ( isset($this->settings['params']) ) {
						$inner = '';
						foreach ($this->settings['params'] as $param) {
								$param_value = isset($$param['param_name']) ? $$param['param_name'] : '';
								if ( is_array($param_value)) {
										// Get first element from the array
										reset($param_value);
										$first_key = key($param_value);
										$param_value = $param_value[$first_key];
								}
								$inner .= $this->singleParamHtmlHolder($param, $param_value);
						}
						$output .= $inner;
				}
				$output .= '</div>';
				$output .= str_replace("%column_size%", ac_composer_class_to_col_with($width[$i]), $column_controls_bottom);
				$output .= '</div>';
		}
		return $output;
	}
	 
	public function mainHtmlBlockParams($width, $i) {
		$classes = array('wpb_sortable');
		$classes[] = isset($this->settings['header_title']) &&
		$this->settings['header_title'] != FALSE ? 'wpb_header_enabled' : NULL;
		$classes[] = $this->settings['element_class'];
		$classes = array_filter($classes, 'strlen');
		$classes = implode(' ', $classes);
	
		return 'data-element_type="'.$this->settings["base"].'" class="'.$classes.'"'.$this->customAdminBlockParams();
	}
	public function containerHtmlBlockParams($width, $i) {
		return 'class="wpb_column_container vc_container_for_children"';
	}

	protected function outputTitle($title) {
		return  '';
	}

	public function customAdminBlockParams() {
		return '';
	}

	public function getColumnControls($controls, $extended_css = '') {
		$controls_start = '<div class="controls controls_column'.(!empty($extended_css) ? " {$extended_css}" : '').'">';
		$controls_end = '</div>';
		
		if ($extended_css=='bottom-controls') $control_title = sprintf(__('Append to this %s', 'js_composer'), strtolower($this->settings('title')));
		else $control_title = sprintf(__('Prepend to this %s', 'js_composer'), strtolower($this->settings('title')));
		
		$controls_add = ' <a class="column_add" href="#" title="'.$control_title.'"></a>';
		$controls_edit = ' <a class="column_edit" href="#" title="'.sprintf(__('Edit this %s', 'js_composer'), strtolower($this->settings('title'))).'"></a>';
		$controls_clone = '<a class="column_clone" href="#" title="'.sprintf(__('Clone this %s', 'js_composer'), strtolower($this->settings('title'))).'"></a>';
	
		$controls_delete = '<a class="column_delete" href="#" title="'.sprintf(__('Delete this %s', 'js_composer'), strtolower($this->settings('title'))).'"></a>';
		$controls_toggle = '<a class="column_toggle" href="#" title="'.sprintf(t('Toggle %s'), strtolower($this->settings('title'))).'"></a>';

		return $controls_start . $controls_toggle .  $controls_add . $controls_edit . $controls_clone . $controls_delete . $controls_end;
	}

}

/**
 *
 */
class acquiaCustomComposerView extends acquiaComposerView{
  public function contentAdmin($atts, $content) {
		$width = '1/1';

		$elem = $this->getElementHolder($width);

		$inner = $this->singleParamHtmlHolder($atts, $content);
		$elem = str_ireplace('%wpb_element_content%', $inner, $elem);
		return $elem;
  }
}

/**
 * Acquia Composer templates class
 *
 * Add/Edit/Delete Composer template from DB
 * @package AcquiaComposer
 */
class AcquiaComposerTemplates{
  /**
   * Whther reset cached tempaltes data from DB or not
   */
  protected $reset = FALSE;
	
	/**
	 * Constructor Method
	 */
	public function __construct($reset = FALSE) {
		$this->reset = $reset;
		return $this;
	}
	
	/**
   * Get Saved Templates list from DB
   */
  public function GetSavedTemplates() {
    $templates = &drupal_static(__FUNCTION__, NULL, $this->reset);
    
    if (!isset($templates)) {
      $templates = db_select('{'.ACQUIA_COMPOSER_TEMPLATES_TABLE.'}', 'ac')
      ->fields('ac')
      ->execute()
      ->fetchAll(PDO::FETCH_ASSOC);
  
      if (!count($templates)) {
        $templates = array();
      }
    }
    return $templates;
  }
	
	/**
	 * Save Template into Acquia Composer Templates table
	 * @param {array} $template
	 * 		An array of template details including below keys:
	 * 		1-	%tid: Template id - in case of updating saved template
	 * 		1-	%title: Title of template
	 * 		2-	%template: Tempalte content
	 */
	public function save($template){
    $fields = array();
    foreach ($this->db_fields() as $field_name) {
      $fields[$field_name] = $template[$field_name];
    }

    if (isset($template['tid'])) {
      db_update(ACQUIA_COMPOSER_TEMPLATES_TABLE)
        ->fields($fields)
        ->condition('tid', $template['tid'])
        ->execute();
    }
    else {
      $template['tid'] = db_insert(ACQUIA_COMPOSER_TEMPLATES_TABLE)
        ->fields($fields)
        ->execute();
    }
		return $template['tid'];
  }
	
	/**
	 * Delete Template From Acquia Composer Templates table
	 * @param {int} $tid
	 * 		Template ID
	 */
	public function delete($tid){
    return db_delete(ACQUIA_COMPOSER_TEMPLATES_TABLE)
      ->condition('tid', $tid)
      ->execute();
  }
	
	/**
	 * Get Template from Acquia Composer Templates table
	 * @param {int} $tid
	 * 		Template id
	 */
	public function get_template_by_id($tid){
		if (!is_numeric($tid)) {
			return;
		}
		
    $templates = &drupal_static(__FUNCTION__, array(), $this->reset);

    if (!isset($templates[$tid])) {
      $templates[$tid] = db_select('{'.ACQUIA_COMPOSER_TEMPLATES_TABLE.'}', 'ac')
      ->fields('ac')
			->condition('tid', $tid)
      ->execute()
      ->fetchAll(PDO::FETCH_ASSOC);
			
			$templates[$tid] = array_shift($templates[$tid]);
    }
    
    return $templates[$tid];
	}
	
	/**
	 * Getter method to get ac_composer templates table fields
	 */
  public function db_fields() {
    return array('tid', 'title', 'template');
  }
}
