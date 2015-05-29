<?php

/**
 *
 */
function acquia_start_timer(){
 $mtime = microtime(); 
 $mtime = explode(" ",$mtime); 
 $mtime = $mtime[1] + $mtime[0]; 
 return $mtime;
}

/**
 *
 */
function acquia_stop_timer(&$starttime){
  $mtime = microtime(); 
  $mtime = explode(" ",$mtime); 
  $mtime = $mtime[1] + $mtime[0]; 
  $endtime = $mtime; 
  $totaltime = ($endtime - $starttime); 
  dpm("This page was created in ".$totaltime." seconds");
}