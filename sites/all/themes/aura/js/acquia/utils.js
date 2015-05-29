var ACQUIA = ACQUIA || {};

ACQUIA.behaviors = ACQUIA.behaviors || {};
ACQUIA.utils = ACQUIA.utils || {};
ACQUIA.g = ACQUIA.g || {};

(function($) {

/***************************************************
 Acquia UTILITIES
 ***************************************************/
	/**
	 * Contains some general helper functions.
	 * @type {Object}
	 */
	ACQUIA.utils = {
		/**
		 * Retrieves the current browser info.
		 * Code from jQuery Migrate: http://code.jquery.com/jquery-migrate-1.2.0.js
		 * @return an object containing the browser info, for example for IE version 7
		 * it would return:
		 * {msie:true, version:7}
		 */
		browserInfo : function(){
			var browser = {},
				ua,
				match,
				matched;

			if(ACQUIA.g.browser){
				return ACQUIA.g.browser;
			}

			ua = navigator.userAgent.toLowerCase();

			match = /(chrome)[ \/]([\w.]+)/.exec( ua ) ||
				/(webkit)[ \/]([\w.]+)/.exec( ua ) ||
				/(opera)(?:.*version|)[ \/]([\w.]+)/.exec( ua ) ||
				/(msie) ([\w.]+)/.exec( ua ) ||
				ua.indexOf("compatible") < 0 && /(mozilla)(?:.*? rv:([\w.]+)|)/.exec( ua ) ||
				[];

			matched = {
				browser: match[ 1 ] || "",
				version: match[ 2 ] || "0"
			};

			if ( matched.browser ) {
				browser[ matched.browser ] = true;
				browser.version = matched.version;
			}

			// Chrome is Webkit, but Webkit is also Safari.
			if ( browser.chrome ) {
				browser.webkit = true;
			} else if ( browser.webkit ) {
				browser.safari = true;
			}

			ACQUIA.g.browser = browser;

			return browser;
		},
		
		/**
		 * Checks if the current device is a mobile device. If it is a mobile device, and it is within
		 * the recognized devices, adds its specific class to the body.
		 * @return {boolean} setting if the device is a mobile device or not
		 */
		isMobile : function(){
			if(typeof ACQUIA.g.mobile !== 'undefined') {
				return ACQUIA.g.mobile;
			}
			var userAgent = navigator.userAgent.toLowerCase(),
				devices = [{
					'class': 'iphone',
					regex: /iphone/
				}, {
					'class': 'ipad',
					regex: /ipad/
				}, {
					'class': 'ipod',
					regex: /ipod/
				}, {
					'class': 'android',
					regex: /android/
				}, {
					'class': 'bb',
					regex: /blackberry/
				}, {
					'class': 'iemobile',
					regex: /iemobile/
				}],
				i, len;

			ACQUIA.g.mobile = false;
			
			if (jQuery().Modernizr) {
			
				if ((Modernizr.touch && !(navigator.userAgent.indexOf("iPad") != -1)) || (Modernizr.touch && (navigator.userAgent.indexOf("iPhone") != -1)) || (Modernizr.touch && (navigator.userAgent.indexOf("Android") != -1))) {
					ACQUIA.g.mobile = true;
					ACQUIA.g.mobile.type = navigator.userAgent;
				}
			} else if ('ontouchstart' in document.documentElement) {
			
				ACQUIA.g.mobile = true;
				for(i = 0, len = devices.length; i < len; i += 1) {
					if(devices[i].regex.test(userAgent)) {
						$('body').addClass(devices[i]['class']);
						ACQUIA.g.mobile.type = devices[i]['class'];
					}
				}
			}
			
			if (ACQUIA.g.mobile) {
				$('body').addClass('mobile-device');
			}else{
				$('body').addClass('desktop-device');
			}
			
			return ACQUIA.g.mobile;
		},

		/**
		 * check if given variable is an array
		 * @param {void} obj - variable to check
		 * @return {boolean} if the variable is an array or not
		 */
		isArray : function( obj ){
			var objToString = Object.prototype.toString;
			return objToString.call( obj ) === '[object Array]';
		},
		
		/**
		 * turn element or nodeList into an array
		 * @param {object} obj - element or nodeList
		 * @return {array} converted object to array
		 */
		makeArray : function( obj ){
			var ary = [];
			if ( isArray( obj ) ) {
				// use object if already an array
				ary = obj;
			} else if ( typeof obj.length === 'number' ) {
				// convert nodeList to array
				for ( var i=0, len = obj.length; i < len; i++ ) {
					ary.push( obj[i] );
				}
			} else {
				// array of single index
				ary.push( obj );
			}
			return ary;
		},
		
			/**
		 * turn element or nodeList into an array
		 * @param {string} imgSrc - source of image
		 * @return {array} array of iamge dimensions
		 */
		getImgSize : function( imgSrc ){
			var newImg = new Image();

			newImg.onload = function() {
				return {width: newImg.width, height:newImg.height};
			}

			newImg.src = imgSrc;
		},
		
		/**
		 * Does browser supports transitions?
		 * @return {boolean} transition support
		 */
		supportsTransitions : function(  ){
			var docBody = document.body || document.documentElement;
			var styles = docBody.style;
			var prop = "transition";
			if (typeof styles[prop] === "string") {
				return true;
			}
			// Tests for vendor specific prop
			vendor = ["Moz", "Webkit", "Khtml", "O", "ms"];
			prop = prop.charAt(0).toUpperCase() + prop.substr(1);
			var i;
			for (i = 0; i < vendor.length; i++) {
				if (typeof styles[vendor[i] + prop] === "string") {
					return true;
				}
			}
			return false;
		},
		
	};

	/**
	 * Parallax class - contains methods to apply various parallax animations
	 * to an element or set of elemements.
	 * @param  {object} $el     the element to apply the animation to
	 * @param  {string} type    the type of animation - available options:
	 * - background : animates a background image, changes its position on scroll
	 * - list : animates a list of items, one after another
	 * - single : animates a single item
	 * @param  {object} options options for the animation. Properties:
	 * - children : a list of elements to animate when the type of animation
	 * is set to list
	 * - initProp : object containing a set of CSS properties that are applied
	 * to each element before the animation starts
	 * - endProp : object containing a set of CSS properties that are applied
	 * to each element to be animated
	 */
	ACQUIA.utils.parallax = function($el, type, options){
		if (!jQuery().waypoint) {
			return;
		}
		this.$el = $el;
		this.type = type;
		
		var defaults = {
			animType: $el.data('anim-type') ? $el.data('anim-type') : 'fadeIn',
			when: $el.data('anim-when') ? $el.data('anim-when') : 'visible',
			delay: $el.data('anim-delay') ? $el.data('anim-delay') : 250,
			initProp : {opacity:0, position: 'relative'},
			endProp: {opacity:1}
		};

		this.options = $.extend({}, defaults, options);
		this.options.offset = this.options == 'visible' ? '110%' : '90%';
	};

	/**
	 * Inits the parallax functionality. Calls the corresponding animation
	 * method depending on the type of effect selected.
	 */
	ACQUIA.utils.parallax.prototype.init = function(){
		var self = this,
			funcToExec = {
			'background' : 'setBackground',
			'list' : 'setList',
			'single' : 'setSingleElement',
			'list_single' : 'setListSingle',
			'attribute' : 'setAttribute',
		};

		if(self.type in funcToExec){
			ACQUIA.utils.parallax.prototype[funcToExec[self.type]].call(this);
		}
	};

	/**
	 * Sets a parallax background image functionality. Moves the image position
	 * on mouse scroll.
	 */
	ACQUIA.utils.parallax.prototype.setBackground = function(){
		var self = this,
			$el = self.$el,
			$parent = $el.parent(),
			waypoints = {},
			maxTop = 300,
			numSteps = 100,
			topStep = maxTop/numSteps,
			initWaypoint = 90,
			endWaypoint = 200,
			waypointStep = Math.floor((initWaypoint+endWaypoint) / numSteps);

			//generate an array containing waypoints and the corresponding data
			for(var i=0; i<numSteps; i++){
				waypoints[initWaypoint-i*waypointStep] = '-'+((i*1.4)*topStep)+'px';
			}
			$.each(waypoints, function(top, waypoint){
				$parent.waypoint(function(direction){
					$el.stop().acquiaAnimate({'background-position': '50% ' + waypoint});
				}, {offset:top+'%'});
			});

	};
	/**
	 * setAttribute
	 */
	ACQUIA.utils.parallax.prototype.setAttribute = function(){
		var self = this,
			$el = self.$el;

			$el.waypoint(function(){
				$el.addClass('ac-animated' + ' ' + self.options.attrType)
				.waypoint('destroy');
					setTimeout(function () {
						$el.removeClass(self.options.attrType)
					}, self.options.delay);
			}, {'offset': self.options.offset});
	};

	/**
	 * Registers a single element parallax animation. The "initProp" and
	 * "endProp" properties should be set to the constructor's options object.
	 */
	ACQUIA.utils.parallax.prototype.setSingleElement = function(){
		var self = this,
			$el = self.$el.css(self.options.initProp);
			
		if (self.options.delay) {
			setTimeout(function () {
				$el.waypoint(function(){
					$el.addClass('ac-animated' +' '+ self.options.animType)
						.css(self.options.endProp)
						.trigger('ac_start_animation')
						.waypoint('destroy');
				}, {'offset': self.options.offset});
			}, self.options.delay);
		}else{
			$el.waypoint(function(){
				$el.addClass('ac-animated' +' '+ self.options.animType)
					.css(self.options.endProp)
					.trigger('ac_start_animation')
					.waypoint('destroy');
			}, {'offset': self.options.offset});
		}
	};

	/**
	 * Registers a list of elements parallax animation. The "initProp" and
	 * "endProp" properties should be set to the constructor's options object
	 * to set the animation properties. Also a "children" property should be
	 * added to the options object containing the children elements to be loaded.
	 */
	ACQUIA.utils.parallax.prototype.setList = function(){
		var self = this,
			$el = self.$el,
			$children = self.options.children
				.css(self.options.initProp);

			$el.waypoint(function(direction){

				$children.each(function(i){
					var $element = $(this);
					setTimeout(function(){
						$element
							.addClass('ac-animated' +' '+ self.options.animType)
							.css(self.options.endProp)
							.trigger('ac_start_animation');
					}, i * self.options.delay);
				});

				$el.waypoint('destroy');

			}, {'offset': self.options.offset});


	};
	
	/**
	 * Custom List animation
	 */
	ACQUIA.utils.parallax.prototype.setListSingle = function(){
	
		var self = this,
			$el = self.$el,
			$children = self.options.children
				.css(self.options.initProp);
			$children.each(function(i){
					var $element = $(this);
					$element.waypoint(function(){
						setTimeout(function(){
							$element.addClass('ac-animate ac-animated' +' '+ self.options.animType)
								.css(self.options.endProp)
								.trigger('ac_start_animation')
								.waypoint('destroy');
						}, i * self.options.delay);
					}, {'offset': self.options.offset});
			});

	};

	/*------------------------------------------------------------------------*/
	/* BACKGROUND IMAGE COVER FALLBACK
	/*------------------------------------------------------------------------*/
	
	/**
	 * CSS background-size:cover fallback. Main constructior.
	 */
	ACQUIA.utils.bgCoverFallback = function($el){
		this.$el = $el;
	};

	/**
	 * Inits the fallback functionality - sets the background image as an image
	 * element that is positioned main div element.
	 */
	ACQUIA.utils.bgCoverFallback.prototype.init = function(){
		var self = this,
			src='',
			img,
			$img;

		src = self.$el.css('backgroundImage');
		self.$el.css({'backgroundImage':''});
		src = src.replace('url("','').replace('")','');

		img = new Image();
		img.src = src;

		$img = $(img).appendTo(self.$el);
		self.$img = $img;

		new ACQUIA.utils.fullBgImage($img).init();
	};

	/* FULLBG Image
	--------------------------------------------------------*/
	ACQUIA.utils.fullBgImage = function($img){
		this.$img = $img;
		this.$parent = $img.parent();
		var imgSize = ACQUIA.utils.getImgSize($img);
		this.imgWidth = imgSize.width;
		this.imgHeight = imgSize.height;
	};

	ACQUIA.utils.fullBgImage.prototype.init = function(){
		var self = this;
		self.positionImage();

		$(window).on('resize', function(){
			self.positionImage();
		});
	};

	ACQUIA.utils.fullBgImage.prototype.positionImage = function(){
		var self = this,
			parentWidth = self.$parent.width(),
			parentHeight = self.$parent.height(),
			imgSize = ACQUIA.utils.getImgSize(self.$img),
			imgWidth = self.imgWidth,
			imgHeight = self.imgHeight,
			displayHeight = Math.round(parentWidth * imgHeight / imgWidth),
			args = {};

			if(parentWidth/parentHeight > imgWidth/imgHeight){
				args = {
					width:'100%',
					height:'auto',
					left:0
				};

				self.$img.css(args);

				var curImgHeight = self.$img.height(),
					top = curImgHeight > parentHeight ? - (curImgHeight - parentHeight) / 2 : 0;
				
				self.$img.css({top:top});

			}else{
			
				args = {
					width:'auto',
					height:'100%',
					top:0
				};

				self.$img.css(args);

				var curImgWidth = self.$img.width(),
					left = curImgWidth > parentWidth ? - (curImgWidth - parentWidth) / 2 : 0;

				self.$img.css({left:left});
			}
		
	};

	/*------------------------------------------------------------------------*/
	/* STICKY HEADER
	/*------------------------------------------------------------------------*/

	/**
	 * Sticky header functionality - displays the hader always on the top of the
	 * screen.
	 * @param  {object} $element jQuery element - the header element
	 * @param  {object} options  the options settings
	 */
	ACQUIA.utils.stickyHeader = function($element, options){
		
		this.defaults     = {
			scrollHeight : 64,
			scrollClass : 'fixed-header-scroll'
		},
		this.o       = $.extend(this.defaults, options),
		this.$el 		 = $element;
		this.$body   = $('body');
		this.$win    = $(window);
		
		$(window).on("debouncedresize", this.setVisibility);
		
	};


	/**
	 * Inits the sticky header functionality.
	 */
	ACQUIA.utils.stickyHeader.prototype.init = function(){
			
		var self = this;
		self.$parent = this.$el.parent();
		self.setPositions();

		$('#logo').imagesLoaded(function () {
			//refresh the default header height when the logo image has been loaded
			if(!self.scrolled){
				self.defaultHeight = self.$el.outerHeight();
				self.setPositions();
			}
		});

		$(window).on('mousewheel pexetoscroll scroll', function(){
			self.setPositions();
		});
	};
	
	/**
	 * Checks whether the current window is scrolled.
	 * @return {boolean} true if it is scrolled and false if it is not scrolled
	 */
	ACQUIA.utils.stickyHeader.prototype.isScrolled = function(){
		return ACQUIA.g.scroll ? true : false;
	};

	/**
	 * Positions the depending elements of the sticky header depending
	 * on the current header position.
	 */
	ACQUIA.utils.stickyHeader.prototype.setPositions = function(){
		var self = this,
			currentScrolled = self.isScrolled();
		
		if(!self.defaultHeight){
			self.defaultHeight = self.$el.outerHeight();
		}

		if(currentScrolled && !self.scrolled){
			self.scrolled = true;
			self.$body.addClass(self.o.scrollClass);
			self.$parent.css({paddingTop:self.o.scrollHeight}); 
			self.$win.trigger('acquiaStickyChange');
		}else if(!currentScrolled && (self.scrolled || self.scrolled===undefined)){
			self.scrolled = false;
			self.$body.removeClass(self.o.scrollClass);
			self.$parent.css({paddingTop:self.defaultHeight}); 
			self.$win.trigger('acquiaStickyChange');
		}
	};
})(jQuery);



(function($) {

	$.fn.acquiaGrid = function(opts) {
		return this.each(function() {

			var	defaults = {
					colSel: "",
					contentSel: "",
					borderSel: "",
					borders: false,
					lazyload: true,
					responsiveWidth: 150,
					normalize: false,
					doWidth: true,
					doHeight: false,
					doLHeight: false,
				},
				settings = $.extend({}, defaults, opts),
				$gridContainer	= $(this),
				$cols = settings.colSel ? $(settings.colSel, $gridContainer) : $gridContainer.children();
			
			if ($cols.length < 1) return false;

			var getColSettingsByClass = function(_class){
				var out = {'cols': 1, 'w': '100%', 'class': 'ac-full-width'};
				$.each(ACQUIA.g.colSettings, function (_colClass, _settings) {
					if (_class.toLowerCase().indexOf(_colClass) >= 0) {
						out =  $.extend({}, {'class': _colClass}, _settings);
						return false;
					}
				});
				return out;
			};
			
			var calcWidth = function() {
				var	containerWidth = $gridContainer.width();

				var $this = $($cols[0]),
					curW = $this.width(),
					basicW,
					defaultCols = $gridContainer.data("columns"),
					defaultColWidth = $gridContainer.data("cols-width"),
					basicClass =  $gridContainer.data("basicClass");

				if (!defaultCols){
					var colSettings = getColSettingsByClass($this.attr('class'));
						defaultCols = colSettings.cols;
						defaultColWidth = colSettings.w;
						basicClass = colSettings.class;
				};
				
				$gridContainer.data("defaultCols", defaultCols);
				$gridContainer.data("cols-width", defaultColWidth);
				$gridContainer.data("basicClass", basicClass);

				basicW = containerWidth/defaultCols;

				if (settings.normalize) {
					if (basicW < 150 && containerWidth/2 > 150) {
						$cols.css("width", "50%");
					}
					else if (basicW < 150 && containerWidth/2 <= 150) {
						$cols.css("width", "100%");
					}
					else {
						$cols.css("width", defaultColWidth);
					};
				}
				else {
					if (basicW > settings.responsiveWidth) {
						$cols.css("width", defaultColWidth);
					} else {
						$cols.css({ 'width': 100/Math.floor(containerWidth/settings.responsiveWidth)+'%' });
					}
				};
			};

			var calcHeight = function() {
				var	topPosition = 0,
					totalRows = 0,
					currentRowStart = -1.687, // It's a kinda magic!
					currentRow = -1,
					rows = [],
					tallest =  [];

					$cols.each(function() {

						var $this = $(this),
							currentHeight = settings.contentSel ? $(settings.contentSel, $this).outerHeight(true) : $this.children().outerHeight(true);

						topPostion = $this.position().top;
						if (currentRowStart != topPostion) {
							// We just came to a new row
							// Set the variables for the new row
							currentRow++;
							currentRowStart = topPostion;
							tallest[currentRow] = currentHeight;
							rows.push([]);
							rows[currentRow].push($this);
						} else {
							if (currentRow < 0) {
								currentRow = 0;
								rows.push([]);
							}
							// Another div on the current row. Add it to the list and check if it's taller
							rows[currentRow].push($this);
							tallest[currentRow] = (tallest[currentRow] < currentHeight) ? (currentHeight) : (tallest[currentRow]);
						}

					});

					totalRows = rows.length;
					for (i = 0; i < totalRows; i++) {
						var inCurrentRow = rows[i].length;
						for (j = 0; j < inCurrentRow; j++) {

							settings.borderSel ? $(settings.borderSel, rows[i][j]).css("height", tallest[i]) : rows[i][j].css("height", tallest[i]);

							if (settings.doLHeight)
							settings.borderSel ? $(settings.borderSel, rows[i][j]).css("line-height", tallest[i] + 'px') : rows[i][j].css("line-height", tallest[i] + 'px');
							
							if (settings.borders && j == 0) {
								rows[i][j].addClass("ac-no-l-border");
							} else {
								rows[i][j].removeClass("ac-no-l-border");
							}
							
							if (settings.borders && i == totalRows - 1) {
								rows[i][j].addClass("ac-no-b-border");
							} else {
								rows[i][j].removeClass("ac-no-b-border");
							}

						}
					}

				}


			if (settings.doWidth) calcWidth();
			if (settings.doHeight || settings.doLHeight) calcHeight();

			if (settings.lazyload) {

				$("img", $cols).imagesLoaded(function (item) {
						$gridContainer.addClass("ac-grid-ready");
						calcHeight();
						if (settings.doHeight || settings.doLHeight) calcHeight();
				});
			} else {
				$gridContainer.addClass("ac-grid-ready");
			}

			$(window).on("debouncedresize", function() {
				if (settings.doWidth) calcWidth();
				if (settings.doHeight || settings.doLHeight) calcHeight();
			});

		});
	}
	
	$.fn.acquiaAnimate = function(){
		var properties={},
			callback = null,
			namespace = 'acquiaAnimate',
			callbackCalled = false;

		if(!arguments.length || typeof arguments[0]!=='object'){

			return $(this);
		}

		if(ACQUIA.utils.supportsTransitions){
			properties = arguments[0];
			if(arguments[1]){
				callback = arguments[1];
				$(this).on('transitionend.'+namespace+' webkitTransitionEnd.'+namespace+' oTransitionEnd.'+namespace+' MSTransitionEnd.'+namespace, function(e){
					if(!callbackCalled){
						callback.call();
						$(this).off(namespace);
						callbackCalled = true;
					}
					
				});
			}
			$(this).css(properties)
		}else{
			$.fn.animate.apply($(this), arguments);
		}

		return $(this);
	};

	// !- Responsive height hack
	$.fn.acquiaResponsiveHeight = function() {
		return this.each(function() {
			var $img = $(this);
			if ($img.hasClass("ac-h-ready")) {
				return;
			}
			var	imgW = parseInt($img.attr('width')),
				imgH = parseInt($img.attr('height')),
				imgR = imgW/imgH;

			$img.parent().css({
				"padding-bottom" : 100/imgR+"%",
				"height" : 0,
				"display" : "block"
			});

			$img.attr("data-ratio", imgRatio).addClass("ac-h-ready");
		});
	};
	
}(jQuery));

/**
 * Acquia Fancy Select
 */
(function ($) {
    'use strict';

    $.fn.extend({
        acquiaFancySelect: function (options) {
            // filter out <= IE6
            if (typeof document.body.style.maxHeight === 'undefined') {
                return this;
            }
            var defaults = {
                    customClass: 'customSelect',
                    mapClass:    true,
                    mapStyle:    true
            },
            options = $.extend(defaults, options),
            prefix = options.customClass,
            changed = function ($select,customSelectSpan) {
                var currentSelected = $select.find(':selected'),
                customSelectSpanInner = customSelectSpan.children(':first'),
                html = currentSelected.html() || '&nbsp;';

                customSelectSpanInner.html(html);
                
                if (currentSelected.attr('disabled')) {
                	customSelectSpan.addClass(getClass('DisabledOption'));
                } else {
                	customSelectSpan.removeClass(getClass('DisabledOption'));
                }
                
                setTimeout(function () {
                    customSelectSpan.removeClass(getClass('Open'));
                    $(document).off('mouseup.'+getClass('Open'));                  
                }, 60);
            },
            getClass = function(suffix){
                return prefix + suffix;
            };

            return this.each(function () {
                var $select = $(this),
                    customSelectBtn = $('<span />').addClass(getClass('Btn')),
                    customSelectInnerSpan = $('<span />').addClass(getClass('Inner')),
                    customSelectSpan = $('<span />');

                $select.after(customSelectSpan.append(customSelectInnerSpan));
               customSelectSpan.append(customSelectBtn);
                // add BTN
								
                customSelectSpan.addClass(prefix);

                if (options.mapStyle) {
									customSelectSpan.attr('style', $select.attr('style'));
                }
								
                $select
                    .addClass('hasCustomSelect')
                    .on('update', function () {
												changed($select, customSelectSpan);
						
                        var selectBoxWidth = parseInt($select.outerWidth(), 10);
	
                        var selectBoxHeight = customSelectSpan.outerHeight();

                        if ($select.attr('disabled')) {
                            customSelectSpan.addClass(getClass('Disabled'));
                        } else {
                            customSelectSpan.removeClass(getClass('Disabled'));
                        }
                    })
                    .on('change', function () {
                        customSelectSpan.addClass(getClass('Changed'));
                        changed($select,customSelectSpan);
                    })
                    .on('keyup', function (e) {
                        if(!customSelectSpan.hasClass(getClass('Open'))){
                            $select.blur();
                            $select.focus();
                        }else{
                            if(e.which==13||e.which==27){
                                changed($select,customSelectSpan);
                            }
                        }
                    })
                    .on('mousedown', function (e) {
                        customSelectSpan.removeClass(getClass('Changed'));
                    })
                    .on('mouseup', function (e) {
                        
                        if( !customSelectSpan.hasClass(getClass('Open'))){
                            // if FF and there are other selects open, just apply focus
                            if($('.'+getClass('Open')).not(customSelectSpan).length>0 && typeof InstallTrigger !== 'undefined'){
                                $select.focus();
                            }else{
                                customSelectSpan.addClass(getClass('Open'));
                                e.stopPropagation();
                                $(document).one('mouseup.'+getClass('Open'), function (e) {
                                    if( e.target != $select.get(0) && $.inArray(e.target,$select.find('*').get()) < 0 ){
                                        $select.blur();
                                    }else{
                                        changed($select,customSelectSpan);
                                    }
                                });
                            }
                        }
                    })
                    .focus(function () {
                        customSelectSpan.removeClass(getClass('Changed')).addClass(getClass('Focus'));
                    })
                    .blur(function () {
                        customSelectSpan.removeClass(getClass('Focus')+' '+getClass('Open'));
                    })
                    .hover(function () {
                        customSelectSpan.addClass(getClass('Hover'));
                    }, function () {
                        customSelectSpan.removeClass(getClass('Hover'));
                    })
                    .trigger('update');
            });
        }
    });
})(jQuery);