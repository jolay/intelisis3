(function($) {
	/**
	 * @todo
	 */
	Drupal.behaviors.acMiniCart = {
		attach: function (t, n) {
			if ($.fn.hoverIntent) {
				$('.ac-mini-cart', t).hoverIntent(function(){
					$(this).addClass('on');
				},
				function(){
					$(this).removeClass('on')
				});
			}else{
				$('.ac-mini-cart', t).hover(function(){
					$(this).addClass('on');
				}, function(){
					$(this).removeClass('on');
				});
			}

		}
	};
	
	/**
	 * @todo
	 */
	Drupal.behaviors.productMisc = {
		attach: function (t, n) {
			// review link
			$('.review_num a', t).click(function() {
				$("body").animate({ scrollTop: $('#reviews').offset().top - (200) }, 1000, function() {
						$('#reviews a').trigger('click');
				});
				
			});
		}
	};

	/**
	 * @todo
	 */
	Drupal.behaviors.acShoppingCard = {
		attach: function (t, n) {
			$('.quantity a', t).on('click', function(e){
				e.preventDefault();
				$qty = $(this).closest('.quantity').find('input.qty');
				$qty_val = parseInt($qty.val());
				if ($(this).is('.plus')) {
					$qty.val($qty_val+1);
				}else if ($qty_val>1){
					$qty.val($qty_val-1);
				}
			});
		}
	};

	$(document).ready(function(){
		if ($.fn.easyZoom && !$('body').is('.mobile-browser')) {
	
			// Instantiate easyzoom plugin
			var $easyzoom = $('.product-images .img-wrap').addClass('easyzoom easyzoom--adjacent').easyZoom();
			// Get the instance API
			var api = $easyzoom.data('easyZoom');
			if (typeof api == "object") {
					/**
					 * Load
					 * @private
					 * @param {String} href
					 * @param {Function} callback
					 */
					api._load = function(href, callback) {
							var self = this;
							var zoom = new Image();

							this.$target.addClass('is-loading').append(this.$notice.html(ACQUIA.g.preloader));

							this.$zoom = $(zoom);

							zoom.onerror = function() {
									self.$notice.text(self.opts.errorNotice);
									self.$target.removeClass('is-loading').addClass('is-error');
							};

							zoom.onload = function() {

									// IE may fire a load event even on error so check the image has dimensions
									if (zoom.width === 0) {
											return;
									}

									self.isReady = true;

									self.$notice.detach();
									self.$flyout.html(self.$zoom);
									self.$target.removeClass('is-loading').addClass('is-ready');

									callback();
							};

							zoom.style.position = 'absolute';
							zoom.src = href;
					};
			}
		}
	});

		function updateCatalogImagesOnCols(cols){
			if (typeof Drupal.settings.ac_ubercart.ajax_url == 'undefined' 
			|| typeof ACQUIA.g.newCatalogImagesLoaded != 'undefined'
			|| cols >2){
				$('.ac-catalog-layouts').removeClass('is-loading');
				return;
			}
			var fids = [];
			$('.view-uc-catalog .res-img').each(function(){
				fids.push($(this).attr('data-fid'));
			});
		  $.ajax({
						type:'POST',
						url:Drupal.settings.ac_ubercart.ajax_url,
						data:{
								action:'ac_ubercart_update_images',
								fids:fids,
								cols:cols,
						},
						dataType:'json',
						context:this
				}).done(function (data) {
					var d = data.dimension;
					if (typeof data.images !='undefined' && data.images.length >0){
						for (var i=0; i<data.images.length; i++){
							$('.ac-fid-' + data.images[i]['fid']).attr({
								'src': data.images[i]['src'],
								'width': d.width,
								'height': d.height,
							});
						}
						//$(window).trigger("debouncedresize");
						$('.ac-catalog-layouts').removeClass('is-loading').closest('.view').find('.ac-appearance-masonry').isotope("reLayout");
						ACQUIA.g.newCatalogImagesLoaded = true;
					}
				});
		}
		/**
		 * @todo
		 */
		Drupal.behaviors.acCatalogLayout = {
			attach: function (t, n) {
				$('.ac-catalog-layouts a').click(function(e){
					e.preventDefault();
					var $this = $(this),
						cols = $this.attr('data-cols'),
						$parent = $this.closest('.ac-catalog-layouts');
						
					if ($parent.is('.is-loading')) {
						return;
					}
					$parent.addClass('is-loading');
					$this.addClass('on')
					.siblings('a')
					.removeClass('on');
					
					var thisMasonry = $this.closest('.view').find('.ac-appearance-masonry').attr('data-columns', cols);
					$(window).trigger('layoutChanged');
					thisMasonry.isotope("reLayout");
					$.cookie("acCatalogLayouts", "" + cols, {
						expires: 1,
						path: "/"
					 });
					updateCatalogImagesOnCols(cols);
				});
			}
		};
	
}(jQuery));

