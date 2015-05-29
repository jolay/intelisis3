<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
	<h3><?php print $title; ?></h3>
<?php endif; ?>
<ul class="ac-s-li ac-product-blocks ac-li-bordered clearfix">
 <?php foreach ($rows as $id => $row): ?>
	<li class="clearfix<?php if ($id == count($rows)-1):?> last<?php endif?>"><?php print $row; ?></li>
 <?php endforeach; ?>	
</ul>
