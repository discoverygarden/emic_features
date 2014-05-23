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
    unset($data['frontpage']->display['default']->display_options['row_options']);
    unset($data['frontpage']->display['feed']);
  }
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function emic_features_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'mods_genre_s',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Description',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'mods_typeOfResource_ms',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Type',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'result_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'snippet' => NULL,
      'date_format' => '',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => TRUE,
    ),
  ),
);
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
