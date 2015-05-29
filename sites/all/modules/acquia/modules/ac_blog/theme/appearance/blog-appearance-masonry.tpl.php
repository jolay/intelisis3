<?php if (!empty($items)): ?>
<div<?php print drupal_attributes($wrap_attrs)?>>
  <?php print theme('acquia_preloader')?>
  <ul<?php print drupal_attributes($items_attrs)?>>
    <?php foreach($items as $item):?>
     <?php print $item?>
    <?php endforeach?>
  </ul>
  <?php if (count($items) > 1):?>
  <?php endif ?>
</div>
<?php print $pager?>
<?php endif ?>