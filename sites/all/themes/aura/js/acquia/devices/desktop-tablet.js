/**
 * Acquia Desktop & Tablet Specific JS
 *
 * @author Carlo Carlos
 */
var $document = jQuery(document),
		$window = jQuery(window);

jQuery(document).ready(function($) {
	/**
	 * Columnize 
	 */
	$.fn.columnize = function(opts) {
		var settings = {
			relativeContainer: '',
			cols: 4,
			colPadding: 0,
		};

		$.extend(true, settings, opts);
		return this.each(function() {
			container = $(this);
			if ($(settings.relativeContainer).length != 0) {
				var relativeContainer = $(settings.relativeContainer);
			}else {
				var relativeContainer = container;
			}

			var containerMargin = parseInt(relativeContainer.css('marginLeft')),
				containerWidth = relativeContainer.innerWidth() + (containerMargin *2),
				containerID = container.attr("data-g-i"),
				tempCSS = "",
				first = false,
				colFloat = false;

			if ($('body').hasClass('tablet-browser')) {
				settings.cols = 3;
			}else if ($window.width() < ACQUIA.g.breakPoints.mobile) {
				settings.cols = 1
				settings.colPadding = 0;
			}else if ($('body').hasClass('mobile-browser')) {
				settings.cols = 2
				settings.colPadding = settings.colPadding > 0 ? 10 : 0;
				colFloat = true;
			}
			
			if ($("#grid-style-"+containerID).length == 0) {

				if(!$("html").hasClass("old-ie")){	// IE
					var jsStyle = document.createElement("style");
					jsStyle.id = "grid-style-"+containerID;
					jsStyle.appendChild(document.createTextNode(""));
					document.head.appendChild(jsStyle);
				}
			} else {
				var jsStyle = document.getElementById("grid-style-"+containerID);
			}


			var $style = $("#grid-style-"+containerID);

			var gridWidth,
				normalizedPadding,
				normalizedMargin;

			if (settings.colPadding < 10) {
				normalizedPadding = 0;
			}
			else {
				normalizedPadding = settings.colPadding - 10;
			};
			if (settings.colPadding == 0) {
				normalizedMargin = 0;
			}
			else {
				normalizedMargin = -settings.colPadding;
			};

			if (container.closest('.ac-full-container-width').length > 0) {
				containerWidth -= settings.colPadding*2;
			}else if(settings.relativeContainer.length == 0 || containerMargin != 0){
				containerWidth += settings.cols > 1 ? settings.colPadding*2 : 0;
			}
			
			if (relativeContainer.is('.ac-slider') && container.closest('.ac-full-container-width').length == 0){
				relativeContainer.css('margin', -settings.colPadding +'px');
			}

			gridWidth = Math.floor(containerWidth/settings.cols);
			gridWidth = settings.cols <6 ? gridWidth+"px" : (gridWidth-2)+"px";				

		
			if (settings.cols > 1) {
				tempCSS = " \
					.ac-full-container-width .g-i-"+containerID+" { margin: "+normalizedMargin+"px  "+settings.colPadding+"px; } \
					.g-i-"+containerID+" { margin:-"+settings.colPadding+"px; } \
					.g-i-"+containerID+" > .ac-col { width: "+gridWidth+";} \
					.g-i-"+containerID+" > .ac-col > .item-i{ margin: "+settings.colPadding+"px; } \
				";
				if (colFloat) {
					tempCSS += ".g-i-"+containerID+" > .ac-col { float: left; clear: none} ";
				}
			}
			else {

				tempCSS = " \
					.ac-full-container-width .g-i-"+containerID+" { margin: "+normalizedMargin+"px  "+settings.colPadding+"px; } \
					.g-i-"+containerID+" { margin: -"+settings.colPadding+"px; } \
					.g-i-"+containerID+" > .ac-col { width: "+gridWidth+";} \
					.g-i-"+containerID+" > .ac-col > .item-i{ margin: 0; } \
				";
			};

			if($("html").hasClass("old-ie")){
				$("#static-stylesheet").prop('styleSheet').cssText = tempCSS;
			}else{
				$style.html(tempCSS);
				var newRuleID = jsStyle.sheet.cssRules.length;
				jsStyle.sheet.insertRule(".webkit-hack { }", newRuleID);
				jsStyle.sheet.deleteRule(newRuleID);
			}

			container.trigger("columnsReady");

		});
	};
});

(function($) {

	/**
	 * customPreloader
	 */
	ACQUIA.customPreloader = function() {	
		if (typeof ACQUIA.g.masonryCollection!= "undefined" && ACQUIA.g.masonryCollection.length >0) {
			ACQUIA.g.masonryCollection.each(function() {
				var $isoContainer = $(this),
					isoLoader = $isoContainer.siblings('.ac-preloader').length >0 ? 
						$isoContainer.siblings('.ac-preloader') : 
						$(ACQUIA.g.preloader).insertBefore($isoContainer);
			});
		}
	},
	
	/**
	 * gridLayout
	 */
	ACQUIA.gridLayout = function() {

		ACQUIA.g.masonryCollection = $(".ac-appearance-masonry"),
			ACQUIA.g.gridCollection = $(".ac-carousel, .ac-appearance-grid"),
			ACQUIA.g.combinedCollection = ACQUIA.g.masonryCollection.add(ACQUIA.g.gridCollection);

			/* !Smart responsive columns */
		if (ACQUIA.g.combinedCollection.length > 0) {
			ACQUIA.g.combinedCollection.each(function(i) {
					var $container = $(this);
					var prepareGrid = function($container){
						settings = {};
						
						settings.cols = parseInt($container.attr("data-columns")),
						settings.colPadding = parseInt($container.attr("data-padding"));
						
						settings.cols = !isNaN(settings.cols) ? settings.cols : 3;
						settings.colPadding = !isNaN(settings.colPadding) ? settings.colPadding : 20;

						$container.addClass("g-i-"+i).attr("data-g-i", i);
						
						if ($container.is('.ac-carousel')) {
							settings.relativeContainer = $container.closest('.caroufredsel_overflow');
						}else if ($container.is('.slides')) {
							settings.relativeContainer = $container.closest('.ac-slider');
						}
						$container.columnize(settings);
					};

					prepareGrid($container);
					$(window).on("debouncedresize, layoutChanged", function () {
						prepareGrid($container);
					});
			});
		}

	};
	
	/**
	 * Masonry and grid layout
	 */
	ACQUIA.multiGrid = function() {
		$.fn.collage = function() {
			return this.each(function() {
				var $this = $(this);
				var $jgContainer = $(this),
					$jgItemsPadding = $jgContainer.attr("data-padding"),
					$jgItems = $jgContainer.find(".ac-col");
				var jgPadding = parseInt($jgContainer.attr("data-padding")) ? parseInt($jgContainer.attr("data-padding")) : 0,
					jgTargetHeight = parseInt($jgContainer.attr("data-gplus_height")) ? parseInt($jgContainer.attr("data-gplus_height")) : 350, // @todo[high]
					jgTargetEffect = parseInt($jgContainer.attr("data-gplus_effect")) ? parseInt($jgContainer.attr("data-gplus_effect")) : 'effect-1', // @todo[high]
					jdPartRow = true;

				if ($jgContainer.attr("data-part-row") == "false") {
					jdPartRow = false;
				};


				if($jgContainer.parent(".ac-full-container-width").length){
					var jgAlbumWidth = $jgContainer.parents(".ac-full-container-width").width() - parseInt($jgItemsPadding)*2;
				}else{
					var jgAlbumWidth = $jgContainer.parent().width() + parseInt($jgItemsPadding)*2;
				}
				
				var $jgCont = {
					'albumWidth'			: jgAlbumWidth,
					'targetHeight'			: jgTargetHeight,
					'padding'				: jgPadding,
					'allowPartialLastRow'	: jdPartRow,
					'fadeSpeed'				: 2000,
					'effect'				: jgTargetEffect,
					'direction'				: 'vertical'
				};
				//dtGlobals.jGrid = $jgCont;
				$jgContainer.collagePlus($jgCont);
				$jgContainer.css({
					'width': jgAlbumWidth
				});

			});
		};
		
		$(window).on("debouncedresize", function() {
			$(".ac-appearance-multigrid").collage();
		});
		$(".ac-appearance-multigrid").collage();
	}
	
	/**
	 * Masonry layout
	 */
	ACQUIA.isotope = function() {
	
			/*Filter*/
			var $container = $('.ac-appearance-masonry');

			$('.filter:not(.with-ajax) .tag-sortings a').on('click', function(e) {
				$container = $(this).closest('.block').find('.ac-appearance-masonry');
				$(this).closest('ul').find('li').removeClass('selected').find('a').removeClass('active');
				$(this).closest('li').addClass('selected');

				var selector = $(this).attr('data-filter');
				$container.isotope({ filter: selector });
				return false;
			});

			// filtering > by data & title
			$('.filter:not(.with-ajax) .ex-sortings .date-title-filter a').on('click', function(e) {
				$container = $(this).closest('.filter').parent().find('.ac-appearance-masonry');
				var sorting = $(this).attr('data-filter'),
					sort = $(this).closest('.ex-sortings').find('.sort-order > a.active').first().attr('data-filter');

				$container.isotope({ sortBy : sorting, sortAscending : 'asc' == sort });
				return false;
			});

			// Sorting > ASC | DESC
			$('.filter:not(.with-ajax) .ex-sortings .sort-order a').on('click', function(e) {
				$container = $(this).closest('.filter').parent().find('.ac-appearance-masonry');
				var sort = $(this).attr('data-filter'),
					sorting = $(this).closest('.ex-sortings').find('.date-title-filter > a.active').first().attr('data-filter');
				$container.isotope({ sortBy : sorting, sortAscending : 'asc' == sort });
				return false;
			});
	
			if (typeof ACQUIA.g.masonryCollection!= "undefined" && ACQUIA.g.masonryCollection.length >0) {
				ACQUIA.g.masonryCollection.each(function() {
					var $isoContainer = $(this),
						preloader = $isoContainer.siblings('.ac-preloader').length >0 ? 
							$isoContainer.siblings('.ac-preloader') : 
							$(ACQUIA.g.preloader).insertBefore($isoContainer);
					
						// Masonry init
						$isoContainer.isotope({
							resizable: false,
							layoutMode : 'masonry',
							animationEngine: 'best-available',
							masonry: { columnWidth: 1 },
							getSortData : {
								date : function( $elem ) {
									return $elem.attr('data-date');
								},
								title : function( $elem ) {
									return $elem.attr('data-title');
								}
							}
						});
				
						$window.on("debouncedresize", function(){
							$isoContainer.isotope("reLayout");
						});
	
						// Show item(s) when image inside is loaded
						$("> .ac-col", $isoContainer).css('opacity', 0).imagesLoaded(function () {
							setTimeout(function(){
								preloader.stop().animate({
									"opacity": 0,
								}, 150, function() {
									//preloader.remove();
									$isoContainer.animate({'opacity':1},300);
									$("> .ac-col", $isoContainer).each(function(i){
										$(this).delay(i*150).animate({'opacity':1},300);
									});
								});
	
							},1000);
						});
				});

			}
	};

	/**
	 * Init fixed header transitions
	 */
	ACQUIA.fixedHeader = function() {
		var scrTop = 0,
			$fixedHeader = $('<div id="fixed_header_clone" class="fixed_header_clone"><div class="l-header"><div class="container"><div class="c-i"></div></div></div>').appendTo(".l-page"),
			$fixedHeaderBox = $fixedHeader.find(".c-i"),
			$parent = $('#block-system-main-menu').parent().first(),
			$header = $parent.children(),
			isMoved = false,
			breakPoint = 0,
			threshold = $(".l-header").offset().top + $(".l-header").height(),
			doScroll = false,
			$container = $(".l-header"),
			$containerH = parseInt($container.height()),
			$originalH = $containerH,
			$nav = $header.find('#block-system-main-menu .dropdownmenu > ul > li > a'),
			$navH = parseInt($nav.css('height')),
			resizeHeader = function(){
				var tempCSS = {},
				tempScrTop = $(window).scrollTop(),
				newH = 0;
				if(tempScrTop < $containerH/2) {
					newH = $containerH;
				}else{
					newH = 65;
				}
				if (tempScrTop > threshold && isMoved === false) {
					$fixedHeader.addClass("fixed_showed");
					$('body').addClass("fixed_showed");
					$header.appendTo($fixedHeaderBox);
					isMoved = true;
				}
				else if (tempScrTop <= threshold && isMoved === true) {
					$fixedHeader.removeClass("fixed_showed");
					$('body').removeClass("fixed_showed");
					$header.appendTo($parent);
					isMoved = false;
				}

				if (newH - $navH < 10) {
					$('body').addClass('mini-nav');
				}else{
					$('body').removeClass('mini-nav');
				}
					
				scrTop = $window.scrollTop();
			},
			resetHeader = function(){
					if ($fixedHeader.hasClass('fixed_showed')) {
						$header.prependTo($parent);
						$fixedHeader.removeClass('fixed_showed');
					}
			};

		if (!$('body').hasClass('header-l-left')) {
			$('.l-branding').clone().prependTo($fixedHeaderBox);
		}

		$window.on("debouncedresize", function() {
			if ($('body').hasClass('mobile_active')) {
				resetHeader();
			}
		});

		$window.on("scroll", function() {
			if ($('body').hasClass('mobile_active')) {
				resetHeader();
			}else{
				resizeHeader();
			}
		});
		
		resizeHeader();
		//resetHeader();
	};

	ACQUIA.onReady = {
		init: function() {
			ACQUIA.gridLayout();
			ACQUIA.customPreloader();
			if ($('body').is('.fixed_header') && !$('body').is('.ac-transparent-depth-semi-soft')) {
				ACQUIA.fixedHeader();
			}
		},
	};
	
	ACQUIA.onLoad = {
		init: function() {

			if (jQuery().isotope) {
				ACQUIA.isotope();
			}	

			if (jQuery().collagePlus && $('.ac-appearance-multigrid').length >0) {
				ACQUIA.multiGrid();
			}

		},
	};
	
	$document.ready(ACQUIA.onReady.init);
	$window.load(ACQUIA.onLoad.init);
	
}(jQuery));
