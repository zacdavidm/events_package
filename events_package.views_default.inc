<?php
/**
 * @file
 * events_package.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_package_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Check back for showtimes.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['relationships']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['delta'] = '-1';
  /* Relationship: Content: Event Sessions (field_event_sessions) */
  $handler->display->display_options['relationships']['field_event_sessions_value']['id'] = 'field_event_sessions_value';
  $handler->display->display_options['relationships']['field_event_sessions_value']['table'] = 'field_data_field_event_sessions';
  $handler->display->display_options['relationships']['field_event_sessions_value']['field'] = 'field_event_sessions_value';
  $handler->display->display_options['relationships']['field_event_sessions_value']['delta'] = '-1';
  /* Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Ticket Link */
  $handler->display->display_options['fields']['field_ticket_link']['id'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['table'] = 'field_data_field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['field'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ticket_link']['type'] = 'link_absolute';
  /* Field: Time */
  $handler->display->display_options['fields']['field_showtime_1']['id'] = 'field_showtime_1';
  $handler->display->display_options['fields']['field_showtime_1']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['field'] = 'field_showtime';
  $handler->display->display_options['fields']['field_showtime_1']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['fields']['field_showtime_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_showtime_1']['label'] = '';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['text'] = '[field_showtime_1-value]';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_showtime_1']['alter']['path'] = '[field_ticket_link]';
  $handler->display->display_options['fields']['field_showtime_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_showtime_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_showtime_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_showtime_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['sorts']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['sorts']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['sorts']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Showtime (field_showtime) */
  $handler->display->display_options['filters']['field_showtime_value']['id'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['filters']['field_showtime_value']['field'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['operator_id'] = 'field_showtime_value_op';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['description'] = ' ';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['operator'] = 'field_showtime_value_op';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['identifier'] = 'field_showtime_value';
  $handler->display->display_options['filters']['field_showtime_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_showtime_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_showtime_value']['default_date'] = 'now';

  /* Display: Sessions By Day */
  $handler = $view->new_display('block', 'Sessions By Day', 'by_day');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['relationships']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['delta'] = '-1';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'location' => 'location',
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Location (field_location) */
  $handler->display->display_options['sorts']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['sorts']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['sorts']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['sorts']['field_location_tid']['relationship'] = 'field_film_showtimes_value';
  $handler->display->display_options['sorts']['field_location_tid']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Showtime (field_showtime) */
  $handler->display->display_options['sorts']['field_showtime_value']['id'] = 'field_showtime_value';
  $handler->display->display_options['sorts']['field_showtime_value']['table'] = 'field_data_field_showtime';
  $handler->display->display_options['sorts']['field_showtime_value']['field'] = 'field_showtime_value';
  $handler->display->display_options['sorts']['field_showtime_value']['relationship'] = 'field_film_showtimes_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Sessions By Event */
  $handler = $view->new_display('block', 'Sessions By Event', 'by_event');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'film-showtimes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_location',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_session_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    3 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Check here for event times.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['text'] = '[field_location]<span class="element-hidden">:&nbsp;</span>';
  $handler->display->display_options['fields']['field_location']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Date */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_session_time']['ui_name'] = 'Date';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'wkday_month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Time */
  $handler->display->display_options['fields']['field_session_time_1']['id'] = 'field_session_time_1';
  $handler->display->display_options['fields']['field_session_time_1']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_session_time_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_session_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_session_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Session Time (field_session_time) */
  $handler->display->display_options['sorts']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['sorts']['field_session_time_value']['field'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['relationship'] = 'field_event_sessions_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Session Time (field_session_time) */
  $handler->display->display_options['filters']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['filters']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['filters']['field_session_time_value']['field'] = 'field_session_time_value';
  $handler->display->display_options['filters']['field_session_time_value']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['filters']['field_session_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_time_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_session_time_value']['default_date'] = 'now';

  /* Display: Sessions Page */
  $handler = $view->new_display('page', 'Sessions Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'schedule';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_session_time',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['class'] = 'small-block-grid-1 medium-block-grid-2';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Film Showtimes (field_film_showtimes) */
  $handler->display->display_options['relationships']['field_film_showtimes_value']['id'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['table'] = 'field_data_field_film_showtimes';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['field'] = 'field_film_showtimes_value';
  $handler->display->display_options['relationships']['field_film_showtimes_value']['delta'] = '-1';
  /* Relationship: Content: Event Sessions (field_event_sessions) */
  $handler->display->display_options['relationships']['field_event_sessions_value']['id'] = 'field_event_sessions_value';
  $handler->display->display_options['relationships']['field_event_sessions_value']['table'] = 'field_data_field_event_sessions';
  $handler->display->display_options['relationships']['field_event_sessions_value']['field'] = 'field_event_sessions_value';
  $handler->display->display_options['relationships']['field_event_sessions_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Month/Day */
  $handler->display->display_options['fields']['field_session_time']['id'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_session_time']['ui_name'] = 'Month/Day';
  $handler->display->display_options['fields']['field_session_time']['label'] = '';
  $handler->display->display_options['fields']['field_session_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_session_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time']['settings'] = array(
    'format_type' => 'month_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Field collection item: Session Time */
  $handler->display->display_options['fields']['field_session_time_1']['id'] = 'field_session_time_1';
  $handler->display->display_options['fields']['field_session_time_1']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['field'] = 'field_session_time';
  $handler->display->display_options['fields']['field_session_time_1']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_session_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_session_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_session_time_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_location']['ui_name'] = 'Location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Registration Link */
  $handler->display->display_options['fields']['field_registration_link']['id'] = 'field_registration_link';
  $handler->display->display_options['fields']['field_registration_link']['table'] = 'field_data_field_registration_link';
  $handler->display->display_options['fields']['field_registration_link']['field'] = 'field_registration_link';
  $handler->display->display_options['fields']['field_registration_link']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['fields']['field_registration_link']['label'] = '';
  $handler->display->display_options['fields']['field_registration_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_registration_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '0';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Field collection item: Session Time (field_session_time) */
  $handler->display->display_options['sorts']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['sorts']['field_session_time_value']['field'] = 'field_session_time_value';
  $handler->display->display_options['sorts']['field_session_time_value']['relationship'] = 'field_event_sessions_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Session Time (field_session_time) */
  $handler->display->display_options['filters']['field_session_time_value']['id'] = 'field_session_time_value';
  $handler->display->display_options['filters']['field_session_time_value']['table'] = 'field_data_field_session_time';
  $handler->display->display_options['filters']['field_session_time_value']['field'] = 'field_session_time_value';
  $handler->display->display_options['filters']['field_session_time_value']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['filters']['field_session_time_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_session_time_value']['group'] = 1;
  $handler->display->display_options['filters']['field_session_time_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_session_time_value']['default_date'] = 'now';
  /* Filter criterion: Field collection item: Location (field_location) */
  $handler->display->display_options['filters']['field_location_tid_1']['id'] = 'field_location_tid_1';
  $handler->display->display_options['filters']['field_location_tid_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid_1']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid_1']['relationship'] = 'field_event_sessions_value';
  $handler->display->display_options['filters']['field_location_tid_1']['value'] = '';
  $handler->display->display_options['filters']['field_location_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_location_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_tid_1']['expose']['operator_id'] = 'field_location_tid_1_op';
  $handler->display->display_options['filters']['field_location_tid_1']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['field_location_tid_1']['expose']['operator'] = 'field_location_tid_1_op';
  $handler->display->display_options['filters']['field_location_tid_1']['expose']['identifier'] = 'field_location_tid_1';
  $handler->display->display_options['filters']['field_location_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_location_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_tid_1']['vocabulary'] = 'location';
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Showtimes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['events'] = $view;

  return $export;
}
