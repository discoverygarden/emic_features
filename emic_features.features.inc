<?php
/**
 * @file
 * emic_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function emic_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function emic_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_views_default_views_alter().
 */
function emic_features_views_default_views_alter(&$data) {
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['fields'] = array(
      'title' => array(
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'label' => '',
        'element_type' => 'h3',
        'element_label_colon' => FALSE,
        'link_to_node' => FALSE,
      ),
      'body' => array(
        'id' => 'body',
        'table' => 'field_data_body',
        'field' => 'body',
        'label' => '',
        'element_label_colon' => FALSE,
      ),
      'field_image' => array(
        'id' => 'field_image',
        'table' => 'field_data_field_image',
        'field' => 'field_image',
        'label' => '',
        'element_label_colon' => FALSE,
        'click_sort_column' => 'fid',
        'settings' => array(
          'image_style' => '',
          'image_link' => '',
        ),
      ),
    ); /* WAS: '' */
    $data['frontpage']->display['default']->display_options['filters']['promote']['group'] = 1; /* WAS: 0 */
    $data['frontpage']->display['default']->display_options['filters']['status']['group'] = 1; /* WAS: 0 */
    $data['frontpage']->display['default']->display_options['row_plugin'] = 'fields'; /* WAS: 'node' */
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['frontpage']->display['feed']->display_options['enabled'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function emic_features_islandora_solr_fields_features_default_fields() {
  return array();
}

/**
 * Implements hook_node_info().
 */
function emic_features_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
