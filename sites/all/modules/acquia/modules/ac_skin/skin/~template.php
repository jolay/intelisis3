<?php
// $Id
/**
 * {TITLE} skin settings
 */

function ac_skin_{TITLE}_settings(){
 return array(
	 '{TITLE}' => array(
		 'title' => t('{TITLE}'),
		 'description' => '',
		 'styles callback' => 'ac_skin_{TITLE}_styles',
		 'weight' => -97,
	 ),
 );
}


function ac_skin_{TITLE}_styles(){
	return array(

	);
}