<?php if (!empty($items)):?>
<div<?php print drupal_attributes($wrap_attrs)?>>
  <div class="preview-wrap">
    <div<?php print drupal_attributes($preview_attrs)?>>
      <ul<?php print drupal_attributes($preview_i_attrs)?>>
        <?php foreach($preview_slides as $slide):?>
        <li class="item"><div class='item-i'><?php print $slide?></div></li>
        <?php endforeach?>
      </ul>
    </div>
  </div>
  <div class="thumb-wrap">
    <?php print $thumbs_slider?>
  </div>  
</div>  
<?php endif?>