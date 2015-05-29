/**
 * @file Icon Filter Behavior
 */
(function( $ ) {
	/*-------------------------------------------------------------------------*/
	/* Progress Bar shortcode javascript
	/*-------------------------------------------------------------------------*/
	Drupal.behaviors.acquiaIconFilter = {
		attach: function (context, settings) {
			if (!jQuery().isotope()) {
				return;
			}
			$('.fonticon-field input.value-filter', context).each(function () {
				var container = $(this, context),
				$list = container.closest('.fieldset-wrapper').find('.ac-el-container');
				$(this).on('keyup change', function(e){
						e.stopPropagation();
            var $control = $(e.currentTarget),
                filter = '*',
                name_filter = $control.val();

						if (name_filter.length > 0) {
                filter += ":containsi('" + name_filter + "')";
            }
            $list.isotope({ filter:filter });
				});
			});
		}
	}

})(jQuery);
