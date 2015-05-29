<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
acquia_include('media');
$image_option = array(
	'style' => array(
		'image_style' => isset($_COOKIE['acCatalogLayouts']) && intval($_COOKIE['acCatalogLayouts']) >2 ? variable_get('ac_ubercart_catalog_products_style') : variable_get('ac_ubercart_catalog_products_2_cols_style'),
	),
	'link' => array('path' => url($fields['path']->content, array('absolute' => TRUE))),
);


$sale =FALSE;
if (isset($fields['field_old_price']->content) &&
		!empty($fields['field_old_price']->content)) {
	$sale = (strip_tags($fields['display_price']->content) /
	strip_tags($fields['field_old_price']->content)) * 100;
	$sale = ceil(100 -$sale);
	$fields['field_old_price']->content = '<del class="old">' .theme('uc_price', array('price' => $fields['field_old_price']->content)) .'</del>';
}

$fields['display_price']->content = '<ins class="current">' .theme('uc_price', array('price' => $fields['display_price']->content)) .'</ins>';

if (isset($fields['field_rating_1']->content) &&
		!empty($fields['field_rating_1']->content) &&
		 mb_strstr($fields['field_rating_1']->content, '>0%<')) {
 unset($fields['field_rating']);
}
unset($fields['field_rating_1']);
?>

<!--[product images]-->
<div class="product_images">
	<?php if($sale):?>
	 <span class="features"><a class="onsale"><span><?php print t('-@sale<span>%</span>', array('@sale' => $sale))?></span></a></span>
	<?php endif?>
	
	<?php if (isset($fields['uc_product_image']->content)):?>
		<div class="front-image res-img" data-fid="<?php print $fields['uc_product_image']->content?>">
			<?php print acquia_image_format_simple(array_merge(array('fid' => $fields['uc_product_image']->content,
				'attributes' => array('class' => array('ac-fid-'.$fields['uc_product_image']->content))), $image_option));?>
		</div>
	<?php endif?>
	
	<?php if (isset($fields['uc_product_image_1']->content)):?>
		<div class="back-image res-img" data-fid="<?php print $fields['uc_product_image_1']->content?>">
			<?php print acquia_image_format_simple(array_merge(array('fid' => $fields['uc_product_image_1']->content,
				'attributes' => array('class' => array('ac-fid-'.$fields['uc_product_image_1']->content))), $image_option));?>		</div>
	<?php endif?>
</div>
<!--[/product images]-->
<div class="o-info">
	<?php if (isset($fields['title']->content)):?>
		<?php print $fields['title']->content ?>
	<?php endif?>
	
	<?php if (isset($fields['field_rating']->content)):?>
		<?php print $fields['field_rating']->content ?>
	<?php endif?>
	
	<div class="meta">
		<?php if (isset($fields['field_old_price']->content)):?>
			<?php print $fields['field_old_price']->content ?>
		<?php endif?>
		<?php if (isset($fields['display_price']->content)):?>
			<?php print $fields['display_price']->content ?>
		<?php endif?>
		<?php if (isset($fields['buyitnowbutton']->content)):?>
			<?php print $fields['buyitnowbutton']->content ?>
		<?php endif?>
	</div>

