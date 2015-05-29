/**
 * Acquia Phone Specific JS
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
				first = false;

			if ($('body').hasClass('mobile-browser')) {
				settings.cols = 1
				settings.colPadding = 1
			}else if ($('body').hasClass('tablet-browser')) {
				settings.cols = 2;
			}

			if ($("#grid-style-"+containerID).length == 0) {
				$("body").append('<style id="grid-style-'+containerID+'" />');
			};

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

			gridWidth = Math.floor(containerWidth/settings.cols);
			gridWidth = settings.cols <6 ? gridWidth+"px" : (gridWidth-2)+"px";				

			if (settings.cols > 1) {
				tempCSS = " \
					.ac-full-container-width .g-i-"+containerID+" { margin: "+normalizedMargin+"px  "+settings.colPadding+"px; } \
					.g-i-"+containerID+" { margin:-"+settings.colPadding+"px; } \
					.g-i-"+containerID+" > .ac-col { width: "+gridWidth+";} \
					.g-i-"+containerID+" > .ac-col > .item-i{ margin: "+settings.colPadding+"px; } \
				";
			}
			else {

				tempCSS = " \
					.ac-full-container-width .g-i-"+containerID+" { margin: "+normalizedMargin+"px  "+settings.colPadding+"px; } \
					.g-i-"+containerID+" { margin: -"+settings.colPadding+"px; } \
					.g-i-"+containerID+" > .ac-col { width: "+gridWidth+";} \
					.g-i-"+containerID+" > .ac-col > .item-i{ margin: 0; } \
				";
			};
			$style.html(tempCSS);
			container.trigger("columnsReady");
		});
	};
});

(function($) {

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
					container = $(this),
					settings = {};
					
					settings.cols = parseInt(container.attr("data-columns")),
					settings.colPadding = parseInt(container.attr("data-padding"));
					
					settings.cols = !isNaN(settings.cols) ? settings.cols : 3;
					settings.colPadding = !isNaN(settings.colPadding) ? settings.colPadding : 20;

					container.addClass("g-i-"+i).attr("data-g-i", i);
					
					if (container.is('.ac-carousel')) {
						settings.relativeContainer = container.closest('.caroufredsel_overflow');
					}else if (container.is('.slides')) {
						settings.relativeContainer = container.closest('.ac-slider');
					}
					container.columnize(settings);
					/* console.log(settings); */
					$(window).on("debouncedresize", function () {
						if (container.is('.ac-carousel')) {
							settings.relativeContainer = container.closest('.caroufredsel_overflow');
						}
						container.columnize(settings);
					});
					
					$(container).on("debouncedresize", function () {
						container.columnize(settings);
					});
			});
		}

	};
	
	/**
	 * portoflio
	 */
	ACQUIA.portfolio = function() {

	};

	ACQUIA.onReady = {
		init: function() {
			ACQUIA.gridLayout();
		},
	};

	$document.ready(ACQUIA.onReady.init);
	$window.load(ACQUIA.onLoad.init);
	
}(jQuery));

 