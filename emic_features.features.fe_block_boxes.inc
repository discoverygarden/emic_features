<?php
/**
 * @file
 * emic_features.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function emic_features_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Featured Links Frontpage';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'featured_links';
  $fe_block_boxes->body = '<ul><li class="editions"><a href=""></a></li><li class="coop"><a href=""></a></li><li class="workbench"><a href=""></a></li></ul>';

  $export['featured_links'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Logo\'s and Info';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_content';
  $fe_block_boxes->body = '<div id="footer-logo"></div>
<div class="footer-info"><div class="footer-left"><p>EMiC is funded by a Strategic Knowledge Cluster grant from the <a href="http://www.sshrc.ca/">Social Sciences and Humanities Research Council of Canada</a>.</p><p>Copyright © Editing Modernism in Canada</p></div><div class="footer-right"></div></div>';

  $export['footer_content'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_links';
  $fe_block_boxes->body = '<ul><li class="fbook"><a href=""></a></li><li class="twit"><a href=""></a></li><li class="rss"><a href=""></a></li></ul>';

  $export['social_links'] = $fe_block_boxes;

  return $export;
}
