<div class="wpb_bootstrap_modals">
  <script id="wpb-elements-list-modal-template" type="text/template">
    <div class="modal wpb-elements-list-modal ac-admin">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">x</button>
				<div class="right-section">
					<h3><?php print t('Select Content Element')?></h3>
					<input id="vc_elements_name_filter" type="text" name="vc_content_filter" placeholder="<?php print t('Search by element name')?>"/>
				</div>
      </div>
      <div class="modal-body wpb-elements-list">
        <ul class="wpb-content-layouts-container" style="position: relative;">
          <li>
            <ul class="isotope-filter">
              <li class="active"><a href="#" data-filter="*"><?php print t('Show all')?></a></li>
            </ul>
          </li>
        </ul>
      </div>
      <!--<div class="modal-body wpb-edit-form">
        <div class="vc_row-fluid wpb-edit-form-inner">
        </div>
      </div>
      <div class="modal-body wpb-image-gallery">
      </div>-->
      <div class="modal-footer hide">
        <button class="btn" data-dismiss="modal" aria-hidden="true"><?php print t('Close')?></button>
      </div>
    </div>
  </script>
  <script id="wpb-element-settings-modal-template" type="text/template">
    <div class="modal wpb-element-edit-modal">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-hidden="true">×</button>
            <h3></h3>
        </div>
        <div class="modal-body wpb-edit-form">
            <div class="vc_row-fluid wpb-edit-form-inner">
                <img src="images/wpspin_light.gif" alt="spinner" /> <?php print t('Loading...')?>
            </div>
        </div>
        <div class="modal-footer text-center">
        <button class="button-primary wpb_save_edit_form" data-dismiss="modal" aria-hidden="true"><?php print t('Save')?></button>
        <button class="button" data-dismiss="modal" aria-hidden="true"><?php print t('Cancel')?></button>
      </div>
    </div>
  </script>
</div>