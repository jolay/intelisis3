<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
if (!isset($view->args['inner_attrs'])) {
	acquia_include('grid');
	$cols = variable_get('ac_ubercart_catalog_terms_cols', 3);
	$wrap_attrs['class'] = array('ac-catalog-terms','ac-products', 'clearfix');
	$inner_attrs = array();
	$inner_attrs['class'][] = 'ac-appearance-masonry';
	$inner_attrs['class'][] = 'ac-init-hidden';
	$inner_attrs['class'][] = 'ac-s-li';
	$inner_attrs['class'][] = 'clearfix';
	
	acquia_add_grid_attributes(array(
		'columns' => $cols,
		'padding' => isset($view->args['padding']) ? $view->args['padding'] : variable_get('ac_ubercart_catalog_terms_padding', 20),
		),$inner_attrs);
}else{
	$wrap_attrs = $view->args['wrap_attrs'];
	$inner_attrs = $view->args['inner_attrs'];
}

?>
<?php if (!empty($title)) : ?>
	<h3><?php print $title; ?></h3>
<?php endif; ?>
<div<?php print drupal_attributes($wrap_attrs)?>>
	<ul<?php print drupal_attributes($inner_attrs)?>>
		<?php foreach ($rows as $id => $row): ?>
			<li class="ac-col <?php print $classes_array[$id]; ?>"><article class="item-i ac-frame-on"><?php print $row; ?></article></li>
		<?php endforeach; ?>
	</ul>
</div>
