/**
 * ACQUIA contains the functionality for initializing all the main scripts in the
 * site and also some helper functions.
 *
 * @type {Object}
 * @author Carlo Carlos
 */

var ACQUIA = ACQUIA || {};

ACQUIA.behaviors = ACQUIA.behaviors || {};
ACQUIA.utils = ACQUIA.utils || {};
ACQUIA.g = ACQUIA.g || {};

var container = '',
		$document = jQuery(document),
		$window = jQuery(window),
		$body = jQuery('body');
/**
 * Core behavior for Acquia based themes
 *
 */
Drupal.behaviors.acquia = {
  attach: function (t, n) {
		ACQUIA.attachBehaviors(t, n);
  }
};


(function($) {

	/**
	 * minslider plugin
	 */
	Drupal.behaviors.minSlider = {
		attach: function(t, n) {
			// min-slider
			if (!jQuery().responsiveSlides) {
				return
			}
			$(".ac-min-slider", t).each(function(){

				var pager = ($(this).attr('data-pager')) && ($(this).attr('data-pager') == 'false') ? false : true,
					nav = ($(this).attr('data-nav')) && ($(this).attr('data-nav') == 'false') ? false : true,
					auto = ($(this).attr('data-auto')) && ($(this).attr('data-auto') == 'true') ? true : false;

				$(this).find('.m-slides').responsiveSlides({
					auto: auto,             // Boolean: Animate automatically, true or false
					speed: 500,            // Integer: Speed of the transition, in milliseconds
					timeout: 4000,          // Integer: Time between slide transitions, in milliseconds
					pager: pager,           // Boolean: Show pager, true or false
					nav: nav,             // Boolean: Show navigation, true or false
					random: false,          // Boolean: Randomize the order of the slides, true or false
					pause: false,           // Boolean: Pause on hover, true or false
					pauseControls: true,    // Boolean: Pause when hovering controls, true or false
					prevText: "Previous",   // String: Text for the "previous" button
					nextText: "Next",       // String: Text for the "next" button
					maxwidth: "",           // Integer: Max-width of the slideshow, in pixels
					navContainer: "",       // Selector: Where controls should be appended to, default is after the 'ul'
					manualControls: "",     // Selector: Declare custom pager navigation
					namespace: "rslides",   // String: Change the default namespace used
					before: function(){},   // Function: Before callback
					after: function(){}     // Function: After callback
				});
			});
		}
	};

	/**
	 * portfolio behaviors
	 */
	Drupal.behaviors.portfolio = {
		attach: function(t, n) {
			// Fade in bottom - View
			if ($('.ac-view-fade-in-bottom', t).length) {
					var containerFade = $('.ac-view-fade-in-bottom', t),
						setInfoPos = function(){
							containerFade.imagesLoaded(function () {
								$('.ac-view-fade-in-bottom > .ac-col', t).each(function() {
									 var $this = $(this),
											mediaH = $this.find('.img-wrap').height(),
											infoH = $this.find('.o-info').outerHeight(),
											featuresH = $this.find('.ac-f').height(),
											marginBottom = ((mediaH-(infoH + featuresH)) /2);
										if (marginBottom >0) {
											$this.find('.ac-f').css('marginBottom',marginBottom);
										}
								});
							});
						};
					
					setInfoPos();
					$window.on("debouncedresize", function(){
						setInfoPos();
					});
			}
		}
	};
	
	/**
	 * misc plugins need to be as behaviors
	 */
	Drupal.behaviors.fancySelect = {
		attach: function(t, n) {
			if (jQuery().acquiaFancySelect) {
				$('select').once('ac-fancySelect', function () {
					if (!$(this).is('.no-fancy-select')){ 
						$(this).acquiaFancySelect();
					}
				});
			}
		}
	};

})(jQuery);

(function($) {

	/**
	 * Attach Acquia behaviors.
	 */
	ACQUIA.attachBehaviors = function (context, settings) {
		$.each(ACQUIA.behaviors, function() {
			this.attach(context, settings);
		});
	};

	/**
	 * Fire ACQUIA base functions and plugins
	 */
	ACQUIA.behaviors.init = {
		attach: function(t, n) {
			// Init Settings Here
			var defaults = {
			};
			
			n.acquia = $.extend(true, defaults, n.acquia || {});
			ACQUIA.init.initSite();
			// preloader
			ACQUIA.g.preloader = Drupal.settings.ACQUIA.preloader
		}
	};

	
	/**
	 * Contains the init functionality.
	 * @type {Object}
	 */
	ACQUIA.init = {

		/**
		 * Inits all the main functionality. Calls all the init functions.
		 */
		initSite: function() {
			var init = this,
				clickMsg = '';
			
			// mobile detection based on screen size
			ACQUIA.utils.isMobile();
			
			// mobile detection based on screen size
			ACQUIA.setDeviceWidth();
			
			// add dropdown
			init.Dropdownmenu();
			
			// add sideDropdownmenu
			init.sideDropdownmenu();
		
			// responsive menu.
			$('body').once('mobile-menu', function(){
				init.mobileMenu();
			});
			
			// adjust page title
			init.adjustPageTitle();
			
			// stickToContainerFooter
			init.stickToContainerFooter();
			
			// parallax effects
			init.parallax();
			
			// Init full width background image fallback for IE browser
			init.bgfullWidthFallback();	
			
			// Init Page Title Parallax
			init.parallaxTitle();
			
			// Init effects
			$('body').once('ac-effects', function(){
				init.effects();
			});

			// fullContainerWidth
			init.fullContainerWidth();			
			
			// popUp
			init.popUp();
			
			// fancy search
			$('body').once('ac-fancy-search', function(){
				init.headerSearch();
			});
			
			// scrollTop
			init.scrollTop();

			// misc plugins
			$('body').once('topbar-toggle', function(){
				init.topbar();	
			});

			// Grid
			init.acquiaGrid();	

			// misc plugins
			$('body').once('ac-plugins', function(){
				init.plugins();
			});

		},
		/**
		 * Acquia Grid
		 */
		acquiaGrid: function() {
			// Main Grid
			$(".ac-grid").acquiaGrid({
				doWidth: true,
				doHeight: true,
				borders: true,
				colSel: ".ac-grid-item",
				contentSel: ".g-i-i",
				borderSel: ".g-i",
				responsiveWidth: 180,
				normalize: true,
				lazyload : true,
			});
		},
		/**
		 * Scroll To Top
		 */
		topbar: function() {
				var topBar = $("#l-topbar");
				topBar.append($("<span class='act'></span>"));
				
				var topSpan = $("> span", topBar);

				$(" > span", topBar).on("click", function(){
					var $_this = $(this);
					if($_this.hasClass("act")){
						$_this.removeClass("act");
						topBar.removeClass("top-bar-hide");
						topBar.animate({
							"margin-top": 0
						}, 200);
						$.cookie('top-hide', 'false', {expires: 1, path: '/'});
					}else{
						$_this.addClass("act");
						topBar.addClass("top-bar-hide");
						topBar.animate({
							"margin-top": -topBar.height()
						}, 200);
						$.cookie('top-hide', 'true', {expires: 1, path: '/'});
					}
				});
				if(topSpan.hasClass("act")){
					topBar.addClass("top-bar-hide");
				}else{
					topBar.removeClass("top-bar-hide");
				}
				
				function mobileTopBar(){
					if ($window.width() < ACQUIA.g.switchWidth) {
						if (topSpan.hasClass("act")){
							topBar.animate({
								"margin-top": -topBar.height()
							}, 200, function() {
								topBar.css({"visibility": "visible", "opacity": "1"});
							});
						}
					}else{
						topBar.animate({
							"margin-top": 0
						}, 200, function() {
							topBar.css({"visibility": "visible", "opacity": "1"});
						});
					}
				};
				
				$window.on("debouncedresize", function(){
					mobileTopBar();
				});
				
			if ($window.width() < ACQUIA.g.switchWidth) {
				if ($.cookie('top-hide') == "false"){
					topBar.removeClass("top-bar-hide");
					topSpan.removeClass("act");
					topBar.animate({
						"margin-top": 0
					}, 200, function() {
						topBar.css({"visibility": "visible", "opacity": "1"});
					});
				}else {
					topBar.animate({
						"margin-top": -topBar.height()
					}, 200, function() {
						topBar.css({"visibility": "visible", "opacity": "1"});
					});
				};
			}
		},

			/**
		 * Scroll To Top
		 */
		scrollTop: function() {
			// BACK TO TOP
			var scroll = function(){
				var sc = $window.scrollTop();
							
				if (sc > 300) {
					$('#scroll-top').stop().animate({
						'bottom': '10px',
					}, 300, "easeOutQuart");
				} else if (sc < 300) {
					$('#scroll-top').stop().animate({
						'bottom': '-40px',
					}, 300, "easeInQuart");
				}
			};
			
			if ($('#scroll-top').length > 0) {
				$window.scroll(function() {
					scroll();
				});
				$("#scroll-top").click(function(e) {
					e.preventDefault();
					$("html, body").animate({ scrollTop: 0 }, "slow");
					return false;
				});
			}

		},
		/**
		 * Mini Header Search Form
		 */
		headerSearch : function() {
			var $headerSearch = $('.ac-header-search'),
			subHeader = $('.header-sub-i').length > 0 ? true : false;

			if ($('.ac-header-search').length ==0) {
				return;
			}
			
			var searchPos = function(){
				$top = $headerSearch.closest('.container').outerHeight();
				if (!subHeader) {
					$top = $top/2;
				}
				$(".form-search", $headerSearch).css("top", $top);
			};

			searchPos();
			$window.scroll(function() {
				"use strict";
				searchPos();
			});
		
			$(".form-search", $headerSearch).fadeOut(100, function(){
				$(".form-search", $headerSearch)
					.css("visibility", "visible");
			}).keyup(function(e){
					if (e.keyCode == 13) {
						$(this).closest('form').submit();
					}
			});
				
			
			$('body').on("click", function(e){
				var target = $(e.target);
				if(!target.is(".ac-header-search .form-search")) {
					$(".ac-header-search").removeClass("on");
					$(".ac-header-search .form-search").fadeOut(100);
				}
			})
			
			$(".ac-header-search .form-submit").on("click", function(e){
				var $_this = $(this);
				container = $_this.closest('.ac-header-search');
				e.preventDefault();
				e.stopPropagation();
				if(container.hasClass("on")){
					container.removeClass("on");
					container.find(".form-search").fadeOut(200);
				}else{
					container.addClass("on");
					container.find(".form-search").fadeIn(250);
				}
			});
		},
		/**
		 * Inits Page Title Parallax
		 */
		fullContainerWidth : function(){
			if( $(".ac-full-container-width").length > 0){
				var setWidth = function(){
					var fullWidth = $('.l-page').width();
					$(".ac-full-container-width").each(function(){
						// reset margin
						$(this).css('margin', 0);
						$(this).closest('.ac-fullwidth').find('>.col-inner').css('padding', 0);
						var thisContainer = $(this).closest(".ac-container-wrap");
						if (thisContainer.length == 0) {
							thisContainer = $(this).closest(".container");
						}
						
						var pageOffset = $('.l-page').offset().left,
							offset_map = ($(this).offset().left) - pageOffset;
							if (ACQUIA.g.direction == 'rtl' && offset_map <0) {
								offset_map *=-1;
							}
							
							$(this).css({
								width: fullWidth,
							});
						if (offset_map > 0) {
							if (ACQUIA.g.direction == 'ltr') {
								$(this).css({
									marginLeft: -offset_map
								});
							}else{
								$(this).css({
									marginRight: -offset_map
								});
							}
						}else{
							$(this).css({
								marginLeft: 0,
								marginRight: 0,
							});
						}
					});

				};
				setWidth();
				$window.on("debouncedresize", function(){
					setWidth();
				});
			}
		},
		/**
		 * Inits Page Title Parallax
		 */
		stickToContainerFooter : function(){
				if( $(".ac-stick").length ==0 ){
					return;
				};
			
			var elements = $(".ac-stick"),
			setSticky = function(){
				if ($('body').hasClass('mobile-browser')) {
					elements.css('bottom', 'auto');
				}else {
					elements.each(function(){
						var $el = $(this).css('marginBottom',0),
							margin = 0,
							container = $el.closest('.ac-page-section').css('overflow', 'hidden');
						
						container.imagesLoaded(function () {
								var offsetDiff = $el.offset().top - container.offset().top,
										heightDiff = container.height() - $el.outerHeight(true);
								margin = offsetDiff - heightDiff;
								margin = margin > 1 ? margin : (-1 * margin);
								$el.css({
									bottom : -(margin),
								});
						});
					});
				}
			};

			setSticky();
			$window.on("debouncedresize", function(){
				setSticky();
			});
		},
		/**
		 * Inits Page Title Parallax
		 */
		parallaxTitle : function(){
			// @todo Disable On touch devices
			 if ($('.l-hero-fancy.custom-bg').length > 0) {				
					var title_holder = $('.l-hero.custom-bg'),
						title_holder_height = title_holder.height(),
						doParallax = function(){
							var trans = 'translateY(' + (ACQUIA.g.scroll * .15) + 'px)';
							$('#block-ac-blocks-page-title', title_holder).css({
									opacity: (1 - ACQUIA.g.scroll / (title_holder_height * 1.2)),
									transform: trans,
									MozTransform: trans,
									WebkitTransform: trans,
									msTransform: trans
							});
						};
						
					setTimeout(function(){
						$('.ac-init-hidden', title_holder).stop().animate({'opacity':1},1000);
					},500);
					
					if ($window.width() >= ACQUIA.g.breakPoints.tablet) {
						$window.on("scroll", function() {
							doParallax();
						})
					}
			 }
		},
		/**
		 * Inits the fallback functionality for the CSS background-size:cover
		 */
		bgfullWidthFallback : function(){
			if(ACQUIA.utils.browserInfo().msie && ACQUIA.utils.browserInfo().version<=8){
				$('.ac-full-bg-image').each(function(){
					new ACQUIA.utils.bgCoverFallback($(this)).init();
				});
			}
		},

		/**
		 * Inits the Dropdownmenu menu functionality.
		 */
		Dropdownmenu: function() {
			if (!jQuery().superfish) {
				return;
			}
			
			var $menu = $('.dropdownmenu > .menu, .ac_superfish .block__content >.menu').supersubs({
				minWidth:	7,
				maxWidth:	27,
				extraWidth:	1
			}).superfish({
			  delay:  500,
			  autoArrows:    true,
			  speed: 'fast',
			  animation:   {opacity:'show'},
				onInit: function(){
					// append dropdown indicators / give classes
					jQuery(this).find('li').each(function(){
						if($(this).find('> ul').length > 0) {
						$(this).addClass('has-ul');
						$(this).find('> a').append('<span class="sf-sub-indicator">'+Drupal.theme('font_icon')+'</span>');
						}
					});
			  }
			});
			
			var wapoMainWindowWidth = $(window).width();

			$('ul li', $menu).mouseover(function(){

					// checks if third level menu exist         
					var subMenuExist = $(this).find('.menu').length;            
					if( subMenuExist > 0){
							var subMenuWidth = $(this).find('.menu').width();
							var subMenuOffset = $(this).find('.menu').parent().offset().left + subMenuWidth;

							// if sub menu is off screen, give new position
							if((subMenuOffset + subMenuWidth) > wapoMainWindowWidth){                  
									var newSubMenuPosition = subMenuWidth + 3;
									$(this).find('.menu').css({
											left: -newSubMenuPosition,
											top: '0',
									});
							}
					}
			});
		},
		/**
		 * Inits the drop-down menu functionality.
		 */
		sideDropdownmenu: function() {
			$('.ac_dropdown_menu').once('ac_dropdown_menu', function(){
				var customTimeoutShow,
				container = $('.block__content >.menu',this);
				
				$("> li > ul", container).stop(true, true).slideUp(350);
				$("> li> a.active-trail", container).parent('li:first').addClass('active-trail active').find('> ul').stop(true, true).slideDown(400);
				
				$("> li > a", container).click(function(e){
						$menuItem = $(this).parent();
					if ($menuItem.hasClass("expanded")) {
						e.preventDefault();
						if ($menuItem.hasClass("active")){
								$(this).next().stop(true, true).slideUp(350);
								$(this).removeClass('active');
								$menuItem.removeClass('active');
						}else{
								$("> li > ul", container).stop(true, true).slideUp(350);
								$(this).next().stop(true, true).slideDown(350);
								$("> li, > li > a", container).removeClass("active active-trail");
								$menuItem.addClass('active');
								$(this).addClass('active');
						}
					}
				});
			});
		},
		/**
		 * acquia Responsive Menu
		 */
		mobileMenu : function() {
			var menu_added = false,
			$body = $('body'),
			toggleMenu = null,
			container = null,
			mobile_menu = null,
			toggleMenu = null,
			
			// private properties and methods go here
			opts = {
				containerClass : '.l-header > .container > .ac-table',
				toggleMenuID : 'toggle-nav',
			},
			
		
			// Display Mobile Menu:[mobile_drop_down or built-in]
			displayMobileMenu = function(menu) {
				if ($body.is('.mobile_drop_down')) {
					setDeviceWidthMenuDropdown(menu);
				}else {
					toggleMenu = $('<a>', {'id':opts.toggleMenuID, 'href':'#' }),
					container = $(opts.containerClass),
					mobile_menu = menu.clone();
					setVisibility();
					bindEvents();
					
					$('<span class="ac-icon icon-menu"></span><span class="label">'+ Drupal.t("Menu") +'</span>').prependTo(toggleMenu);
				}
				
			},
			
			// set swith width for mobile view
			setDeviceWidthMenuDropdown = function(menu) {
				menu.mobileMenu({
					switchWidth: ACQUIA.g.switchWidth,
					//width (in px to switch at)
					topOptionText: Drupal.t("select a page"),// @todo change to UI
					//first option text
					indentString: 'ontouchstart' in document.documentElement ? '- ' : "&nbsp;&nbsp;&nbsp;" //string for indenting nested items
				});
			},	
			
			// Bind Events
			bindEvents = function() {
				toggleMenu.click(function() {
					$('#mobile-menu').stop(true,true).slideToggle(500);
					if ($body.is('.show_mobile_menu')) {// Hide mobile menu
						toggleMenu.parent().appendTo(container);
						$body.removeClass('show_mobile_menu');
						$('.ac-icon', this).removeClass('icon-cancel').addClass('icon-menu');
					}	else {// show mobile menu
						if ($body.is('.mobile_slide_out')) {
							toggleMenu.parent().insertBefore(mobile_menu.parent());
						}
						$('.ac-icon', this).removeClass('icon-menu').addClass('icon-cancel');
						$body.addClass('show_mobile_menu');
					}
					return false;
				});
			},	
			
			// Build Mobile Menu
			buildMobileMenu = function() {
				if (menu_added)
					return;

				toggleMenu.appendTo(container);
				toggleMenu.wrap('<div class="'+opts.toggleMenuID + '-wrap'+'"></div>');

				mobile_menu.prependTo($('.l-page'))
				.wrap($('<div>', { 'class' : 'mobile-menu', 'id' : 'mobile-menu' }))
				.wrap($('<div>', { 'class' : 'container'}));

				
				// append dropdown indicators / give classes
				mobile_menu.find('li').each(function(){
					if($(this).find('> ul').length > 0) {
						 $(this).addClass('has-ul');
						 $(this).find('> a').append('<span class="sf-sub-indicator"><i class="acquia-icon-fontello icon-down-open"></i></span>');
					}
				});

				// events
				mobile_menu.find('li:has(">ul") > a').click(function(){
					$(this).parent().toggleClass('open');
					$(this).parent().find('> ul').stop(true,true).slideToggle();
					return false;
				});
				
				menu_added = true;
			},	
			
			// set Visibility
			setVisibility = function() {
				$window.on("debouncedresize", setVisibility);
				
				if ($('body').hasClass('mobile_active')) {
					buildMobileMenu();
				}else {
					container.removeClass('show_mobile_menu');
					$('#mobile-menu').hide();
				};
				
				// Hide Mobile Menu
				if ($('body').hasClass('mobile-browser')) {
					if (menu_added) {
						resetMobileMenu();
					}
				}
			},
			
			resetMobileMenu = function() {
				$('#' + opts.toggleMenuID).find('.ac-icon').removeClass('icon-cancel').addClass('icon-menu');
			};
			
			var menu = $('.main-menu').find('ul:first');
			displayMobileMenu(menu);
		},
		/**
		 * Adjust page title position
		 */
		adjustPageTitle : function() {
			var pageTitle = $('.l-hero'),
				pageTitle_inner = $('.l-hero .l-region'),
				pageTitle_h = parseInt(pageTitle.data('height')),
				pageTitle_inner_h = parseInt(pageTitle_inner.outerHeight(true));

			pageTitle_inner.css({
				'paddingTop': (pageTitle_h-pageTitle_inner_h) /2,
				'paddingButtom': (pageTitle_h-pageTitle_inner_h) /2,
			});
		},
		/**
		 * Inits the parallax animation effect for some elements,
		 */
		parallax : function(){
			//init the full-width backfround image parallax
			if(!ACQUIA.g.mobile){
				$('.ac-parallax .ac-parallax-img').each(function(){
					new ACQUIA.utils.parallax(
						$(this),
						'background',
						{}
					).init();
				});
			}
			
			// Animate List of items
			$('.ac-grid.ac-animate').once('ac-animate', function(){
				$(this).css('opacity', 1);
				new ACQUIA.utils.parallax(
					$(this),
					'list_single',
					{
						children:$('.g-i-i', this),
						delay:150,
					}
				).init();
			});		
			
			// Animate List of items
			$('.ac-anim-childs.ac-animate').once('ac-animate', function(){
				$(this).css('opacity', 1);
				new ACQUIA.utils.parallax(
					$(this),
					'list_single',
					{
						children:$($(this).data('anim-childs'), this),
					}
				).init();
			});	

			$('.ac-type-animated').once('ac-animate', function(){
				$(this).css('opacity', 1);
				new ACQUIA.utils.parallax(
					$(this),
					'list_single',
					{
						animType:'ac_appear',
						children:$($(this).find('.socials-wrap .ac-font-icon'), this),
					}
				).init();
			});
			
			// init the ac-toggle shortcode toggles to aniamte
			$('.ac-toggle-container.ac-animate').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'list',
					{
						children:$(this).find('.ac-toggle'),
					}
				).init();
			});
			
			// init the acquia icon list items to animate
			$('.ac-iconlist.ac-animate').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'list_single',
					{
						children: $(this).data('anim-where') == 'block' ? $('.ac-iconlist-item-wrap') : $('.ac-iconlist-item-icon'),
					}
					).init();
			});
			
			// init the acquia icon list items to animate
			$('.ac-iconbox-icon.ac-animate').each(function(){
				container = $(this).closest('.ac-container');
				if (!container.hasClass('anim-ready')){
					container.addClass('anim-ready');
						new ACQUIA.utils.parallax(
							container,
							'list_single',
							{
								animType:$(this).data('anim-type'),
								children: $('.ac-iconbox-icon', container),
								delay: 350,
							}
						).init();
				}
			});


			// init the acquia columns in a row animation
			$('.ac-page-section.ac-animate').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'list_single',
					{
						children:$(this).find('.vc-column'),
					}
				).init();
			});
			
			// 
			$('.ac-stick.ac-animate').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'list_single',
					{
						children:$(this).find('.ac-stick-wrap'),
					}
				).init();
			});
			
			$('.cart-toggle-btn strong').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'single',
					{
						animType:$(this).data('anim-type'),
						delay:$(this).data('anim-delay'),
						when:$(this).data('anim-when'),
						initProp : {position:'absolute'},
						endProp: {}
					}
					).init();
			});	

			// init the services boxes list parallax
			$('.ac-animate').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'single',
					{
						animType:$(this).data('anim-type'),
						delay:$(this).data('anim-delay'),
						when:$(this).data('anim-when'),
						initProp : {opacity:0, position:'relative'},
						endProp: {opacity:1, top:0}
					}
					).init();
			});
			
			// init the services boxes list parallax
			$('.ac-team-wrap').once('ac-animate', function(){
				new ACQUIA.utils.parallax(
					$(this),
					'attribute',
					{
						attrType:'hover',
						delay:1000,
						when:$(this).data('anim-when'),
					}
				).init();
			});
		},

		/**
		 * Inits effects,
		 */
		effects : function(){
			// Blur Effect
			if(!ACQUIA.g.mobile){
				if (typeof Pixastic != undefined) {
					var blurImages = imagesLoaded('.ac-effect-blur');
					blurImages.on( 'done', function() {
						for ( var i = 0, len = blurImages.images.length; i < len; i++ ) {
							var image = blurImages.images[i].img;
							$(image).clone().insertBefore($(image)).closest('.ac-effect-blur').addClass('blur-this');
							$(image).addClass("blur-effect").css('opacity', '');
							Pixastic.process(image, "blurfast", {amount:0.3});
						}
					});
				}
			}
			
			// Blur Effect
			if(!ACQUIA.g.mobile){
				// Overlay effect
					$(".ac-effect-container").hover(function(){
						$('.ac-overlay', this).addClass('ac-show');
					}, function(){
						$('.ac-overlay', this).removeClass('ac-show');
					});
			};
		},

		/**
		 * popUp plugin
		 */
		popUp: function() {
			if (!jQuery().magnificPopup) {
				return;
			}

			// Gallery
			$(".ac-gallery-container").each(function(){
				$('.ac-popup-image', this).addClass('ac-popup-processed');
				$(this).magnificPopup({
					delegate: 'a',
					type: 'image',
					tLoading: 'Loading image #%curr%...',
					mainClass: 'mfp-img-mobile',
					gallery: {
						enabled: true,
						navigateByImgClick: true,
						preload: [0,1], // Will preload 0 - before current, and 1 after the current image
						arrowMarkup: '<a title="%title%" class="mpf-arrow mpf-%dir%"><i class="icon-left-open-big"></i></a>', // markup of an arrow button
						tCounter: '<span class="mfp-counter">%curr% of %total%</span>' // markup of counter
					},
					image: {
						tError: '<a href="%url%">The image #%curr%</a> could not be loaded.',
						titleSrc: function(item) {
							return this.getItemTitle(item);
						}
					},
					iframe: {
						markup: '<div class="mfp-iframe-scaler">'+
								'<div class="mfp-close"></div>'+
								'<iframe class="mfp-iframe" frameborder="0" allowfullscreen></iframe>'+
								'<div class="mfp-bottom-bar">'+
								'<div class="mfp-title"></div>'+
								'<div class="mfp-counter"></div>'+
								'</div>'+
								'</div>'
					},
					callbacks: {
						imageLoadComplete: function() {
							var self = this;
							setTimeout(function() {
								self.wrap.addClass('mfp-image-loaded');
							}, 16);
						},
						close: function() {
							this.wrap.removeClass('mfp-image-loaded');
						},
						elementParse: function(item) {
						},
						markupParse: function(template, values, item) {
							if ( 'iframe' == item.type ) {
								template.find('.mfp-title').html( this.st.dt.getItemTitle(item) );
							}

							if ( !this.ev.attr('data-pretty-share') ) {
								// console.log("no buttons" + this)
								// $(this).attr("class")
								template.addClass("no-share-buttons");
							}
						},
						beforeOpen: function() {
							var magnificPopup = this;
							// add acquia loader class
							$(this.preloader).addClass('loading-icon').removeClass('mfp-preloader').wrap('<div class="mfp-preloader ac-preloader"></div>');
							// create settings container
							if ( typeof this.acquia == 'undefined' ) {
								this.acquia = {};
							}

							// save share buttons array
							this.acquia.shareButtonsList = this.ev.attr('data-pretty-share') ? this.ev.attr('data-pretty-share').split(',') : new Array();

							// share buttons template
							this.acquia.shareButtonsTemplates = {
								twitter : '<a href="http://twitter.com/home?status={location_href}%20{share_title}" class="share-button twitter" target="_blank" title="twitter"></a>',
								// facebook : '<a href="http://www.facebook.com/sharer.php?u={location_href}&amp;t={share_title}" class="share-button facebook" target="_blank" title="facebook"></a>',
								facebook : '<a href="http://www.facebook.com/sharer.php?s=100&amp;p[url]={location_href}&amp;p[title]={share_title}&amp;p[images][0]={image_src}" class="share-button facebook" target="_blank" title="facebook"></a>',
								google : '<a href="http:////plus.google.com/share?url={location_href}&amp;title={share_title}" class="share-button google" target="_blank" title="google+"></a>',
								pinterest : '<a href="//pinterest.com/pin/create/button/?url={location_href}&amp;description={share_title}&amp;media={image_src}" class="share-button pinterest" target="_blank" title="pin it"></a>'
							};

							// share buttons
							this.acquia.getShareButtons = function ( itemData ) {

								var shareButtons = magnificPopup.acquia.shareButtonsList,
									pinterestIndex = -1,
									shareButtonsLemgth = shareButtons.length,
									html = '';

								for( var i = 0; i < shareButtons.length; i++ ) {

									if ( 'pinterest' == shareButtons[i] ) {
										pinterestIndex = i;
										break;
									}
								}

								if ( shareButtonsLemgth <= 0 ) {
									return '';
								}

								for ( var i = 0; i < shareButtonsLemgth; i++ ) {

									// exclude pinterest button for iframes
									if ( 'iframe' == itemData['type'] && pinterestIndex == i ) {
										continue;
									}

									var buttonHtml = magnificPopup.acquia.shareButtonsTemplates[ shareButtons[i] ],
										itemTitle = itemData['title'],
										itemSrc = itemData['src'];

									if ( 'google' == shareButtons[i] ) {
										itemTitle = itemTitle.replace(' ', '+');
									}

									buttonHtml = buttonHtml.replace('{location_href}', encodeURIComponent(location.href)).replace('{share_title}', itemTitle).replace('{image_src}', itemSrc);
									html += buttonHtml;
								}

								return '<div class="entry-share"><div class="soc-ico">' + html + '<div></div>';
							}

							// item title
							this.getItemTitle = function(item) {
								var imgTitle = item.el.attr('title') || '',
									imgSrc = item.el.attr('href'),
									imgDesc = item.el.attr('data-ac-popup-caption') || '',
									shareButtons = magnificPopup.acquia.getShareButtons( { 'title': imgTitle, 'src': imgSrc, 'type': item.type } );

								return imgTitle + '<small>' + imgDesc + '</small>' + shareButtons;
							}
						},
						close: function() {
							
						},
					}
				});
			});

			$('.ac-popup-video').magnificPopup({
				// delegate: 'a',
				type: 'iframe',
				closeBtnInside: false,
				closeOnContentClick: true,
				tLoading: '', // remove text from preloader
				removalDelay: 500,
				mainClass: 'mfp-img-mobile',
				image: {
					tError: Drupal.t('<a href="%url%">The image #%curr%</a> could not be loaded.'),
					titleSrc: function(item) {
						return this.getItemTitle(item);
					}
				},
				imageLoadComplete: function() {
					var self = this;
					setTimeout(function() {
						self.wrap.addClass('mfp-image-loaded');
					}, 16);
				},
				close: function() {
					this.wrap.removeClass('mfp-image-loaded');
				},
				iframe: {
					markup: '<div class="mfp-iframe-scaler">'+
							'<div class="mfp-close"></div>'+
							'<iframe class="mfp-iframe" frameborder="0" allowfullscreen></iframe>'+
							'<div class="mfp-bottom-bar">'+
							'<div class="mfp-title"></div>'+
							'<div class="mfp-counter"></div>'+
							'</div>'+
							'</div>'
				},
				callbacks: {
					elementParse: function(item) {
						// console.log('Parsing element:', item);
						// triggers only once for each item
						// here you may modify URL, type, or any other data
					},
					markupParse: function(template, values, item) {
						// Triggers each time when content of popup changes
						// console.log('Parsing:', template, values, item);

						if ( 'iframe' == item.type ) {
							template.find('.mfp-title').html( this.getItemTitle(item) );
						}

						if ( !this.ev.attr('data-pretty-share') ) {
							// console.log("no buttons" + this)
							// $(this).attr("class")
							template.addClass("no-share-buttons");
						}

						
					},
					beforeOpen: function() {
						// add acquia loader class
						$(this.preloader).addClass('loading-icon').removeClass('mfp-preloader').wrap('<div class="mfp-preloader ac-preloader"></div>');

						var magnificPopup = this;
						// create settings container
						if ( typeof this.acquia == 'undefined' ) {
							this.acquia = {};
						}

						// save share buttons array
						this.acquia.shareButtonsList = this.ev.attr('data-pretty-share') ? this.ev.attr('data-pretty-share').split(',') : new Array();

						// share buttons template
						this.acquia.shareButtonsTemplates = {
							twitter : '<a href="http://twitter.com/home?status={location_href}%20{share_title}" class="share-button twitter" target="_blank" title="twitter"></a>',
							// facebook : '<a href="http://www.facebook.com/sharer.php?u={location_href}&amp;t={share_title}" class="share-button facebook" target="_blank" title="facebook"></a>',
							facebook : '<a href="http://www.facebook.com/sharer.php?s=100&amp;p[url]={location_href}&amp;p[title]={share_title}&amp;p[images][0]={image_src}" class="share-button facebook" target="_blank" title="facebook"></a>',
							google : '<a href="http:////plus.google.com/share?url={location_href}&amp;title={share_title}" class="share-button google" target="_blank" title="google+"></a>',
							pinterest : '<a href="//pinterest.com/pin/create/button/?url={location_href}&amp;description={share_title}&amp;media={image_src}" class="share-button pinterest" target="_blank" title="pin it"></a>'
						};

						// share buttons
						this.acquia.getShareButtons = function ( itemData ) {

							var shareButtons = magnificPopup.acquia.shareButtonsList,
								pinterestIndex = -1,
								shareButtonsLemgth = shareButtons.length,
								html = '';

							for( var i = 0; i < shareButtons.length; i++ ) {

								if ( 'pinterest' == shareButtons[i] ) {
									pinterestIndex = i;
									break;
								}
							}

							if ( shareButtonsLemgth <= 0 ) {
								return '';
							}

							for ( var i = 0; i < shareButtonsLemgth; i++ ) {

								// exclude pinterest button for iframes
								if ( 'iframe' == itemData['type'] && pinterestIndex == i ) {
									continue;
								}

								var buttonHtml = magnificPopup.acquia.shareButtonsTemplates[ shareButtons[i] ],
									itemTitle = itemData['title'],
									itemSrc = itemData['src'];

								if ( 'google' == shareButtons[i] ) {
									itemTitle = itemTitle.replace(' ', '+');
								}

								buttonHtml = buttonHtml.replace('{location_href}', encodeURIComponent(location.href)).replace('{share_title}', itemTitle).replace('{image_src}', itemSrc);
								html += buttonHtml;
							}

							return '<div class="entry-share"><div class="soc-ico">' + html + '<div></div>';
						}

						// item title
						this.getItemTitle = function(item) {
							var imgTitle = item.el.attr('title') || '',
								imgSrc = item.el.attr('href'),
								imgDesc = item.el.attr('data-dt-img-description') || '',
								shareButtons = magnificPopup.acquia.getShareButtons( { 'title': imgTitle, 'src': imgSrc, 'type': item.type } );

							return imgTitle + '<small>' + imgDesc + '</small>' + shareButtons;
						}
					}
				}
			});

			$('.ac-popup-image').once('ac-popup', function(){
				$(this).magnificPopup({
					// delegate: 'a',
					type: 'image',
					closeBtnInside: false,
					closeOnContentClick: true,
					tLoading: '', // remove text from preloader
					removalDelay: 500,
					mainClass: 'mfp-img-mobile',
					image: {
						tError: '<a href="%url%">The image #%curr%</a> could not be loaded.',
						titleSrc: function(item) {
							return this.getItemTitle(item);
						}
					},
					iframe: {
						markup: '<div class="mfp-iframe-scaler">'+
								'<div class="mfp-close"></div>'+
								'<iframe class="mfp-iframe" frameborder="0" allowfullscreen></iframe>'+
								'<div class="mfp-bottom-bar">'+
								'<div class="mfp-title"></div>'+
								'<div class="mfp-counter"></div>'+
								'</div>'+
								'</div>'
					},
					callbacks: {
						imageLoadComplete: function() {
							var self = this;
							setTimeout(function() {
								self.wrap.addClass('mfp-image-loaded');
							}, 16);
						},
						close: function() {
							this.wrap.removeClass('mfp-image-loaded');
						},
						elementParse: function(item) {
							// console.log('Parsing element:', item);
							// triggers only once for each item
							// here you may modify URL, type, or any other data
						},
						markupParse: function(template, values, item) {
							// Triggers each time when content of popup changes
							// console.log('Parsing:', template, values, item);

							if ( 'iframe' == item.type ) {
								template.find('.mfp-title').html( this.getItemTitle(item) );
							}

							if ( !this.ev.attr('data-pretty-share') ) {
								// console.log("no buttons" + this)
								// $(this).attr("class")
								template.addClass("no-share-buttons");
							}
							
						},
						beforeOpen: function() {
							var magnificPopup = this;
							// add acquia loader class
							$(this.preloader).addClass('loading-icon').removeClass('mfp-preloader').wrap('<div class="mfp-preloader ac-preloader"></div>');
							// create settings container
							if ( typeof this.acquia == 'undefined' ) {
								this.acquia = {};
							}

							// save share buttons array
							this.acquia.shareButtonsList = this.ev.attr('data-pretty-share') ? this.ev.attr('data-pretty-share').split(',') : new Array();

							// share buttons template
							this.acquia.shareButtonsTemplates = {
								twitter : '<a href="http://twitter.com/home?status={location_href}%20{share_title}" class="share-button twitter" target="_blank" title="twitter"></a>',
								// facebook : '<a href="http://www.facebook.com/sharer.php?u={location_href}&amp;t={share_title}" class="share-button facebook" target="_blank" title="facebook"></a>',
								facebook : '<a href="http://www.facebook.com/sharer.php?s=100&amp;p[url]={location_href}&amp;p[title]={share_title}&amp;p[images][0]={image_src}" class="share-button facebook" target="_blank" title="facebook"></a>',
								google : '<a href="http:////plus.google.com/share?url={location_href}&amp;title={share_title}" class="share-button google" target="_blank" title="google+"></a>',
								pinterest : '<a href="//pinterest.com/pin/create/button/?url={location_href}&amp;description={share_title}&amp;media={image_src}" class="share-button pinterest" target="_blank" title="pin it"></a>'
							};

							// share buttons
							this.acquia.getShareButtons = function ( itemData ) {

								var shareButtons = magnificPopup.acquia.shareButtonsList,
									pinterestIndex = -1,
									shareButtonsLemgth = shareButtons.length,
									html = '';

								for( var i = 0; i < shareButtons.length; i++ ) {

									if ( 'pinterest' == shareButtons[i] ) {
										pinterestIndex = i;
										break;
									}
								}

								if ( shareButtonsLemgth <= 0 ) {
									return '';
								}

								for ( var i = 0; i < shareButtonsLemgth; i++ ) {

									// exclude pinterest button for iframes
									if ( 'iframe' == itemData['type'] && pinterestIndex == i ) {
										continue;
									}

									var buttonHtml = magnificPopup.acquia.shareButtonsTemplates[ shareButtons[i] ],
										itemTitle = itemData['title'],
										itemSrc = itemData['src'];

									if ( 'google' == shareButtons[i] ) {
										itemTitle = itemTitle.replace(' ', '+');
									}

									buttonHtml = buttonHtml.replace('{location_href}', encodeURIComponent(location.href)).replace('{share_title}', itemTitle).replace('{image_src}', itemSrc);
									html += buttonHtml;
								}

								return '<div class="entry-share"><div class="soc-ico">' + html + '<div></div>';
							}

							// item title
							this.getItemTitle = function(item) {
								var imgTitle = item.el.attr('title') || '',
									imgSrc = item.el.attr('href'),
									imgDesc = item.el.attr('data-ac-popup-caption') || '',
									shareButtons = magnificPopup.acquia.getShareButtons( { 'title': imgTitle, 'src': imgSrc, 'type': item.type } );

								return imgTitle + '<small>' + imgDesc + '</small>' + shareButtons;
							}
						},
	
					}
				});
			});
		},
		/**
		 * Misc plugins
		 */
		plugins: function() {
	
			if (typeof mejs !== 'undefined') {
				// add mime-type aliases to MediaElement plugin support
				mejs.plugins.silverlight[0].types.push('video/x-ms-wmv');
				mejs.plugins.silverlight[0].types.push('audio/x-ms-wma');

				$(function () {
					var settings = {};

					if ( typeof _wpmejsSettings !== 'undefined' )
						settings.pluginPath = _wpmejsSettings.pluginPath;

					$('audio.ac-audio, .ac-l-media video').mediaelementplayer( settings );
				});
			}
			if (jQuery().fitVids) {
				var acFitvids = function(){
					$(".ac-fluid-video").fitVids();
				};
				acFitvids();
				$window.on("debouncedresize", function(){
					acFitvids();
				});
			}
			if (jQuery().equalHeights) {
				var $els = $('.l-region--footer > .block'),
					equalHeighter = function(){
						if (jQuery('.l-page').width() < ACQUIA.g.breakPoints.tablet) {
							$els.css('height', 'auto');
						}else {
							$els.imagesLoaded(function () {
									$els.equalHeights();
							});
						}
				}
				equalHeighter();
				$window.on("debouncedresize", function(){
					equalHeighter();
				});
			}
				
			// bootstrap tooltip settings
			$('[data-toggle="popover"]').on("click", function(e){
				e.preventDefault();
			});
			
			/*back-to-top*/
			$window.scroll(function () {
				if ($(this).scrollTop() > 500) {
					$('#back-to-top').removeClass('off').addClass('on');
				}
				else {
					$('#back-to-top').removeClass('on').addClass('off');
				}
			});
			$("#back-to-top").click(function(e) {
				e.preventDefault();
				$("html, body").animate({ scrollTop: 0 }, "slow");
				return false;
			});
		},
	};
	

	/**
	 * resize Carousels
	 */
	ACQUIA.resizeCarousels = function() {
		$('.ac-carousel').each(function(){
			container = $(this);
			var carouselItem = container.find('> .ac-col'),
					cols = ACQUIA.g.gridCols !== false ? ACQUIA.g.gridCols : parseInt(container.data("columns"), 10),
					width = carouselItem.width();
			var conf = {
				items : {
					visible : cols,
				},
				scroll : {
					items: cols
				},
				swipe : {
					items: cols
				}
			};
			container.trigger("configuration", conf);
		});

	};
	/**
	 * Carousel
	 */
	ACQUIA.carousel = function() {
		$('.ac-carousel').each(function(){
			var container = $(this),
				elements = container.find('> .ac-col');
				isoLoader = container.closest('.caroufredsel_wrap').siblings('.ac-preloader').length >0 ? 
					container.closest('.caroufredsel_wrap').siblings('.ac-preloader') : 
					$(ACQUIA.g.preloader).insertBefore(container.closest('.caroufredsel_wrap'));
					
				if (elements.length == 0) {
					elements = container.find('> *').addClass('ac-col').wrapInner('<div class="item-i" />');
				}

			if (jQuery().equalHeights) {
				container.imagesLoaded(function () {
					elements.equalHeights();
				});
				
				$window.on("debouncedresize", function(){
					elements.css('min-height','0');
					elements.equalHeights();
				});
			}
			
			var prev = container.parent().find('.caroufredsel_nav .prev'),
				next = container.parent().find('.caroufredsel_nav .next'),
				cols = parseInt(container.attr("data-columns"), 10),
				auto = container.data('auto'),
				speed = (parseInt(container.data('speed'))) ? (parseInt(container.data('speed'))) : 1000,
				easing = (container.attr('data-easing')) ? (container.attr('data-easing')) : 'linear';

				if (ACQUIA.g.mobile) {
					cols = 1;
				}

				container.carouFredSel({
					circular: true,
					items : cols,
					height: "auto",
					scroll : {
						visible : {
							width: elements.width(),
							min: 1,
							max: cols
						},
						easing : easing,
						duration : speed,
						pauseOnHover : true,
					},
					swipe	: {
						onTouch : true,
						onMouse : true
					},
					auto : {
						play : auto
					},
					prev : {
						button : prev,
						key : "left"
					},
					next : { 
						button : next,
						key : "right"
					},
					onCreate : function() {
						ACQUIA.resizeCarousels();
						
						$window.on("debouncedresize", function(){
							ACQUIA.resizeCarousels();
						});
						
						if (ACQUIA.g.mobile) {
							ACQUIA.shortcodes.carouselSwipeIndicator(container);
						} 
						
						if (jQuery().fitVids) {
							jQuery(this).fitVids();
						}
						container.closest('.caroufredsel_wrapper').css('margin', '0 auto');
						if (jQuery().waypoint) {
							$.waypoints('refresh');
						}
					}	
				});

				// Show item(s) when image inside is loaded
				container.imagesLoaded(function () {
					var isoLoader = container.closest('.caroufredsel_wrap').siblings('.ac-preloader');
					setTimeout(function(){
						isoLoader.stop().animate({
							"opacity": 0,
						}, 150, function() {
							isoLoader.remove();
							container.closest('.caroufredsel_wrap').animate({'opacity':1},300);
						});

					},1000);
				});
		});
	};
	
	/**
	 * Set Global vars
	 */
	ACQUIA.setGlobals = function() {
		var defaults = {
			switchWidth: 768,
			breakPoints: {
				'mobile' : 480,
				'tablet' : 768,
				'big_scr' : 960,
				'desktop' : 1200,
			},
		};
		
		ACQUIA.g = $.extend(true, defaults, ACQUIA.g || {});
		
		// Custom touch events
		ACQUIA.g.touches = {};
		ACQUIA.g.touches.touching = false;
		ACQUIA.g.touches.touch = false;
		ACQUIA.g.touches.currX = 0;
		ACQUIA.g.touches.currY = 0;
		ACQUIA.g.touches.cachedX = 0;
		ACQUIA.g.touches.cachedY = 0;
		ACQUIA.g.touches.count = 0;
	
		ACQUIA.g.direction = $('html').css('direction');
		if (typeof ACQUIA.g.direction == "undefined") {
			ACQUIA.g.direction = $('html').attr('dir');
		}
		
		ACQUIA.g.colSettings = {
			'ac-fullwidth': {'cols': 1, 'w': 100/1 + '%'},
			'ac-one-half' : {'cols': 2, 'w': 100/2 + '%'},
			'ac-one-third': {'cols': 3, 'w': 100/3 + '%'},
			'ac-one-fourth': {'cols': 4, 'w': 100/4 + '%'},
			'ac-one-fifth': {'cols': 5, 'w': 100/5 + '%'},
			'ac-one-sixth': {'cols': 6, 'w': 100/6 + '%'},
		};
	
		$window.scroll(function() {
			"use strict";
			ACQUIA.g.scroll = $window.scrollTop();
		});
	};

	/**
	 * Inits the mobile menu class
	 */
	ACQUIA.setDeviceWidth = function() {
		var setMobile = function() {
			// set grid columns default
			ACQUIA.g.gridCols = false;
			$window = $(window);
			if ($window.width() < ACQUIA.g.switchWidth) {
				$('body').addClass('mobile_active').trigger("mobileAdded");
			}
			else{
				$('body').removeClass('mobile_active').trigger("mobileRemoved");
			}
			if ($window.width() >= ACQUIA.g.breakPoints.desktop) {
				$('body').addClass('desktop-browser')
				.removeClass('mobile-browser tablet-browser big_scr-browser')
				.trigger("desktop-browser");
			}else if ($window.width() >= ACQUIA.g.breakPoints.big_scr) {
				$('body').addClass('big_scr-browser')
				.removeClass('mobile-browser tablet-browser desktop-browser')
				.trigger("big_scr-browser");
				
				ACQUIA.g.gridCols = 3;
			}else if ($window.width() >= ACQUIA.g.breakPoints.tablet) {
				$('body').addClass('tablet-browser')
				.removeClass('mobile-browser desktop-browser big_scr-browser')
				.trigger("tablet-browser");
				
				ACQUIA.g.gridCols = 2;
			}else {
				$('body').addClass('mobile-browser')
				.removeClass('tablet-browser desktop-browser big_scr-browser')
				.trigger("mobile-browser");
				
				ACQUIA.g.gridCols = 1;
			}	
		};
		
		setMobile();
		
		$window.on("debouncedresize", function(){
			ACQUIA.setDeviceWidth();
		});
	};
	
	/**
	 * touch event
	 */
	ACQUIA.touch = function() {
		$document.on("touchstart",function(e) {
			if (e.originalEvent.touches.length == 1) {
				ACQUIA.g.touches.touch = e.originalEvent.touches[0] || e.originalEvent.changedTouches[0];

				// caching the current x
				ACQUIA.g.touches.cachedX = ACQUIA.g.touches.touch.pageX;
				// caching the current y
				ACQUIA.g.touches.cachedY = ACQUIA.g.touches.touch.pageY;
				// a touch event is detected      
				ACQUIA.g.touches.touching = true;

				// detecting if after 200ms the finger is still in the same position
				setTimeout(function() {
					ACQUIA.g.touches.currX = ACQUIA.g.touches.touch.pageX;
					ACQUIA.g.touches.currY = ACQUIA.g.touches.touch.pageY;      

					if ((ACQUIA.g.touches.cachedX === ACQUIA.g.touches.currX) && !ACQUIA.g.touches.touching && (ACQUIA.g.touches.cachedY === ACQUIA.g.touches.currY)) {
						// Here you get the Tap event
						ACQUIA.g.touches.count++;
						//debug.log(ACQUIA.g.touches.count)
						$(e.target).trigger("tap");
					}
				},200);
			}
		});

		$document.on("touchend touchcancel",function (e){
			// here we can consider finished the touch event
			ACQUIA.g.touches.touching = false;
		});

		$document.on("touchmove", function (e){
			ACQUIA.g.touches.touch = e.originalEvent.touches[0] || e.originalEvent.changedTouches[0];
		});
	};
	/**
	 * preloader
	 */
	ACQUIA.preloader = function() {
	
		var preloadCollection = $('.ac-slider, .flexslider, .ac-preload-me');
		if (preloadCollection.length > 0) {
			preloadCollection.each(function(){
					container = $(this).addClass('ac-preloading');
					container.parent().addClass('ac-preloading');

					$(ACQUIA.g.preloader).insertBefore(container);
						// Show item(s) when image inside is loaded
						container.css('opacity', 0).imagesLoaded(function (item) {
							container = $(item.elements);
								var isoLoader = container.siblings('.ac-preloader');
								setTimeout(function(){
									isoLoader.stop().animate({
										"opacity": 0,
									}, 150, function() {
										isoLoader.css('display', 'none');
										container = isoLoader.siblings('.ac-preloading').removeClass('ac-preloading');
										container.parent().removeClass('ac-preloading');
										container.css('display', 'block').animate({'opacity':1},500);
									});

								},1000);
						});
			});
		}
	}
	
	ACQUIA.slider = function() {

		$('.ac-slider').each(function(){
			slider = $(this);
			var cols = (slider.attr('data-columns')) ? (slider.attr('data-columns')) : 4,
					autoscroll = (slider.attr('data-auto')) ? (slider.attr('data-auto') == 'true' ? true: false) : false,
					directionNav = (slider.attr('data-directionnav')) ? (slider.attr('data-directionnav') == 'true' ? true: false) : true,
					controlNav = (slider.attr('data-controlnav')) ? (slider.attr('data-controlnav')) : true,
					thumbNav = (slider.attr('data-thumbNav')) ? (slider.attr('data-thumbNav')) : 'false',
					itemWidth = (slider.attr('data-itemWidth')) ? (slider.attr('data-itemWidth')) : 475,
					animation = cols >1 ? 'slides' : 'fade';
			if (thumbNav == 'true') {
				controlNav = 'thumbnails'
			}else{
				controlNav = controlNav == 'false' ? false : true;
			}

			slider.flexslider({
					animationLoop: true,
					directionNav: directionNav,
					controlNav: controlNav,
					useCSS: false,
					pauseOnAction: true,
					pauseOnHover: true,
					slideshow: autoscroll,
					animation: animation,
					prevText: "<i class='icon-left-open-big'></i>",
					nextText: "<i class='icon-right-open-big'></i>",
					animationSpeed: 600,
					slideshowSpeed: 8000,
					itemWidth: itemWidth,
					itemMargin: 0,
					minItems: $('body').hasClass('mobile-browser') ? ACQUIA.g.gridCols : cols,
					maxItems: $('body').hasClass('desktop-browser') ? cols : ACQUIA.g.gridCols,
					start: function(slider) {
						setTimeout(function() {
							if (jQuery().fitVids) {
								slider.fitVids();
							}
						}, 100);

						if (jQuery().swipe) {
							slider.swipe({
								swipe:function(event, direction, distance, duration, fingerCount) {
									if (direction == 'left') {
										slider.flexAnimate(slider.getTarget("prev"), true);
									}else{
										slider.flexAnimate(slider.getTarget("next"), true);
									}
								}
							});
						}
						
					},

			});

		});
	};

	/**
	 * Misc
	 */
	ACQUIA.misc = function() {	
		/* Append preloader to custom loader */
		$(ACQUIA.g.preloader).appendTo(".tp-loader");
		
		$(".ex-sortings a").on("click", function(e) {
			var $this = $(this);
			$this.addClass("active").siblings().removeClass("active");
				var $switch = $this.siblings('.ac-switch');
				if($switch.prev().hasClass('active')){
					$switch.addClass('left-active');
					$switch.removeClass('right-active');
				}else if($switch.next().hasClass('active')){
					$switch.addClass('right-active');
					$switch.removeClass('left-active');
				}else{
					$switch.removeClass('right-active');
					$switch.removeClass('left-active');
				}

		});
		
		$(".ex-sortings .ac-switch").on("click", function(e) {
			var $this = $(this);
			if ($this.hasClass('right-active')) {
				$this.prev().trigger('click');
			}else{
				$this.next().trigger('click');
			}

		});
		
		// search block
		$fancyInput = $('.ac-fancy-form');
		$fancyInput.each(function(){
			var els = $(this).find('input[type=text],input[type=email], textarea');
			els.each(function(){
				var label = $(this).closest('.form-item').find('label').hide().text();
				label = typeof label !='undefined' ? label : '';
				$(this).attr('placeholder', label);
			});
		});
		
		if ($('.block--search').length > 0) {
			$('.block--search').find('input[type=search]').attr('placeholder', Drupal.t('Search Here'));
		}
	};
	
	/**
	 * Video Control
	 */
	ACQUIA.video = function() {	
	return;
				var iframe = $('#player1')[0],
						player = $f(iframe),
						status = $('.status');

		// When the player is ready, add listeners for pause, finish, and playProgress
				player.addEvent('ready', function() {
						status.text('ready');

						player.addEvent('pause', onPause);
						player.addEvent('finish', onFinish);
						player.addEvent('playProgress', onPlayProgress);
				});

			// Call the API when a button is pressed
				$('button').bind('click', function() {
						player.api($(this).text().toLowerCase());
				});

				function onPause(id) {
						status.text('paused');
				}

				function onFinish(id) {
						status.text('finished');
				}

				function onPlayProgress(data, id) {
						status.text(data.seconds + 's played');
				}
	};
	
	ACQUIA.onReady = {
		init: function() {
			$('body').removeClass('no-js').addClass('by-js');
			
			// touch event binding
			ACQUIA.touch();
			
			// preloader
			ACQUIA.preloader();

			// slider
			if (jQuery().flexslider) {
					ACQUIA.slider();
			}
			
			ACQUIA.misc();
		},
	};
	
	ACQUIA.onLoad = {
		init: function() {
			if (jQuery().carouFredSel) {
				ACQUIA.carousel();
			}
			
			ACQUIA.video();
		},
	};
	
	// Set Globals
	ACQUIA.setGlobals();
	ACQUIA.setDeviceWidth();

	$document.ready(ACQUIA.onReady.init);
	$window.load(ACQUIA.onLoad.init);
	
}(jQuery));

/**
* Provide the HTML to create the font icon.
*/
Drupal.theme.prototype.font_icon = function (icon) {
	var _class = 'font-icon';
	if (icon != '' && icon != undefined) {
		_class += ' '+ icon;
	}
  return '<span class="'+_class+'"></span>';
}

