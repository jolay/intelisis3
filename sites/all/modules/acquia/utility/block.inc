<?php
/**
 *
 *
 */

/**
 * prepare auto generated blocks before display
 */
function acquia_prepare_block_display(&$block) {
  if (!isset($block->region)) {
   $block->region = '';
  }
  if (!isset($block->title)) {
   $block->title = '';
  }
  
  return $block;
}