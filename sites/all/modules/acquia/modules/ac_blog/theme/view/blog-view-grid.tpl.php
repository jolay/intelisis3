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
        <h4 class='title'><?php print $title?></h4>
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
      <?php if (isset($tags) || isset($date)):?>
        <div class='meta<?php if (isset($date) && isset($tags)):?> date-tags<?php endif?>'>
        <?php print isset($date) ? $date : ''?>
        <?php if (isset($date) && isset($tags)):?>
         <span class='sep'></span>
        <?php endif?>
        <?php print $tags; ?>
        </div>
      <?php endif?>
      <?php if (isset($excerpt)):?>
        <div class="excerpt"><?php print render($excerpt);?></div>
      <?php endif?>
      <!--excerpt-->
      </div>
  </article>
</li>