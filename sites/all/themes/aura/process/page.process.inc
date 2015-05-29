<?php

/**
 * Implements hook_process_page().
 */
function aura_process_page(&$variables) {
  // You can use process hooks to modify the variables before they are passed to
  // the theme function or template file.
	
	acquia_t_include('utility');
	
	// attach resources
	acquia_t_load_resources();
}
