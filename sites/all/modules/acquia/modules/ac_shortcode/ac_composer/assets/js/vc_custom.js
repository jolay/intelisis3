//global newline helper
function acquia_nl2br (str, is_xhtml) 
{
	var breakTag = (is_xhtml || typeof is_xhtml === 'undefined') ? '<br ' + '/>' : '<br>';
	return (str + '').replace(/([^>\r\n]?)(\r\n|\n\r|\r|\n)/g, '$1' + breakTag + '$2');
}

(function($) {

	tinymce = typeof tinymce != 'undefined' ? tinymce : {};
	tinymce.settings = typeof tinymce.settings != 'undefined' ? tinymce.settings : {};
	tinymce.settings.forced_root_block = '';
	
  Drupal.behaviors.ac_composer = {
    attach: function(t, n) {
      var ac_composer = Drupal.settings.ac_composer;
		
      window.ajaxurl = Drupal.settings.basePath + ac_composer.ajaxurl;
      window.i18nLocale = ac_composer.i18nLocale || {};
      window.vc_mapper = jQuery.parseJSON(ac_composer.shortcodes);
      vc = vc || {};
      vc.map = vc_mapper;
			$('.column_toggle').click(function(){
				debug.log($(this));
				$(this).parent('h4').siblings('.wpb_element_wrapper').toggle();
			});
			
    }
  };

})(jQuery);


 (function ($) {
  // Make sure our objects are defined.
  Drupal.acquia = Drupal.acquia || {};
  Drupal.acquia.utils = Drupal.acquia.utils || {};
  Drupal.acquia.Modal = Drupal.acquia.Modal || {};
  Drupal.acquia.composer = Drupal.acquia.composer || {};
  
	Drupal.acquia.utils.acquiaUpdateComposer = function(ajax, response, status){
		if (!_.isObject(Drupal.acquia.composer.currentModelView)) {
			return;
		}
		if (typeof response.output != "undefined") {
			var params = response.output,
			modelView = Drupal.acquia.composer.currentModelView;
			modelView.model.save({params:params});
			modelView.data_saved = true;
			modelView.close();
		}
	}
	
$(function() {
  Drupal.ajax.prototype.commands.acquiaUpdateComposer = Drupal.acquia.utils.acquiaUpdateComposer;
});

})(jQuery);
