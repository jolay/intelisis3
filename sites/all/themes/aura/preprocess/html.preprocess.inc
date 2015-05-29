<?php
/**
 * Implements hook_preprocess_html().
 */
function aura_preprocess_html(&$vars, $hook) {
	drupal_add_library('acquia', 'fontello');
}