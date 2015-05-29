<li<?php print drupal_attributes($attrs)?>>
  <article <?php print drupal_attributes($item_i_attrs)?>>
      <?php if (!empty($media)): ?>
      <figure class='clearfix'>
        <?php print $media?>
      </figure>
      <?php endif?>
      <!--Picture-->
      <div class="o-info">
      <?php if (isset($title)):?>
        <h5 class='title'><?php print $title?></h5>
      <?php endif?>
      <?php if (isset($author)):?>
        <div class='meta<?php if (isset($author) && isset($date)):?> author-date<?php endif?>'>
            <?php print isset($author) ? t('by') .' '.$author : ''?>
            <?php if (isset($author) && isset($date)):?>
             <span class='sep'></span>
            <?php endif?>
            <?php if (isset($date)):?>
              <?php print $date; ?>
            <?php unset($date)?>
            <?php endif?>
        </div>
      <?php endif?>
      <?php if (isset($categories) || isset($date)):?>
        <div class='meta<?php if (isset($date) && isset($categories)):?> date-tags<?php endif?>'>
        <?php print isset($date) ? $date : ''?>
        <?php if (isset($date) && isset($categories)):?>
         <span class='sep'></span>
        <?php endif?>
        <?php print isset($categories) ? $categories : ''; ?>
        </div>
      <?php endif?>
      <!--data and tags-->
      <?php if (isset($details)):?>
      <div class='meta details'>
       <?php print isset($details) ? $details : ''?>
      </div>
      <?php endif;?>
      <!--Links-->
      </div>
  </article>
</li>