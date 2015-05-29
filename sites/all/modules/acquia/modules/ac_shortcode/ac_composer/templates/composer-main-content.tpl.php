<div class="metabox-composer-content">
  <div id="wpb-convert-message">
     <div class="messagebox_text"><p><?php print t('Your page layout was created with previous Visual Composer version. Before converting your layout to the new version, make sure to <a target="_blank" href="http://kb.wpbakery.com/index.php?title=Update_Visual_Composer_from_3.4_to_3.5">read this page</a>.')?></p>
       <div class="wpb-convert-buttons">
         <a class="wpb_convert button" id="wpb-convert"><i class="icon"></i><?php print t('Convert to new version')?></a>
       </div>
    </div>
  </div>
<div class="vc_loading_block" style="display: none;">
<!--  @CONVERRTED -->
  <img src="<?php print url(drupal_get_path('module', 'ac_composer') . '/assets/', array('absolute' => TRUE))?>/img/wpspin_light.gif" /> <?php print t("Loading, please wait...")?>
</div>

<div id="visual_composer_content" class="wpb_main_sortable main_wrapper"></div>
  <div id="wpb-empty-blocks">
   <h2><?php print t("No content yet! You should add some..")?></h2>
   <table class="helper-block">
     <tr>
       <td><span>1</span></td>
       <td><p><?php print t("This is a visual preview of your page. Currently, you don't have any content elements. Click or drag the button <a href='#' class='add-element-to-layout'><i class='icon'></i> Add element</a> on the top to add content elements on your page. Alternatively add <a href='#' class='add-text-block-to-content' parent-container='#visual_composer_content'><i class='icon'></i> Text block</a> with single click.")?></p></td>
     </tr>
   </table>
   <table class="helper-block">
     <tr>
       <td><span>2</span></td><td><p class="one-line"><?php print t("Click the pencil icon on the content elements to change their properties.")?></p></td>
     </tr>
     <tr>
       <td colspan="2">
         <div class="edit-picture"></div>
       </td>
     </tr>
   </table>
  </div>
</div>