<?php
/**
 * @file
 * cadug_content_type_session.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cadug_content_type_session_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cadug_content_type_session_node_info() {
  $items = array(
    'session_proposal' => array(
      'name' => t('Session proposal'),
      'base' => 'node_content',
      'description' => t('Submit a session proposal'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
