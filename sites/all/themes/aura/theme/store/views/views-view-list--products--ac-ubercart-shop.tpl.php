<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
acquia_include('grid');
$cols = isset($view->args['cols']) ? $view->args['cols'] : variable_get('ac_ubercart_related_products_cols', 4);
$wrap_attrs['class'] = array('ac-shop','ac-products', 'clearfix');
$inner_attrs = array();
$inner_attrs['class'][] = 'ac-appearance-masonry';
$inner_attrs['class'][] = 'ac-init-hidden';
$inner_attrs['class'][] = 'ac-s-li';
$inner_attrs['class'][] = 'clearfix';

acquia_add_grid_attributes(array(
	'columns' => $cols,
	'padding' => isset($view->args['padding']) ? $view->args['padding'] : variable_get('ac_ubercart_related_products_padding', 20),
	),$inner_attrs);

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
