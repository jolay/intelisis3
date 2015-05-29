/**
 * @file main Ctools file for acquia commands
 * 
 */

 (function ($) {
  // Make sure our objects are defined.
  Drupal.acquia = Drupal.acquia || {};
  Drupal.acquia.utils = Drupal.acquia.utils || {};
  Drupal.acquia.Modal = Drupal.acquia.Modal || {};
  
	Drupal.acquia.utils.acquiaInsertShortcode = function(ajax, response, status){
		var editor = Drupal.acquia.Modal.currentSettings.editor ?
		Drupal.acquia.Modal.currentSettings.editor : tinymce.activeEditor;
		
		if (response.output != undefined && response.output != '') {
			var sc = response.output;
			var selContent = editor.selection.getContent({format : 'text'});
			sc = sc.replace("\{\{CONTENTHERE\}\}", selContent);
			editor.execCommand("mceInsertContent", false, sc)
		}
	}
	
	
$(function() {
  Drupal.ajax.prototype.commands.acquiaInsertShortcode = Drupal.acquia.utils.acquiaInsertShortcode;
});

})(jQuery);
