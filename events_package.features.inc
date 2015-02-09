<?php
/**
 * @file
 * events_package.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_package_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function events_package_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function events_package_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('List an event with one or more sessions. Each session has a date/time, location, and option for a registration link.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_series' => array(
      'name' => t('Event Series'),
      'base' => 'node_content',
      'description' => t('create a collection of related events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
