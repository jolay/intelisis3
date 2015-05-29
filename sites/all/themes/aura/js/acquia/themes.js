/**
 * @file Adds all theme related js Drupal themes
 */

(function($) {
	/**
	 * Theme function for a Tab title.
	 *
	 * @param o {object}
	 *   An object with the following keys:
	 *   - title: The name of the tab.
	 * @return
	 *   This function has to return an object with at least these keys:
	 *   - item: The root tab jQuery element
	 *   - link: The anchor tag that acts as the clickable area of the tab
	 *       (jQuery version)
	 *   - sub: The jQuery element that contains the tab subtitle
	 */
	Drupal.theme.prototype.acTab = function (o) {
		var tab = {};
		tab.item = $('<li class="ac-tabs-tab" tabindex="-1"></li>')
			.append(tab.link = $('<a href="#"></a>')
				.append(o.title)
			);
		
		if (typeof o.id != "undefined" && o.id != '') {
			tab.item.attr('id', o.id);
		}
		
		if (o.sub != '' && o.sub != undefined) {
			tab.item.find('> a').append(o.sub = $('<span class="subtitle"></span>'));
		}
		return tab;
	};

})(jQuery);