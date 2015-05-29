(function( $, prototype ) {

	prototype.refresh = function() {
		this._tabify(true);
	};

	prototype.setActive = function(id) {
		this.options.selected = id;
		this._tabify(true);
	};
	
}( jQuery, jQuery.ui.tabs.prototype ) );