var ACQUIA = ACQUIA || {};

ACQUIA.behaviors	 = ACQUIA.behaviors || {};
ACQUIA.shortcodes  = ACQUIA.shortcodes || {};
ACQUIA.utils 			 = ACQUIA.utils || {};

(function($) {

	/*-------------------------------------------------------------------------*/
	/* Counter shortcode
	/*-------------------------------------------------------------------------*/
	ACQUIA.behaviors.scCounter = {
		attach: function (context, settings) {
			$('.ac-counter', context).once('ac-counter', function () {
				var displayCounter = $(this).find('.display-counter');
				$(displayCounter).countTo({from: 0, to: $(displayCounter).data('value'), speed: 900});

				if(jQuery().waypoint) {
					$(this).waypoint(function() {
						$(this).find('.display-counter').each(function() {
							var percentage = $(this).data('value');
							$(this).countTo({from: 0, to: percentage, speed: 900});
						});
					}, {
						triggerOnce: true,
						offset: '100%'
					});
				}
			});
		}
	}

	/*-------------------------------------------------------------------------*/
	/* Progress Bar shortcode
	/*-------------------------------------------------------------------------*/
	ACQUIA.behaviors.scProgressBar = {
		attach: function (context, settings) {
			$('.ac-progressbar', context).once('sc-progressbar', function () {
				var elements = $(this).find('.ac-progressbar-item');
					elements.each(function(i) {
						var element = $(this),
						percentage = $(this).data('percentage');
 
						//trigger displaying of thumbnails
						element.on('ac_start_animation', function(){
							$('.progress', this).addClass('ac_start_animation');
							$('.label', this).addClass('ac_start_animation');
							if (jQuery().countTo) {
								$('.units span', this).countTo({
										from: 0,
										to: percentage,
										speed: 1500,
										refreshInterval: 50
								});
							}
						});
					});
			});
		}
	}
	
	/*-------------------------------------------------------------------------*/
	/* Toggle shortcode
	/*-------------------------------------------------------------------------*/
	ACQUIA.behaviors.scToggle = {
		attach: function (context, settings) {
			$('.ac-toggle-container', context).once('sc-toggle', function () {
				
				var $container = $(this),
				tagList = [];
				
				// Check if there are some toggles inside
				var $toggles = $('> .ac-toggle', this);
				if ($toggles.length == 0) {
					return;
				}

				$toggles.find('.ac-toggle-pane')
				.addClass('animated')
				.hide();
				
				if ($container.data('sorting') == 1) {
					var tags = new ACQUIA.shortcodes.scToggleTags({
						container: $container
					});
				}
					
				$toggles.each(function () {
					var toggle = this,
						tab = $(this).find('> .ac-toggle-tab'),
						pane = $(this).find('> .ac-toggle-pane'),
						$link = $('<a class="ac-toggle-title" href="#"></a>')
						.prepend(tab.contents())
						.appendTo(tab)
						.click(function (e) {
							e.preventDefault();
							if ($container.data('toggle-type') == 'accordion'){
								if ($(toggle).is('.ac-toggle-active')){
									return false;
								}
								$toggles
								.removeClass('ac-toggle-active')
								.find('.ac-toggle-pane').slideUp(400);
							}
							
							$(toggle).toggleClass('ac-toggle-active');

							if ($(toggle).is('.ac-toggle-active') && pane.is(':hidden')) {
								pane.slideDown(400);
							}else{
								pane.slideUp(400);
							}
						});
						
						if ($container.data('sorting') == 1) {
							tags.addTags($(toggle).data('tags'));
						}
						
						if ($(toggle).data('open') == 1) {
							$(toggle).addClass('ac-toggle-active').find('.ac-toggle-pane').show();
						}
						
				});
				
				if ($container.data('sorting') == 1) {
					// activate all tags
					tags.activateTag('{all}');
				}

			});
		}
	};

	/*-------------------------------------------------------------------------*/
	/* Tab shortcode
	/*-------------------------------------------------------------------------*/
	Drupal.behaviors.scTabs = {
		attach: function (context, settings) {
			$('.ac-tabs', context).once('sc-tab', function () {
				var $container = $(this),
				$wrap = $('>.ac-tabs-i', this),
				tab_focus = $container.data('init');
				
				// Check if there are some toggles inside
				var $tabs = $('>.ac-tabs-panes >.ac-tab', $wrap);
				if ($tabs.length == 0) {
					return;
				}
				
				// Create the tab column.
				var tab_list = $('<div class="ac-tabs-tabs-wrap"><div class="tabs-i"><ul class="ac-tabs-tabs"></ul></div></div>');

				if ($container.is('.right-position')) {
					tab_list.appendTo($wrap);
				}else {
					tab_list.prependTo($wrap)
				}
				
				tab_list = tab_list.find('.ac-tabs-tabs');
				
				if ($container.is('.titled')) {
					var title = $('> .ac-tabs-title', $wrap).remove();
					tab_list.closest('.ac-tabs-i').prepend(title);
				}
				// Transform each fieldset into a acquia Tab.
				$tabs.each(function () {
					var tab = new ACQUIA.shortcodes.acTab({
						title: $('> .ac-tab-tab', this).remove().html(),
						tab: $(this),
						id: $(this).attr('data-id'),
					});
					tab_list.append(tab.item);
					$(this).data('acTab', tab);
				});

				$('> li:first', tab_list).addClass('first');
				$('> li:last', tab_list).addClass('last');
				
				if ($container.is('.right-position')) {
					var tabClone = tab_list.clone(true, true);
					tabClone.addClass('mobile-visible').prependTo($wrap);
					tab_list.addClass('mobile-hidden');
				}
				
				if (!tab_focus) {
					// If the current URL has a fragment and one of the tabs contains an
					// element that matches the URL fragment, activate that tab.
					if (window.location.hash && $(this).find(window.location.hash).length) {
						tab_focus = $(this).find(window.location.hash).closest('.ac-tab');
					}
					else {
						tab_focus = $('> .ac-tab:first', $wrap);
					}
				}else {
					tab_focus = $('>.ac-tabs-panes >.ac-tab', $wrap).eq(tab_focus-1);
				}
				
				if (tab_focus.length) {
					tab_focus.data('acTab').focus();
				}
				
			});
		}
	};

})(jQuery);

(function($) {

	/*-------------------------------------------------------------------------*/
	/* ACQUIA SHORCODES
	/*-------------------------------------------------------------------------*/
	ACQUIA.shortcodes = {
		
		/**
		 * Toggle by tags
		 */
		scToggleTags : function(settings) {
		
			/**
			 * Init function
			 */
			this.init = function(settings) {
				$.extend(this, settings);
				this.toggles = this.container.find('.ac-toggle'),
				this.tags = [],
				this.tagsHTML = $('<ul />', {class: 'tags-list'})
				.prependTo(this.container);
			},
			
			/**
			 * build tags
			 */
			this.addTags = function (_tags) {
				var self = this,
				re = /[^{}]+/g; 
				_tags = _tags.match(re);
				for (var i=0; i<_tags.length; i++) {
					if(_tags[i].trim() != '' && $.inArray(_tags[i], this.tags) === -1) { 
						this.tags.unshift(_tags[i]);
						var $tagLi = $('<li />', {class: 'tag-item'})
						.appendTo(this.tagsHTML);
						
						$('<a />', {href: '#', 'data-tag': '{' + _tags[i] + '}'})
						.text(_tags[i].replace(new RegExp('(^{)|(}$)','gm'), ''))
						.appendTo($tagLi)
						.click(function (e) {
								e.preventDefault();
								self.filter(this);
								return false;
						});
							
					}
				}
			},
			
			/**
			 * filter out toggles by given element tags
			 */
			this.filter = function (el) {
				var show = this.toggles.filter('[data-tags~="'+$(el).data('tag')+'"]'),
				hide = this.toggles.not('[data-tags~="'+$(el).data('tag')+'"]');
				this.activateTag($(el).data('tag'));
				show.slideDown(400);
				hide.slideUp(400);
			},
			
			 /**
			 * filter out toggles by given element tags
			 */
			this.activateTag = function (tag) {
				this.tagsHTML
				.find('>li').removeClass('active active-filter')
				.find('>a').filter('[data-tag="'+tag+'"]')
				.closest('li').addClass('active active-filter');
			};
			
			this.init(settings);

		},
		
		/**
		 * The acquia tab object represents a single tab within a tab group.
		 *
		 * @param settings
		 *   An object with the following keys:
		 *   - title: The name of the tab.
		 *   - tab: The jQuery object of the tab that is the tab title and pane.
		 */
		acTab : function (settings) {
		
			/**
			 * Init function
			 */
			this.init = function(settings) {
				$.extend(self, settings, Drupal.theme('acTab', settings));
				this.link.click(function () {
					self.focus();
					return false;
				});

				// Keyboard events added:
				// Pressing the Enter key will open the tab pane.
				this.link.keydown(function(event) {
					if (event.keyCode == 13) {
						self.focus();
						// Set focus on the first input field of the visible fieldset/tab pane.
					 // $("fieldset.vertical-tabs-pane :input:visible:enabled:first").focus();
						return false;
					}
				});

			},
			
			/**
			 * Displays the tab's content pane.
			 */
			this.focus = function () {
				this.tab
					.siblings('.ac-tab')
						.each(function () {
							var acTab = $(this).data('acTab');
							acTab.tab.hide();
							acTab.item.removeClass('selected');
						})
						.end()
					.fadeIn();
				this.item.addClass('selected');
				// Mark the active tab for screen readers.
				this.item.closest('.ac-tabs-tabs').find('.ac-active-tab').remove();
				this.link.append('<span class="ac-active-tab element-invisible">' + Drupal.t('(active tab)') + '</span>');
			};

			var self = this;
			this.init(settings);
		},
		
	};

})(jQuery);