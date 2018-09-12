<?php
/**
 * @file
 * content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'alerts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alerts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'advisory-alert-desktop';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<div class="no-advisory"></div>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[body] [field_link]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'alert' => 'alert',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block Mobile */
  $handler = $view->new_display('block', 'Block Mobile', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'advisory-alert-mobile';
  $export['alerts'] = $view;

  $view = new view();
  $view->name = 'camps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_camps';
  $view->human_name = 'Camps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'wc';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Show Results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_age_group' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_next_start_date' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_camp_season' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '12';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '12';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_advisory' => 'field_advisory',
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Relationship: Indexed Content: Event Image » The image file. */
  $handler->display->display_options['relationships']['field_event_image_file']['id'] = 'field_event_image_file';
  $handler->display->display_options['relationships']['field_event_image_file']['table'] = 'search_api_index_camps';
  $handler->display->display_options['relationships']['field_event_image_file']['field'] = 'field_event_image_file';
  /* Field: Sold out css class */
  $handler->display->display_options['fields']['field_sold_out__1']['id'] = 'field_sold_out__1';
  $handler->display->display_options['fields']['field_sold_out__1']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_sold_out__1']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__1']['ui_name'] = 'Sold out css class';
  $handler->display->display_options['fields']['field_sold_out__1']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['text'] = 'sold-out';
  $handler->display->display_options['fields']['field_sold_out__1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['type'] = 'list_key';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Result Item';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'camp-result-item';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Img';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_class_genre',
    1 => 'field_camp_dates',
    2 => 'field_sold_out__2',
    3 => 'field_event_image',
    4 => 'field_file_image_credit',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Indexed Content: Category */
  $handler->display->display_options['fields']['field_class_genre']['id'] = 'field_class_genre';
  $handler->display->display_options['fields']['field_class_genre']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_class_genre']['field'] = 'field_class_genre';
  $handler->display->display_options['fields']['field_class_genre']['label'] = '';
  $handler->display->display_options['fields']['field_class_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_genre']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_class_genre']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_genre']['bypass_access'] = 0;
  /* Field: Indexed Content: Camp Date(s) */
  $handler->display->display_options['fields']['field_camp_dates']['id'] = 'field_camp_dates';
  $handler->display->display_options['fields']['field_camp_dates']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_camp_dates']['field'] = 'field_camp_dates';
  $handler->display->display_options['fields']['field_camp_dates']['label'] = '';
  $handler->display->display_options['fields']['field_camp_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_camp_dates']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_camp_dates']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_camp_dates']['display'] = 'view';
  $handler->display->display_options['fields']['field_camp_dates']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_camp_dates']['bypass_access'] = 0;
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out__2']['id'] = 'field_sold_out__2';
  $handler->display->display_options['fields']['field_sold_out__2']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_sold_out__2']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__2']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['alter']['text'] = 'Sold Out';
  $handler->display->display_options['fields']['field_sold_out__2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['type'] = 'list_key';
  /* Field: Indexed Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'event_what_s_on',
    'image_link' => 'content',
  );
  /* Field: File: Photo Credit */
  $handler->display->display_options['fields']['field_file_image_credit']['id'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['table'] = 'entity_file';
  $handler->display->display_options['fields']['field_file_image_credit']['field'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['relationship'] = 'field_event_image_file';
  $handler->display->display_options['fields']['field_file_image_credit']['label'] = 'Photo';
  $handler->display->display_options['fields']['field_file_image_credit']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_wrapper_class'] = 'photo-cred';
  $handler->display->display_options['fields']['field_file_image_credit']['hide_empty'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Camp Info';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_organization',
    2 => 'field_camp_dates_1',
    3 => 'body',
    4 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Presenters  */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_organization']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization']['bypass_access'] = 0;
  /* Field: Camp Date(s) (for mobile) */
  $handler->display->display_options['fields']['field_camp_dates_1']['id'] = 'field_camp_dates_1';
  $handler->display->display_options['fields']['field_camp_dates_1']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_camp_dates_1']['field'] = 'field_camp_dates';
  $handler->display->display_options['fields']['field_camp_dates_1']['ui_name'] = 'Camp Date(s) (for mobile)';
  $handler->display->display_options['fields']['field_camp_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_camp_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_camp_dates_1']['element_wrapper_class'] = 'mobile-only';
  $handler->display->display_options['fields']['field_camp_dates_1']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_camp_dates_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_camp_dates_1']['display'] = 'view';
  $handler->display->display_options['fields']['field_camp_dates_1']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_camp_dates_1']['bypass_access'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Action btns';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_advisory',
    1 => 'field_tickets_link',
    2 => 'field_sold_out_',
    3 => 'url',
    4 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'action-btns';
  /* Field: Indexed Content: Advisory */
  $handler->display->display_options['fields']['field_advisory']['id'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_advisory']['field'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Tickets Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = 'Register';
  $handler->display->display_options['fields']['field_tickets_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">REGISTER</a>';
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out_']['id'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['field_sold_out_']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['text'] = '<div class="btn btn-smal btn-sold-out">Sold out</div>';
  $handler->display->display_options['fields']['field_sold_out_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out_']['type'] = 'list_key';
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_camps';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]" class="btn btn-small">MORE INFO</a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[url]
[field_tickets_link]
[field_sold_out_] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = '[field_sold_out__1]';
  /* Sort criterion: Indexed Content: Min Start Date */
  $handler->display->display_options['sorts']['field_min_start_date']['id'] = 'field_min_start_date';
  $handler->display->display_options['sorts']['field_min_start_date']['table'] = 'search_api_index_camps';
  $handler->display->display_options['sorts']['field_min_start_date']['field'] = 'field_min_start_date';
  /* Sort criterion: Indexed Content: Max End Date */
  $handler->display->display_options['sorts']['field_max_end_date']['id'] = 'field_max_end_date';
  $handler->display->display_options['sorts']['field_max_end_date']['table'] = 'search_api_index_camps';
  $handler->display->display_options['sorts']['field_max_end_date']['field'] = 'field_max_end_date';
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language_1']['id'] = 'search_api_language_1';
  $handler->display->display_options['filters']['search_api_language_1']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['search_api_language_1']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language_1']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language_1']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'camp' => 'camp',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language']['group'] = 1;
  /* Filter criterion: Indexed Content: Age Group */
  $handler->display->display_options['filters']['field_age_group']['id'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['field_age_group']['field'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['value'] = array();
  $handler->display->display_options['filters']['field_age_group']['group'] = 1;
  $handler->display->display_options['filters']['field_age_group']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['operator_id'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['label'] = 'By Age';
  $handler->display->display_options['filters']['field_age_group']['expose']['operator'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_group']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_age_group']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_class_genre']['id'] = 'field_class_genre';
  $handler->display->display_options['filters']['field_class_genre']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['field_class_genre']['field'] = 'field_class_genre';
  $handler->display->display_options['filters']['field_class_genre']['value'] = array();
  $handler->display->display_options['filters']['field_class_genre']['group'] = 1;
  $handler->display->display_options['filters']['field_class_genre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_genre']['expose']['operator_id'] = 'field_class_genre_op';
  $handler->display->display_options['filters']['field_class_genre']['expose']['label'] = 'By Category';
  $handler->display->display_options['filters']['field_class_genre']['expose']['operator'] = 'field_class_genre_op';
  $handler->display->display_options['filters']['field_class_genre']['expose']['identifier'] = 'field_class_genre';
  $handler->display->display_options['filters']['field_class_genre']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_class_genre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_class_genre']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Camp Season */
  $handler->display->display_options['filters']['field_camp_season']['id'] = 'field_camp_season';
  $handler->display->display_options['filters']['field_camp_season']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['field_camp_season']['field'] = 'field_camp_season';
  $handler->display->display_options['filters']['field_camp_season']['value'] = array();
  $handler->display->display_options['filters']['field_camp_season']['group'] = 1;
  $handler->display->display_options['filters']['field_camp_season']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_camp_season']['expose']['operator_id'] = 'field_camp_season_op';
  $handler->display->display_options['filters']['field_camp_season']['expose']['label'] = 'By Season';
  $handler->display->display_options['filters']['field_camp_season']['expose']['operator'] = 'field_camp_season_op';
  $handler->display->display_options['filters']['field_camp_season']['expose']['identifier'] = 'season';
  $handler->display->display_options['filters']['field_camp_season']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_camp_season']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_camp_season']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Event Language */
  $handler->display->display_options['filters']['field_event_language']['id'] = 'field_event_language';
  $handler->display->display_options['filters']['field_event_language']['table'] = 'search_api_index_camps';
  $handler->display->display_options['filters']['field_event_language']['field'] = 'field_event_language';
  $handler->display->display_options['filters']['field_event_language']['value'] = array();
  $handler->display->display_options['filters']['field_event_language']['group'] = 1;
  $handler->display->display_options['filters']['field_event_language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_language']['expose']['operator_id'] = 'field_event_language_op';
  $handler->display->display_options['filters']['field_event_language']['expose']['label'] = 'By Language';
  $handler->display->display_options['filters']['field_event_language']['expose']['operator'] = 'field_event_language_op';
  $handler->display->display_options['filters']['field_event_language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['field_event_language']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_language']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'camps_page');
  $handler->display->display_options['path'] = 'camps';
  $export['camps'] = $view;

  $view = new view();
  $view->name = 'classes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_classes';
  $view->human_name = 'Classes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'wc';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Show Results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_age_group' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_class_season' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_class_genre' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '12';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '12';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_advisory' => 'field_advisory',
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Indexed Content: Event Image » The image file. */
  $handler->display->display_options['relationships']['field_event_image_file']['id'] = 'field_event_image_file';
  $handler->display->display_options['relationships']['field_event_image_file']['table'] = 'search_api_index_classes';
  $handler->display->display_options['relationships']['field_event_image_file']['field'] = 'field_event_image_file';
  /* Field: Sold out css class */
  $handler->display->display_options['fields']['field_sold_out_']['id'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_sold_out_']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['ui_name'] = 'Sold out css class';
  $handler->display->display_options['fields']['field_sold_out_']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['text'] = 'sold-out';
  $handler->display->display_options['fields']['field_sold_out_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['type'] = 'list_key';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Result Item';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'class-result-item';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Img';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_class_genre',
    1 => 'field_class_dates_1',
    2 => 'field_sold_out__2',
    3 => 'field_event_image',
    4 => 'field_file_image_credit',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Indexed Content: Category */
  $handler->display->display_options['fields']['field_class_genre']['id'] = 'field_class_genre';
  $handler->display->display_options['fields']['field_class_genre']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_class_genre']['field'] = 'field_class_genre';
  $handler->display->display_options['fields']['field_class_genre']['label'] = '';
  $handler->display->display_options['fields']['field_class_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_genre']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_class_genre']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_genre']['bypass_access'] = 0;
  /* Field: Indexed Content: Class Date(s) */
  $handler->display->display_options['fields']['field_class_dates_1']['id'] = 'field_class_dates_1';
  $handler->display->display_options['fields']['field_class_dates_1']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_class_dates_1']['field'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_class_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_dates_1']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_class_dates_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_dates_1']['display'] = 'view';
  $handler->display->display_options['fields']['field_class_dates_1']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_class_dates_1']['bypass_access'] = 0;
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out__2']['id'] = 'field_sold_out__2';
  $handler->display->display_options['fields']['field_sold_out__2']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_sold_out__2']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__2']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['alter']['text'] = 'Sold Out';
  $handler->display->display_options['fields']['field_sold_out__2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['type'] = 'list_key';
  /* Field: Indexed Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'event_what_s_on',
    'image_link' => 'content',
  );
  /* Field: File: Photo Credit */
  $handler->display->display_options['fields']['field_file_image_credit']['id'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['table'] = 'entity_file';
  $handler->display->display_options['fields']['field_file_image_credit']['field'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['relationship'] = 'field_event_image_file';
  $handler->display->display_options['fields']['field_file_image_credit']['label'] = 'Photo';
  $handler->display->display_options['fields']['field_file_image_credit']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_image_credit']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_wrapper_class'] = 'photo-cred';
  $handler->display->display_options['fields']['field_file_image_credit']['hide_empty'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Event Info';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_organization',
    2 => 'field_class_dates',
    3 => 'body',
    4 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Presenters  */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_organization']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization']['bypass_access'] = 0;
  /* Field: Class Date(s) (for mobile) */
  $handler->display->display_options['fields']['field_class_dates']['id'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_class_dates']['field'] = 'field_class_dates';
  $handler->display->display_options['fields']['field_class_dates']['ui_name'] = 'Class Date(s) (for mobile)';
  $handler->display->display_options['fields']['field_class_dates']['label'] = '';
  $handler->display->display_options['fields']['field_class_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_dates']['element_wrapper_class'] = 'mobile-only';
  $handler->display->display_options['fields']['field_class_dates']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_class_dates']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_dates']['display'] = 'view';
  $handler->display->display_options['fields']['field_class_dates']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_class_dates']['bypass_access'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Action btns';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_advisory',
    1 => 'field_tickets_link',
    2 => 'field_sold_out__1',
    3 => 'url',
    4 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'action-btns';
  /* Field: Indexed Content: Advisory */
  $handler->display->display_options['fields']['field_advisory']['id'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_advisory']['field'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Tickets Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = 'Register';
  $handler->display->display_options['fields']['field_tickets_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">REGISTER</a>';
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out__1']['id'] = 'field_sold_out__1';
  $handler->display->display_options['fields']['field_sold_out__1']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['field_sold_out__1']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__1']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['text'] = '<div class="btn btn-smal btn-sold-out">Sold out</div>';
  $handler->display->display_options['fields']['field_sold_out__1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['type'] = 'list_key';
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_classes';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]" class="btn btn-small">MORE INFO</a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[url]
[field_tickets_link]
[field_sold_out_] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = '[field_sold_out__1]';
  /* Sort criterion: Indexed Content: Min Start Date */
  $handler->display->display_options['sorts']['field_min_start_date']['id'] = 'field_min_start_date';
  $handler->display->display_options['sorts']['field_min_start_date']['table'] = 'search_api_index_classes';
  $handler->display->display_options['sorts']['field_min_start_date']['field'] = 'field_min_start_date';
  /* Sort criterion: Indexed Content: Max End Date */
  $handler->display->display_options['sorts']['field_max_end_date']['id'] = 'field_max_end_date';
  $handler->display->display_options['sorts']['field_max_end_date']['table'] = 'search_api_index_classes';
  $handler->display->display_options['sorts']['field_max_end_date']['field'] = 'field_max_end_date';
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language_1']['id'] = 'search_api_language_1';
  $handler->display->display_options['filters']['search_api_language_1']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['search_api_language_1']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language_1']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language_1']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language']['group'] = 1;
  /* Filter criterion: Indexed Content: Age Group */
  $handler->display->display_options['filters']['field_age_group']['id'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['field_age_group']['field'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['value'] = array();
  $handler->display->display_options['filters']['field_age_group']['group'] = 1;
  $handler->display->display_options['filters']['field_age_group']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['operator_id'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['label'] = 'By Age';
  $handler->display->display_options['filters']['field_age_group']['expose']['operator'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['identifier'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_age_group']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Class Season */
  $handler->display->display_options['filters']['field_class_season']['id'] = 'field_class_season';
  $handler->display->display_options['filters']['field_class_season']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['field_class_season']['field'] = 'field_class_season';
  $handler->display->display_options['filters']['field_class_season']['value'] = array();
  $handler->display->display_options['filters']['field_class_season']['group'] = 1;
  $handler->display->display_options['filters']['field_class_season']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_season']['expose']['operator_id'] = 'field_class_season_op';
  $handler->display->display_options['filters']['field_class_season']['expose']['label'] = 'By Season';
  $handler->display->display_options['filters']['field_class_season']['expose']['operator'] = 'field_class_season_op';
  $handler->display->display_options['filters']['field_class_season']['expose']['identifier'] = 'season';
  $handler->display->display_options['filters']['field_class_season']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_class_season']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_class_season']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Category */
  $handler->display->display_options['filters']['field_class_genre']['id'] = 'field_class_genre';
  $handler->display->display_options['filters']['field_class_genre']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['field_class_genre']['field'] = 'field_class_genre';
  $handler->display->display_options['filters']['field_class_genre']['value'] = array();
  $handler->display->display_options['filters']['field_class_genre']['group'] = 1;
  $handler->display->display_options['filters']['field_class_genre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_class_genre']['expose']['operator_id'] = 'field_class_genre_op';
  $handler->display->display_options['filters']['field_class_genre']['expose']['label'] = 'By Category';
  $handler->display->display_options['filters']['field_class_genre']['expose']['operator'] = 'field_class_genre_op';
  $handler->display->display_options['filters']['field_class_genre']['expose']['identifier'] = 'genre';
  $handler->display->display_options['filters']['field_class_genre']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_class_genre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_class_genre']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Event Language */
  $handler->display->display_options['filters']['field_event_language']['id'] = 'field_event_language';
  $handler->display->display_options['filters']['field_event_language']['table'] = 'search_api_index_classes';
  $handler->display->display_options['filters']['field_event_language']['field'] = 'field_event_language';
  $handler->display->display_options['filters']['field_event_language']['value'] = array();
  $handler->display->display_options['filters']['field_event_language']['group'] = 1;
  $handler->display->display_options['filters']['field_event_language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_language']['expose']['operator_id'] = 'field_event_language_op';
  $handler->display->display_options['filters']['field_event_language']['expose']['label'] = 'By Language';
  $handler->display->display_options['filters']['field_event_language']['expose']['operator'] = 'field_event_language_op';
  $handler->display->display_options['filters']['field_event_language']['expose']['identifier'] = 'field_event_language';
  $handler->display->display_options['filters']['field_event_language']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_event_language']['expose']['reduce'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'classes_page');
  $handler->display->display_options['path'] = 'classes';
  $export['classes'] = $view;

  $view = new view();
  $view->name = 'event_alerts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Alerts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Alerts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any alert content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Advisory Alert */
  $handler->display->display_options['fields']['field_advisory_alert']['id'] = 'field_advisory_alert';
  $handler->display->display_options['fields']['field_advisory_alert']['table'] = 'field_data_field_advisory_alert';
  $handler->display->display_options['fields']['field_advisory_alert']['field'] = 'field_advisory_alert';
  $handler->display->display_options['fields']['field_advisory_alert']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Content: Advisory Alert (field_advisory_alert) */
  $handler->display->display_options['filters']['field_advisory_alert_target_id']['id'] = 'field_advisory_alert_target_id';
  $handler->display->display_options['filters']['field_advisory_alert_target_id']['table'] = 'field_data_field_advisory_alert';
  $handler->display->display_options['filters']['field_advisory_alert_target_id']['field'] = 'field_advisory_alert_target_id';
  $handler->display->display_options['filters']['field_advisory_alert_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/event-alerts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Event Alerts';
  $handler->display->display_options['menu']['name'] = 'management';
  $export['event_alerts'] = $view;

  $view = new view();
  $view->name = 'event_next_start_dates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Next Start Dates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Next Start Dates';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any event content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Content: Event Date (field_dates) */
  $handler->display->display_options['relationships']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['relationships']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['relationships']['field_dates_value']['delta'] = '-1';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_save_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Next Start Date */
  $handler->display->display_options['fields']['field_next_start_date']['id'] = 'field_next_start_date';
  $handler->display->display_options['fields']['field_next_start_date']['table'] = 'field_data_field_next_start_date';
  $handler->display->display_options['fields']['field_next_start_date']['field'] = 'field_next_start_date';
  $handler->display->display_options['fields']['field_next_start_date']['settings'] = array(
    'format_type' => 'compact_with_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_preferred_dates']['id'] = 'field_preferred_dates';
  $handler->display->display_options['fields']['field_preferred_dates']['table'] = 'field_data_field_preferred_dates';
  $handler->display->display_options['fields']['field_preferred_dates']['field'] = 'field_preferred_dates';
  $handler->display->display_options['fields']['field_preferred_dates']['relationship'] = 'field_dates_value';
  $handler->display->display_options['fields']['field_preferred_dates']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_preferred_dates']['settings'] = array(
    'format_type' => 'compact_with_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  /* Sort criterion: Content: Language */
  $handler->display->display_options['sorts']['language']['id'] = 'language';
  $handler->display->display_options['sorts']['language']['table'] = 'node';
  $handler->display->display_options['sorts']['language']['field'] = 'language';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/event-next-start-dates';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Event Next Start Dates';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['event_next_start_dates'] = $view;

  $view = new view();
  $view->name = 'event_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Event Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'event_report';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.field-label { 
    float: left;     
    width: 250px;
    clear: left;
    padding-bottom: 10px;
} 
.field-items { 
    margin-left: 50px !important;     
    float: left;
} 
.entity-field-collection-item .field-items { margin-left: 0px !important; } 
.field-label-above {
    border-bottom: 1px solid #ccc;
    clear: left;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/event-report';

  /* Display: Guest Services */
  $handler = $view->new_display('page', 'Guest Services', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'event_report_guest_services';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/guest-services/report';

  /* Display: Patron Services */
  $handler = $view->new_display('page', 'Patron Services', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'event_report_patron_services';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/patron-services/report';

  /* Display: Production */
  $handler = $view->new_display('page', 'Production', 'page_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'event_report_production';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'admin/production/report';
  $export['event_report'] = $view;

  $view = new view();
  $view->name = 'events_management';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Events Management';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Relationship: Field collection item: Entity with the Event Date (field_dates) */
  $handler->display->display_options['relationships']['field_dates_node']['id'] = 'field_dates_node';
  $handler->display->display_options['relationships']['field_dates_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_dates_node']['field'] = 'field_dates_node';
  /* Field: Field collection item: Rendered Field collection item */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Sort criterion: Field collection item: Date -  start date (field_preferred_dates) */
  $handler->display->display_options['sorts']['field_preferred_dates_value']['id'] = 'field_preferred_dates_value';
  $handler->display->display_options['sorts']['field_preferred_dates_value']['table'] = 'field_data_field_preferred_dates';
  $handler->display->display_options['sorts']['field_preferred_dates_value']['field'] = 'field_preferred_dates_value';
  /* Contextual filter: Field collection item: Date -  start date (field_preferred_dates) */
  $handler->display->display_options['arguments']['field_preferred_dates_value']['id'] = 'field_preferred_dates_value';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['table'] = 'field_data_field_preferred_dates';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['field'] = 'field_preferred_dates_value';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_preferred_dates_value']['granularity_reset'] = 0;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['calendar_date_link'] = 'event';
  $handler->display->display_options['row_options']['colors']['legend'] = 'taxonomy';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Rendered Field collection item */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_field_collection_item';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dates_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_dates_node';
  $handler->display->display_options['path'] = 'calendar-field-collection-item-field-preferred-dates/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_preferred_dates.field_preferred_dates_value' => 'field_data_field_preferred_dates.field_preferred_dates_value',
  );
  $handler->display->display_options['path'] = 'calendar-field-collection-item-field-preferred-dates/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_preferred_dates.field_preferred_dates_value' => 'field_data_field_preferred_dates.field_preferred_dates_value',
  );
  $handler->display->display_options['path'] = 'calendar-field-collection-item-field-preferred-dates/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_preferred_dates']['id'] = 'field_preferred_dates';
  $handler->display->display_options['fields']['field_preferred_dates']['table'] = 'field_data_field_preferred_dates';
  $handler->display->display_options['fields']['field_preferred_dates']['field'] = 'field_preferred_dates';
  $handler->display->display_options['fields']['field_preferred_dates']['label'] = '';
  $handler->display->display_options['fields']['field_preferred_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_preferred_dates']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_preferred_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_preferred_dates']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_preferred_dates']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_preferred_dates.field_preferred_dates_value' => 'field_data_field_preferred_dates.field_preferred_dates_value',
  );
  $handler->display->display_options['path'] = 'calendar-field-collection-item-field-preferred-dates/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_dates_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_dates_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (field_collection_item) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_preferred_dates.field_preferred_dates_value' => 'field_data_field_preferred_dates.field_preferred_dates_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_dates_node';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'date_ical';
  $handler->display->display_options['row_plugin'] = 'date_ical';
  $handler->display->display_options['row_options']['date_field'] = 'field_data_field_preferred_dates.field_preferred_dates_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date: Date (field_collection_item) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_preferred_dates.field_preferred_dates_value' => 'field_data_field_preferred_dates.field_preferred_dates_value',
  );
  $handler->display->display_options['path'] = 'calendar-field-collection-item-field-preferred-dates/ical/%/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'default' => 0,
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Date: Date (field_collection_item) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_preferred_dates.field_preferred_dates_value' => 'field_data_field_preferred_dates.field_preferred_dates_value',
  );
  $export['events_management'] = $view;

  $view = new view();
  $view->name = 'gallery_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/what-s-on?date=4&type[]=43" class="btn btn-with-arrow">VIEW FULL EXHIBITIONS CALENDAR<span class="arrow">icon</span></a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'body',
    2 => 'field_link',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'gallery-content';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '150',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<div class="action-btns">
<a class="btn" href="[field_link-url]">VIEW CURRENT EXHIBITIONS</a>

</div>';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'gallery_content:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'gallery_content' => 'gallery_content',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['alter']['text'] = '<a href="/what-s-on?date=All&field_event_venue[]=[nid]">[field_main_image]</a>';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'body',
    2 => 'field_link',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'gallery-content';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/what-s-on?date=All&field_event_venue[]=[nid]">[title]</a>
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '350',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_link']['alter']['text'] = '<div class="action-btns">
<a class="btn" href="/what-s-on?date=All&field_event_venue[]=[nid]">VIEW EXHIBITIONS</a>

</div>';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
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
    'gallery_content' => 'gallery_content',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Gallery Order Admin */
  $handler = $view->new_display('page', 'Gallery Order Admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery Order';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_main_image' => 'field_main_image',
    'fieldset' => 'fieldset',
    'title' => 'title',
    'body' => 'body',
    'field_link' => 'field_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_main_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fieldset' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'gallery_content:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_content' => 'gallery_content',
  );
  $handler->display->display_options['path'] = 'admin/content/gallery-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Gallery Order';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['gallery_content'] = $view;

  $view = new view();
  $view->name = 'interests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Interests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'You May Also Be Interested In';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_you_may_be_also_interested_target_id';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_you_may_be_also_interested_target_id']['id'] = 'field_you_may_be_also_interested_target_id';
  $handler->display->display_options['relationships']['field_you_may_be_also_interested_target_id']['table'] = 'field_data_field_you_may_be_also_interested';
  $handler->display->display_options['relationships']['field_you_may_be_also_interested_target_id']['field'] = 'field_you_may_be_also_interested_target_id';
  $handler->display->display_options['relationships']['field_you_may_be_also_interested_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_you_may_be_also_interested_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Information';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '$node = node_load($argument);
return (isset($node->field_you_may_be_also_interested) && is_array($node->field_you_may_be_also_interested) && count($node->field_you_may_be_also_interested) > 0);';
  $export['interests'] = $view;

  $view = new view();
  $view->name = 'key_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Key Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Key Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '3';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h6>Register for classes online, by phone 613-580-2787 (ARTS) or in person at Guest Services inside the Shenkman Arts Centre.</h6>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Field: Key Information */
  $handler->display->display_options['fields']['field_key_information']['id'] = 'field_key_information';
  $handler->display->display_options['fields']['field_key_information']['table'] = 'field_data_field_key_information';
  $handler->display->display_options['fields']['field_key_information']['field'] = 'field_key_information';
  $handler->display->display_options['fields']['field_key_information']['label'] = '';
  $handler->display->display_options['fields']['field_key_information']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key_information']['delta_offset'] = '0';
  /* Field: Content: Key Information */
  $handler->display->display_options['fields']['field_key_information_col']['id'] = 'field_key_information_col';
  $handler->display->display_options['fields']['field_key_information_col']['table'] = 'field_data_field_key_information_col';
  $handler->display->display_options['fields']['field_key_information_col']['field'] = 'field_key_information_col';
  $handler->display->display_options['fields']['field_key_information_col']['label'] = '';
  $handler->display->display_options['fields']['field_key_information_col']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key_information_col']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_key_information_col']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_key_information_col']['multi_type'] = 'ul';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'main_block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h6>Register for classes online, by phone 613-580-2787 (ARTS) or in person at Guest Services inside the Shenkman Arts Centre.</h6>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Key Information */
  $handler->display->display_options['fields']['field_key_information_col']['id'] = 'field_key_information_col';
  $handler->display->display_options['fields']['field_key_information_col']['table'] = 'field_data_field_key_information_col';
  $handler->display->display_options['fields']['field_key_information_col']['field'] = 'field_key_information_col';
  $handler->display->display_options['fields']['field_key_information_col']['label'] = '';
  $handler->display->display_options['fields']['field_key_information_col']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_key_information_col']['element_wrapper_class'] = 'key-item';
  $handler->display->display_options['fields']['field_key_information_col']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_key_information_col']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_key_information_col']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_key_information_col']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_key_information_col']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_key_information_col']['multi_type'] = 'ul';
  $handler->display->display_options['block_description'] = 'Key Information';

  /* Display: Call To Artists */
  $handler = $view->new_display('block', 'Call To Artists', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Dates';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['block_description'] = 'Call to Artists Key Info';
  $export['key_information'] = $view;

  $view = new view();
  $view->name = 'media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Media';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '6';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_image',
    1 => 'fieldset',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'media-centre-item';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'news_thumbnails',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_press_release',
    2 => 'field_press_release_1',
    3 => 'field_download_images',
    4 => 'field_download_videos',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'download-content';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Press Release */
  $handler->display->display_options['fields']['field_press_release']['id'] = 'field_press_release';
  $handler->display->display_options['fields']['field_press_release']['table'] = 'field_data_field_press_release';
  $handler->display->display_options['fields']['field_press_release']['field'] = 'field_press_release';
  $handler->display->display_options['fields']['field_press_release']['label'] = '';
  $handler->display->display_options['fields']['field_press_release']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_press_release']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_release']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_press_release']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_press_release']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_press_release']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Field: Content: Press Release */
  $handler->display->display_options['fields']['field_press_release_1']['id'] = 'field_press_release_1';
  $handler->display->display_options['fields']['field_press_release_1']['table'] = 'field_data_field_press_release';
  $handler->display->display_options['fields']['field_press_release_1']['field'] = 'field_press_release';
  $handler->display->display_options['fields']['field_press_release_1']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_1']['alter']['text'] = '<span class="doc-icon"></span><a download class="press-release-download" href="[field_press_release]">Press Release</a>';
  $handler->display->display_options['fields']['field_press_release_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_1']['click_sort_column'] = 'fid';
  /* Field: Content: Download Images */
  $handler->display->display_options['fields']['field_download_images']['id'] = 'field_download_images';
  $handler->display->display_options['fields']['field_download_images']['table'] = 'field_data_field_download_images';
  $handler->display->display_options['fields']['field_download_images']['field'] = 'field_download_images';
  $handler->display->display_options['fields']['field_download_images']['label'] = '';
  $handler->display->display_options['fields']['field_download_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_download_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_images']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_download_images']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  $handler->display->display_options['fields']['field_download_images']['delta_offset'] = '0';
  /* Field: Content: Download Videos */
  $handler->display->display_options['fields']['field_download_videos']['id'] = 'field_download_videos';
  $handler->display->display_options['fields']['field_download_videos']['table'] = 'field_data_field_download_videos';
  $handler->display->display_options['fields']['field_download_videos']['field'] = 'field_download_videos';
  $handler->display->display_options['fields']['field_download_videos']['label'] = '';
  $handler->display->display_options['fields']['field_download_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_videos']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_download_videos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_download_videos']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_download_videos']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  $handler->display->display_options['fields']['field_download_videos']['delta_offset'] = '0';
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
    'media' => 'media',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['media'] = $view;

  $view = new view();
  $view->name = 'my_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    10 => '10',
    6 => '6',
    11 => '11',
    12 => '12',
    8 => '8',
    9 => '9',
    7 => '7',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'nothing' => 'nothing',
    'status' => 'status',
    'state' => 'state',
    'moderation_actions' => 'moderation_actions',
  );
  $handler->display->display_options['style_options']['default'] = 'type';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'moderation_actions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<h2>Contact Information</h2>
<p>Rental Agent<br/>
(613) 580-2424 x3956<br/>
email@ottawa.ca
</p>
<form action="<?php echo url(\'node/add/rental\'); ?>" method="get">
    <input type="submit" class="form-submit "value="<?php echo t(\'Apply for Rental\'); ?>" name="rental" />
</form>';
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['php_output'] = '<form action="<?php echo url(\'node/add/rental\'); ?>" method="get">
    <input type="submit" class="form-submit "value="<?php echo t(\'Apply for Rental\'); ?>" name="rental" />
</form>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['text'] = '<h2>[type]</h2>';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/file/add">Attach a file</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Field: Workbench Moderation: Moderation links */
  $handler->display->display_options['fields']['moderation_actions']['id'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['moderation_actions']['field'] = 'moderation_actions';
  /* Sort criterion: Content: Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['code'] = 'global $user;
$uid = $user->uid;

return $uid;';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'rental' => 'rental',
    'rental_inquiry' => 'rental_inquiry',
  );
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['is_current']['id'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['is_current']['field'] = 'is_current';
  $handler->display->display_options['filters']['is_current']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/my-dashboard';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Dashboard';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_events'] = $view;

  $view = new view();
  $view->name = 'our_seasons_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our Seasons Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any our_seasons_block content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'our_seasons_blocks:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'our_seasons_block' => 'our_seasons_block',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Our Season Order */
  $handler = $view->new_display('page', 'Our Season Order', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Our Season Order';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['path'] = 'admin/content/our-seasons-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Our Season Order';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['our_seasons_blocks'] = $view;

  $view = new view();
  $view->name = 'pages_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pages List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Menu: Parent menu link id */
  $handler->display->display_options['relationships']['plid']['id'] = 'plid';
  $handler->display->display_options['relationships']['plid']['table'] = 'menu_links';
  $handler->display->display_options['relationships']['plid']['field'] = 'plid';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['empty'] = '<img src="http://placehold.it/362x230?text=No+image+available" />';
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Teaser Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['ui_name'] = 'Teaser Image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<img src="http://placehold.it/362x230?text=No+image+available" />';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '200',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image]
<div class="info-container">
<div class="views-field-title"> [title]</div>
<div class="body">[body]</div>
<a href="[path]" class="btn more-info-link">MORE INFO</a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image_1']['id'] = 'field_main_image_1';
  $handler->display->display_options['fields']['field_main_image_1']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_main_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_main_image_1']['alter']['text'] = '<div class="photo-cred">Photo: [field_main_image_1-title] </div>';
  $handler->display->display_options['fields']['field_main_image_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_main_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image_1']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => 'content',
  );
  /* Sort criterion: Menu: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'menu_links';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Contextual filter: Menu: Node id */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'menu_links';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['depth'] = '1';
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
    'page' => 'page',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Partners */
  $handler = $view->new_display('block', 'Partners', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Main Image */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '200',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_main_image]
<div class="info-container">
<div class="views-field-title"> [title]</div>
<div class="body">[body]</div>
<a href="[field_link]" class="btn more-info-link">PARTNER WEBSITE</a>
</div>

';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $export['pages_list'] = $view;

  $view = new view();
  $view->name = 'programs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link_1']['id'] = 'field_link_1';
  $handler->display->display_options['fields']['field_link_1']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link_1']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_1']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link_1]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'events_thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'body',
    2 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-info';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '350',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'path',
    1 => 'field_schedule',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'action-btns';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[field_link_1]" class="btn btm-small">FIND OUT MORE</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_schedule']['id'] = 'field_schedule';
  $handler->display->display_options['fields']['field_schedule']['table'] = 'field_data_field_schedule';
  $handler->display->display_options['fields']['field_schedule']['field'] = 'field_schedule';
  $handler->display->display_options['fields']['field_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_schedule']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_schedule']['alter']['text'] = '<a href="[field_schedule]" class="download-schedule-link" target="_blank">Download Schedule</a>';
  $handler->display->display_options['fields']['field_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_schedule']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_schedule']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_schedule']['settings'] = array(
    'text' => 'Download [title_1] Schedule',
  );
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
    'program' => 'program',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Programs';
  $export['programs'] = $view;

  $view = new view();
  $view->name = 'venues';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Venues';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Venues';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '105',
  );
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos']['id'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['table'] = 'field_data_field_photos';
  $handler->display->display_options['fields']['field_photos']['field'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photos']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_photos']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_photos']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '	<div class="venue-item">
		<div class="venue-img">
			[field_photos]
		</div>
		<div class="venue-info">
			<h4>[title]</h4>
			[body]
			<a href="[path]" class="btn">More Info</a>
		</div>
	</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
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
    'rental_space' => 'rental_space',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Featured Venues */
  $handler = $view->new_display('block', 'Featured Venues', 'featured');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'featured-venues';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'venues:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;

  /* Display: Venue List */
  $handler = $view->new_display('block', 'Venue List', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '3';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'venues:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'rental_space' => 'rental_space',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Rental Location (field_rental_location) */
  $handler->display->display_options['filters']['field_rental_location_tid']['id'] = 'field_rental_location_tid';
  $handler->display->display_options['filters']['field_rental_location_tid']['table'] = 'field_data_field_rental_location';
  $handler->display->display_options['filters']['field_rental_location_tid']['field'] = 'field_rental_location_tid';
  $handler->display->display_options['filters']['field_rental_location_tid']['value'] = array(
    211 => '211',
  );
  $handler->display->display_options['filters']['field_rental_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rental_location_tid']['vocabulary'] = 'rental_location';

  /* Display: Menu List */
  $handler = $view->new_display('block', 'Menu List', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'venues:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'rental_space' => 'rental_space',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Venue Order Admin */
  $handler = $view->new_display('page', 'Venue Order Admin', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Venue Order';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'title' => 'title',
    'body' => 'body',
    'field_photos' => 'field_photos',
    'nid' => 'nid',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_photos' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'venues:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rental_space' => 'rental_space',
  );
  $handler->display->display_options['path'] = 'admin/content/venues-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Venue Order';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: PDC Venue List */
  $handler = $view->new_display('block', 'PDC Venue List', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '3';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'venues:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'rental_space' => 'rental_space',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Rental Location (field_rental_location) */
  $handler->display->display_options['filters']['field_rental_location_tid']['id'] = 'field_rental_location_tid';
  $handler->display->display_options['filters']['field_rental_location_tid']['table'] = 'field_data_field_rental_location';
  $handler->display->display_options['filters']['field_rental_location_tid']['field'] = 'field_rental_location_tid';
  $handler->display->display_options['filters']['field_rental_location_tid']['value'] = array(
    212 => '212',
  );
  $handler->display->display_options['filters']['field_rental_location_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rental_location_tid']['vocabulary'] = 'rental_location';
  $export['venues'] = $view;

  $view = new view();
  $view->name = 'virtual_tour';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Virtual Tour';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Level Image */
  $handler->display->display_options['fields']['field_level_image']['id'] = 'field_level_image';
  $handler->display->display_options['fields']['field_level_image']['table'] = 'field_data_field_level_image';
  $handler->display->display_options['fields']['field_level_image']['field'] = 'field_level_image';
  $handler->display->display_options['fields']['field_level_image']['label'] = '';
  $handler->display->display_options['fields']['field_level_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level_image']['alter']['text'] = '
			[field_level_image]
			<span class="map-level-tag">[title]</span>
';
  $handler->display->display_options['fields']['field_level_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_image']['element_wrapper_class'] = 'map-img';
  $handler->display->display_options['fields']['field_level_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_level_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Level Items */
  $handler->display->display_options['fields']['field_level_items']['id'] = 'field_level_items';
  $handler->display->display_options['fields']['field_level_items']['table'] = 'field_data_field_level_items';
  $handler->display->display_options['fields']['field_level_items']['field'] = 'field_level_items';
  $handler->display->display_options['fields']['field_level_items']['label'] = '';
  $handler->display->display_options['fields']['field_level_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_items']['element_wrapper_class'] = 'exhibit-legend scroll';
  $handler->display->display_options['fields']['field_level_items']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_level_items']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_level_items']['separator'] = '';
  /* Field: Content: Level Items */
  $handler->display->display_options['fields']['field_level_items_1']['id'] = 'field_level_items_1';
  $handler->display->display_options['fields']['field_level_items_1']['table'] = 'field_data_field_level_items';
  $handler->display->display_options['fields']['field_level_items_1']['field'] = 'field_level_items';
  $handler->display->display_options['fields']['field_level_items_1']['label'] = '';
  $handler->display->display_options['fields']['field_level_items_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_items_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_level_items_1']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_level_items_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_level_items_1']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'level' => 'level',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content translation: Translations */
  $handler->display->display_options['relationships']['translation']['id'] = 'translation';
  $handler->display->display_options['relationships']['translation']['table'] = 'node';
  $handler->display->display_options['relationships']['translation']['field'] = 'translation';
  $handler->display->display_options['relationships']['translation']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_level_items_target_id']['id'] = 'field_level_items_target_id';
  $handler->display->display_options['relationships']['field_level_items_target_id']['table'] = 'field_data_field_level_items';
  $handler->display->display_options['relationships']['field_level_items_target_id']['field'] = 'field_level_items_target_id';
  $handler->display->display_options['relationships']['field_level_items_target_id']['relationship'] = 'translation';
  $handler->display->display_options['relationships']['field_level_items_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="page-tab-content-toggle" id="mobile-tab-btn-[counter]">
		[title]
		<span class="toggle-icon"></span>
	</div>
';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_level_image',
    1 => 'field_level_items',
    2 => 'field_level_items_1',
    3 => 'nothing_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'page-tab-content';
  $handler->display->display_options['fields']['fieldset']['fieldset']['id'] = 'tab-[counter]';
  /* Field: Content: Level Image */
  $handler->display->display_options['fields']['field_level_image']['id'] = 'field_level_image';
  $handler->display->display_options['fields']['field_level_image']['table'] = 'field_data_field_level_image';
  $handler->display->display_options['fields']['field_level_image']['field'] = 'field_level_image';
  $handler->display->display_options['fields']['field_level_image']['label'] = '';
  $handler->display->display_options['fields']['field_level_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_level_image']['alter']['text'] = '
			[field_level_image]
			<span class="map-level-tag">[title]</span>
';
  $handler->display->display_options['fields']['field_level_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_image']['element_wrapper_class'] = 'map-img';
  $handler->display->display_options['fields']['field_level_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_level_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Level Items */
  $handler->display->display_options['fields']['field_level_items']['id'] = 'field_level_items';
  $handler->display->display_options['fields']['field_level_items']['table'] = 'field_data_field_level_items';
  $handler->display->display_options['fields']['field_level_items']['field'] = 'field_level_items';
  $handler->display->display_options['fields']['field_level_items']['label'] = '';
  $handler->display->display_options['fields']['field_level_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_items']['element_wrapper_class'] = 'exhibit-legend scroll';
  $handler->display->display_options['fields']['field_level_items']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_level_items']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_level_items']['separator'] = '';
  /* Field: Content: Level Items */
  $handler->display->display_options['fields']['field_level_items_1']['id'] = 'field_level_items_1';
  $handler->display->display_options['fields']['field_level_items_1']['table'] = 'field_data_field_level_items';
  $handler->display->display_options['fields']['field_level_items_1']['field'] = 'field_level_items';
  $handler->display->display_options['fields']['field_level_items_1']['label'] = '';
  $handler->display->display_options['fields']['field_level_items_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_level_items_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_level_items_1']['settings'] = array(
    'view_mode' => 'teaser',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_level_items_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_level_items_1']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="exhibits-btn-wrapper">
<a class="btn btn-with-arrow-left" id="exhibits-btn-prev-[counter]" href="#">View<br />Previous Level<span class="arrow"></span></a>
<a class="btn btn-with-arrow" id="exhibits-btn-[counter]" href="#"><span class="arrow"></span>View<br />Next Level</a>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
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
    'level' => 'level',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['block_description'] = 'Virtual Tour Block';

  /* Display: Tabs */
  $handler = $view->new_display('block', 'Tabs', 'tabs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-tabs';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a class="btn" href="#" id="tab-btn-[counter]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['block_description'] = 'Tabs for Virtual Tour';
  $export['virtual_tour'] = $view;

  $view = new view();
  $view->name = 'volunteer_position_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Volunteer Position Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Volunteer Position Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '12';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '12';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Photos */
  $handler->display->display_options['fields']['field_photos']['id'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['table'] = 'field_data_field_photos';
  $handler->display->display_options['fields']['field_photos']['field'] = 'field_photos';
  $handler->display->display_options['fields']['field_photos']['label'] = '';
  $handler->display->display_options['fields']['field_photos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_photos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photos']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_photos']['multi_type'] = 'ul';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="page-tab-content-toggle" id="mobile-tab-btn-[counter]">
			[title] <span class="toggle-icon"></span>
		</div>
		<div id="tab-[counter]" class="page-tab-content">
			<div class="row">
				<div class="col col-sm-7">
					[body]
				</div>
				<div class="col col-sm-5">
					[field_photos]
				</div>
			</div>
		</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'volunteer_position_details:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'volunteer_position' => 'volunteer_position',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;

  /* Display: Tab Order Page */
  $handler = $view->new_display('page', 'Tab Order Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Volunteer Position Details Tab Order';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'volunteer_position_details:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer_position' => 'volunteer_position',
  );
  $handler->display->display_options['path'] = 'admin/content/volunteer-position-order';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Volunteer Position Details Tab Order';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['volunteer_position_details'] = $view;

  $view = new view();
  $view->name = 'vouchers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vouchers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FRIENDS OF FRONT + CENTRE';
  $handler->display->display_options['css_class'] = 'coupon-grid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>Check out the savings vouchers from our participating vendor partners below.</h4>
<p>Click Logos to Reveal Coupon Details</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_plain';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'voucher_grid_image',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_image]
<div class="coupon-details">
<h6><strong>[title]</strong></h6>
[body]
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'coupon-item';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'voucher' => 'voucher',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Membership Type (field_membership_type) */
  $handler->display->display_options['filters']['field_membership_type_tid']['id'] = 'field_membership_type_tid';
  $handler->display->display_options['filters']['field_membership_type_tid']['table'] = 'field_data_field_membership_type';
  $handler->display->display_options['filters']['field_membership_type_tid']['field'] = 'field_membership_type_tid';
  $handler->display->display_options['filters']['field_membership_type_tid']['value'] = array(
    213 => '213',
  );
  $handler->display->display_options['filters']['field_membership_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_membership_type_tid']['vocabulary'] = 'membership_type';

  /* Display: Front + Centre Vouchers Block */
  $handler = $view->new_display('block', 'Front + Centre Vouchers Block', 'block');

  /* Display: MIFO Vouchers Block */
  $handler = $view->new_display('block', 'MIFO Vouchers Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Get even more out of your membership!';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>Save up to 15% and enjoy other perks when you show your card at participating retailers!</h4>

<p>*If your business would like to become a Carte Privilège partner, contact Caroline Lalonde by phone at 613-580-2766 or by e-mail at clalonde@mifo.ca</p>

<p>Click Logos to Reveal Coupon Details</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'voucher' => 'voucher',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Membership Type (field_membership_type) */
  $handler->display->display_options['filters']['field_membership_type_tid']['id'] = 'field_membership_type_tid';
  $handler->display->display_options['filters']['field_membership_type_tid']['table'] = 'field_data_field_membership_type';
  $handler->display->display_options['filters']['field_membership_type_tid']['field'] = 'field_membership_type_tid';
  $handler->display->display_options['filters']['field_membership_type_tid']['value'] = array(
    214 => '214',
  );
  $handler->display->display_options['filters']['field_membership_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_membership_type_tid']['vocabulary'] = 'membership_type';
  $export['vouchers'] = $view;

  $view = new view();
  $view->name = 'what_s_on';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_events';
  $view->human_name = 'What\'s On';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s On';
  $handler->display->display_options['css_class'] = 'wc';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['query']['options']['parse_mode'] = 'direct';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Show Results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'full_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_dates_field_preferred_dates_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
        'datepicker_options' => '',
      ),
    ),
    'field_event_genre' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_age_group' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_type' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns_horizontal'] = '-1';
  $handler->display->display_options['style_options']['columns_vertical'] = '12';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '0';
  $handler->display->display_options['style_options']['columns_md'] = '0';
  $handler->display->display_options['style_options']['columns_lg'] = '12';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_advisory' => 'field_advisory',
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="sub-title">
		<div class="wc"><h2>Classes, workshops and camps at Shenkman Arts Centre</h2>
<p>At Shenkman Arts Centre you’ll find more than 500 courses, camps and workshops offered to art-lovers of all ages and skill levels. Patrons can choose from a variety of disciplines in both French and English, including acting, pottery, dance, drawing, sculpture and digital arts.</p>
</div>
	</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results matched your search.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out__1']['id'] = 'field_sold_out__1';
  $handler->display->display_options['fields']['field_sold_out__1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_sold_out__1']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__1']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['text'] = 'sold-out';
  $handler->display->display_options['fields']['field_sold_out__1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['type'] = 'list_key';
  /* Field: Indexed Content: Event Type */
  $handler->display->display_options['fields']['field_event_type_1']['id'] = 'field_event_type_1';
  $handler->display->display_options['fields']['field_event_type_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_type_1']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type_1']['alter']['text'] = '[field_event_type_1-tid]';
  $handler->display->display_options['fields']['field_event_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_event_type_1']['display'] = 'id';
  $handler->display->display_options['fields']['field_event_type_1']['view_mode'] = 'token';
  $handler->display->display_options['fields']['field_event_type_1']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Result Item';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-result-item cat-[field_event_type_1]';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Img';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_event_type',
    1 => 'field_dates',
    2 => 'field_event_image',
    3 => 'field_event_image_1',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Indexed Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_event_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_event_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_dates']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dates']['display'] = 'view';
  $handler->display->display_options['fields']['field_dates']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_dates']['bypass_access'] = 0;
  /* Field: Indexed Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'event_what_s_on',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Event Image */
  $handler->display->display_options['fields']['field_event_image_1']['id'] = 'field_event_image_1';
  $handler->display->display_options['fields']['field_event_image_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_image_1']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_1']['alter']['text'] = '<div class="photo-cred">Photo: [field_event_image_1-title]</div>';
  $handler->display->display_options['fields']['field_event_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Event Info';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_dates_1',
    2 => 'body',
    3 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_dates_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dates_1']['display'] = 'view';
  $handler->display->display_options['fields']['field_dates_1']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_dates_1']['bypass_access'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'ignore',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Action btns';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_advisory',
    1 => 'field_promo_code_url_1',
    2 => 'field_promo_code',
    3 => 'field_tickets_link',
    4 => 'field_sold_out_',
    5 => 'url',
    6 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'action-btns';
  /* Field: Indexed Content: Advisory */
  $handler->display->display_options['fields']['field_advisory']['id'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_advisory']['field'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['alter']['text'] = 'Advisory: [field_advisory-value]';
  $handler->display->display_options['fields']['field_advisory']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Tickets Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">TICKETS</a>';
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out_']['id'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_sold_out_']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['text'] = '<div class="btn btn-smal btn-sold-out">Sold out</div>';
  $handler->display->display_options['fields']['field_sold_out_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['type'] = 'list_key';
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]" class="btn btn-small">MORE INFO</a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[url]
[field_tickets_link]
[field_sold_out_] 
[field_promo_code]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = '[field_sold_out__1]';
  /* Field: Indexed Content: Advisory */
  $handler->display->display_options['fields']['field_advisory_1']['id'] = 'field_advisory_1';
  $handler->display->display_options['fields']['field_advisory_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_advisory_1']['field'] = 'field_advisory';
  /* Sort criterion: Indexed Content: Min Start Date */
  $handler->display->display_options['sorts']['field_min_start_date']['id'] = 'field_min_start_date';
  $handler->display->display_options['sorts']['field_min_start_date']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['field_min_start_date']['field'] = 'field_min_start_date';
  /* Sort criterion: Indexed Content: Max End Date */
  $handler->display->display_options['sorts']['field_max_end_date']['id'] = 'field_max_end_date';
  $handler->display->display_options['sorts']['field_max_end_date']['table'] = 'search_api_index_events';
  $handler->display->display_options['sorts']['field_max_end_date']['field'] = 'field_max_end_date';
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Event Date » Date: Start date (indexed) */
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['id'] = 'field_dates_field_preferred_dates_value';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['field'] = 'field_dates_field_preferred_dates_value';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['value'] = 'now';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['expose']['operator_id'] = 'field_dates_field_preferred_dates_value_op';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['expose']['label'] = 'Start date (indexed)';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['expose']['operator'] = 'field_dates_field_preferred_dates_value_op';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['expose']['identifier'] = 'field_dates_field_preferred_dates_value';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['group_info']['label'] = 'Start date (indexed)';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['group_info']['identifier'] = 'field_dates_field_preferred_dates_value';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Today',
      'operator' => '>=',
      'value' => 'now',
    ),
    2 => array(
      'title' => 'This Week',
      'operator' => '>=',
      'value' => 'now',
    ),
    3 => array(
      'title' => 'Upcoming',
      'operator' => '>=',
      'value' => 'now',
    ),
  );
  $handler->display->display_options['filters']['field_dates_field_preferred_dates_value']['year_range'] = '-0:+3';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language']['group'] = 1;
  /* Filter criterion: Indexed Content: Event Genre */
  $handler->display->display_options['filters']['field_event_genre']['id'] = 'field_event_genre';
  $handler->display->display_options['filters']['field_event_genre']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_event_genre']['field'] = 'field_event_genre';
  $handler->display->display_options['filters']['field_event_genre']['value'] = array();
  $handler->display->display_options['filters']['field_event_genre']['group'] = 1;
  $handler->display->display_options['filters']['field_event_genre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre']['expose']['operator_id'] = 'field_event_genre_op';
  $handler->display->display_options['filters']['field_event_genre']['expose']['label'] = 'By Genre';
  $handler->display->display_options['filters']['field_event_genre']['expose']['operator'] = 'field_event_genre_op';
  $handler->display->display_options['filters']['field_event_genre']['expose']['identifier'] = 'genre';
  $handler->display->display_options['filters']['field_event_genre']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_event_genre']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Age Group */
  $handler->display->display_options['filters']['field_age_group']['id'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_age_group']['field'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['value'] = array();
  $handler->display->display_options['filters']['field_age_group']['group'] = 1;
  $handler->display->display_options['filters']['field_age_group']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['operator_id'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['label'] = 'By Age';
  $handler->display->display_options['filters']['field_age_group']['expose']['operator'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_group']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_age_group']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Event Type */
  $handler->display->display_options['filters']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['filters']['field_event_type']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['filters']['field_event_type']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_event_type']['value'] = array();
  $handler->display->display_options['filters']['field_event_type']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type']['expose']['operator_id'] = 'field_event_type_op';
  $handler->display->display_options['filters']['field_event_type']['expose']['label'] = 'By Event Type';
  $handler->display->display_options['filters']['field_event_type']['expose']['operator'] = 'field_event_type_op';
  $handler->display->display_options['filters']['field_event_type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_event_type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_event_type']['expose']['reduce'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );

  /* Display: What's On */
  $handler = $view->new_display('page', 'What\'s On', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Show Results';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_genre' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_dates_field_preferred_dates_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_age_group' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_presenter_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_event_venue' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Inexed Content: Sold out? (Events) */
  $handler->display->display_options['fields']['field_sold_out__1']['id'] = 'field_sold_out__1';
  $handler->display->display_options['fields']['field_sold_out__1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_sold_out__1']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__1']['ui_name'] = 'Inexed Content: Sold out? (Events)';
  $handler->display->display_options['fields']['field_sold_out__1']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['alter']['text'] = 'sold-out';
  $handler->display->display_options['fields']['field_sold_out__1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__1']['type'] = 'list_key';
  /* Field: Indexed Content: Event Genre (Events) */
  $handler->display->display_options['fields']['field_event_genre']['id'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_genre']['field'] = 'field_event_genre';
  $handler->display->display_options['fields']['field_event_genre']['ui_name'] = 'Indexed Content: Event Genre (Events)';
  $handler->display->display_options['fields']['field_event_genre']['label'] = '';
  $handler->display->display_options['fields']['field_event_genre']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_genre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_genre']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_event_genre']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_event_genre']['bypass_access'] = 0;
  /* Field: Indexed Content: Event Type (Events) */
  $handler->display->display_options['fields']['field_event_type_1']['id'] = 'field_event_type_1';
  $handler->display->display_options['fields']['field_event_type_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_type_1']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type_1']['ui_name'] = 'Indexed Content: Event Type (Events)';
  $handler->display->display_options['fields']['field_event_type_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type_1']['alter']['text'] = '[field_event_genre]';
  $handler->display->display_options['fields']['field_event_type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_event_type_1']['display'] = 'id';
  $handler->display->display_options['fields']['field_event_type_1']['view_mode'] = 'token';
  $handler->display->display_options['fields']['field_event_type_1']['bypass_access'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Result Item';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
    1 => 'fieldset_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-result-item cat-[field_event_type_1]';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Img';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_event_type',
    1 => 'field_dates',
    2 => 'field_sold_out__2',
    3 => 'field_event_image',
    4 => 'field_file_image_credit',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'event-img-container';
  /* Field: Indexed Content: Event Type (Events) */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['ui_name'] = 'Indexed Content: Event Type (Events)';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '[field_event_genre]';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_event_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_event_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_dates']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dates']['display'] = 'view';
  $handler->display->display_options['fields']['field_dates']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_dates']['bypass_access'] = 0;
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out__2']['id'] = 'field_sold_out__2';
  $handler->display->display_options['fields']['field_sold_out__2']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_sold_out__2']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out__2']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out__2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['alter']['text'] = 'Sold Out';
  $handler->display->display_options['fields']['field_sold_out__2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out__2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out__2']['type'] = 'list_key';
  /* Field: Indexed Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'event_what_s_on',
    'image_link' => 'content',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Event Info';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_dates_1',
    2 => 'field_presenter_type',
    3 => 'field_organization',
    4 => 'field_dates_2',
    5 => 'body',
    6 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-info';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Event Date */
  $handler->display->display_options['fields']['field_dates_1']['id'] = 'field_dates_1';
  $handler->display->display_options['fields']['field_dates_1']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_dates_1']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_1']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_dates_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dates_1']['display'] = 'view';
  $handler->display->display_options['fields']['field_dates_1']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_dates_1']['bypass_access'] = 0;
  /* Field: Indexed Content: Special Presentations */
  $handler->display->display_options['fields']['field_presenter_type']['id'] = 'field_presenter_type';
  $handler->display->display_options['fields']['field_presenter_type']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_presenter_type']['field'] = 'field_presenter_type';
  $handler->display->display_options['fields']['field_presenter_type']['label'] = '';
  $handler->display->display_options['fields']['field_presenter_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_presenter_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_presenter_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_presenter_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_presenter_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Presenters  */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_organization']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization']['bypass_access'] = 0;
  /* Field: Indexed Content: Event Date (for mobile) */
  $handler->display->display_options['fields']['field_dates_2']['id'] = 'field_dates_2';
  $handler->display->display_options['fields']['field_dates_2']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_dates_2']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates_2']['ui_name'] = 'Indexed Content: Event Date (for mobile)';
  $handler->display->display_options['fields']['field_dates_2']['label'] = '';
  $handler->display->display_options['fields']['field_dates_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates_2']['element_wrapper_class'] = 'mobile-only';
  $handler->display->display_options['fields']['field_dates_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_dates_2']['list']['mode'] = 'first';
  $handler->display->display_options['fields']['field_dates_2']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_dates_2']['display'] = 'view';
  $handler->display->display_options['fields']['field_dates_2']['view_mode'] = 'event_whats_on';
  $handler->display->display_options['fields']['field_dates_2']['bypass_access'] = 0;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '30',
    'trim_type' => 'words',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'trim',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Action btns';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'field_advisory',
    1 => 'field_tickets_link',
    2 => 'field_sold_out_',
    3 => 'url',
    4 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'action-btns';
  /* Field: Indexed Content: Advisory */
  $handler->display->display_options['fields']['field_advisory']['id'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_advisory']['field'] = 'field_advisory';
  $handler->display->display_options['fields']['field_advisory']['alter']['text'] = 'Advisory: [field_advisory-value]';
  $handler->display->display_options['fields']['field_advisory']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Tickets Link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['label'] = '';
  $handler->display->display_options['fields']['field_tickets_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['alter']['text'] = '<a href="[field_tickets_link-url]" class="btn btn-small">TICKETS</a>';
  $handler->display->display_options['fields']['field_tickets_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_link']['click_sort_column'] = 'url';
  /* Field: Indexed Content: Sold out? */
  $handler->display->display_options['fields']['field_sold_out_']['id'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['field_sold_out_']['field'] = 'field_sold_out_';
  $handler->display->display_options['fields']['field_sold_out_']['label'] = '';
  $handler->display->display_options['fields']['field_sold_out_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['alter']['text'] = '<div class="btn btn-smal btn-sold-out">Sold out</div>';
  $handler->display->display_options['fields']['field_sold_out_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sold_out_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_sold_out_']['type'] = 'list_key';
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_events';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a href="[url]" class="btn btn-small">MORE INFO</a>';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[url]
[field_tickets_link]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = '[field_sold_out__1]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    3 => 0,
    6 => 0,
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Indexed Content: Next Start Date */
  $handler->display->display_options['filters']['field_next_start_date']['id'] = 'field_next_start_date';
  $handler->display->display_options['filters']['field_next_start_date']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_next_start_date']['field'] = 'field_next_start_date';
  $handler->display->display_options['filters']['field_next_start_date']['group'] = 1;
  $handler->display->display_options['filters']['field_next_start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_next_start_date']['expose']['operator_id'] = 'field_next_start_date_op';
  $handler->display->display_options['filters']['field_next_start_date']['expose']['label'] = 'Next Start Date';
  $handler->display->display_options['filters']['field_next_start_date']['expose']['operator'] = 'field_next_start_date_op';
  $handler->display->display_options['filters']['field_next_start_date']['expose']['identifier'] = 'field_next_start_date';
  $handler->display->display_options['filters']['field_next_start_date']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_next_start_date']['group_info']['label'] = 'By Date';
  $handler->display->display_options['filters']['field_next_start_date']['group_info']['identifier'] = 'date';
  $handler->display->display_options['filters']['field_next_start_date']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_next_start_date']['group_info']['default_group'] = '4';
  $handler->display->display_options['filters']['field_next_start_date']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Today',
      'operator' => '>=',
      'value' => 'now',
    ),
    2 => array(
      'title' => 'This Week',
      'operator' => '>=',
      'value' => 'now + 7 days',
    ),
    3 => array(
      'title' => 'This Month',
      'operator' => '>=',
      'value' => 'now + 30 days',
    ),
    4 => array(
      'title' => 'Upcoming',
      'operator' => '>=',
      'value' => 'now',
    ),
    5 => array(
      'title' => 'Specified',
      'operator' => 'specified',
      'value' => 'specified',
    ),
  );
  $handler->display->display_options['filters']['field_next_start_date']['year_range'] = '-0:+1';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Indexed Content: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['search_api_language']['group'] = 1;
  /* Filter criterion: Indexed Content: Event Genre */
  $handler->display->display_options['filters']['field_event_genre']['id'] = 'field_event_genre';
  $handler->display->display_options['filters']['field_event_genre']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_event_genre']['field'] = 'field_event_genre';
  $handler->display->display_options['filters']['field_event_genre']['value'] = array();
  $handler->display->display_options['filters']['field_event_genre']['group'] = 1;
  $handler->display->display_options['filters']['field_event_genre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre']['expose']['operator_id'] = 'field_event_genre_op';
  $handler->display->display_options['filters']['field_event_genre']['expose']['label'] = 'By Genre';
  $handler->display->display_options['filters']['field_event_genre']['expose']['operator'] = 'field_event_genre_op';
  $handler->display->display_options['filters']['field_event_genre']['expose']['identifier'] = 'genre';
  $handler->display->display_options['filters']['field_event_genre']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_genre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_event_genre']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Age Group */
  $handler->display->display_options['filters']['field_age_group']['id'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_age_group']['field'] = 'field_age_group';
  $handler->display->display_options['filters']['field_age_group']['value'] = array();
  $handler->display->display_options['filters']['field_age_group']['group'] = 1;
  $handler->display->display_options['filters']['field_age_group']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['operator_id'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['label'] = 'By Age';
  $handler->display->display_options['filters']['field_age_group']['expose']['operator'] = 'field_age_group_op';
  $handler->display->display_options['filters']['field_age_group']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_group']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_age_group']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_age_group']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Event Type */
  $handler->display->display_options['filters']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['filters']['field_event_type']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['filters']['field_event_type']['value'] = array();
  $handler->display->display_options['filters']['field_event_type']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type']['expose']['operator_id'] = 'field_event_type_op';
  $handler->display->display_options['filters']['field_event_type']['expose']['label'] = 'By Event Type';
  $handler->display->display_options['filters']['field_event_type']['expose']['operator'] = 'field_event_type_op';
  $handler->display->display_options['filters']['field_event_type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_event_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_event_type']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Event Venue */
  $handler->display->display_options['filters']['field_event_venue']['id'] = 'field_event_venue';
  $handler->display->display_options['filters']['field_event_venue']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_event_venue']['field'] = 'field_event_venue';
  $handler->display->display_options['filters']['field_event_venue']['group'] = 1;
  $handler->display->display_options['filters']['field_event_venue']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_venue']['expose']['operator_id'] = 'field_event_venue_op';
  $handler->display->display_options['filters']['field_event_venue']['expose']['label'] = 'By Venue';
  $handler->display->display_options['filters']['field_event_venue']['expose']['operator'] = 'field_event_venue_op';
  $handler->display->display_options['filters']['field_event_venue']['expose']['identifier'] = 'field_event_venue';
  $handler->display->display_options['filters']['field_event_venue']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_event_venue']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  /* Filter criterion: Indexed Content: Special Presentations */
  $handler->display->display_options['filters']['field_presenter_type']['id'] = 'field_presenter_type';
  $handler->display->display_options['filters']['field_presenter_type']['table'] = 'search_api_index_events';
  $handler->display->display_options['filters']['field_presenter_type']['field'] = 'field_presenter_type';
  $handler->display->display_options['filters']['field_presenter_type']['value'] = array();
  $handler->display->display_options['filters']['field_presenter_type']['group'] = 1;
  $handler->display->display_options['filters']['field_presenter_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_presenter_type']['expose']['operator_id'] = 'field_presenter_type_op';
  $handler->display->display_options['filters']['field_presenter_type']['expose']['label'] = 'Special Presentations';
  $handler->display->display_options['filters']['field_presenter_type']['expose']['operator'] = 'field_presenter_type_op';
  $handler->display->display_options['filters']['field_presenter_type']['expose']['identifier'] = 'field_presenter_type';
  $handler->display->display_options['filters']['field_presenter_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_presenter_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    7 => '7',
    8 => '8',
    9 => '9',
    10 => '10',
    11 => '11',
    12 => '12',
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_presenter_type']['expose']['reduce'] = 0;
  $handler->display->display_options['path'] = 'what-s-on';
  $export['what_s_on'] = $view;

  $view = new view();
  $view->name = 'what_s_on_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'What\'s On Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Event Image (field_event_image:fid) */
  $handler->display->display_options['relationships']['field_event_image_fid']['id'] = 'field_event_image_fid';
  $handler->display->display_options['relationships']['field_event_image_fid']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['relationships']['field_event_image_fid']['field'] = 'field_event_image_fid';
  $handler->display->display_options['relationships']['field_event_image_fid']['label'] = 'Event Image File';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '1',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
  /* Filter criterion: Content: Featured Event (field_featured_event) */
  $handler->display->display_options['filters']['field_featured_event_value']['id'] = 'field_featured_event_value';
  $handler->display->display_options['filters']['field_featured_event_value']['table'] = 'field_data_field_featured_event';
  $handler->display->display_options['filters']['field_featured_event_value']['field'] = 'field_featured_event_value';
  $handler->display->display_options['filters']['field_featured_event_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    148 => '148',
    14 => '14',
    15 => '15',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_event_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_type']['alter']['text'] = '[field_event_type-tid]';
  $handler->display->display_options['fields']['field_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_type']['type'] = 'ds_taxonomy_view_mode';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'slide-content';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'wc';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'fieldset',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'wc';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'title',
    1 => 'field_organization',
    2 => 'body',
    3 => 'field_dates',
    4 => 'field_event_image_1',
    5 => 'field_file_image_credit',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-slider-title cat-[field_event_type]';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field: Presenters */
  $handler->display->display_options['fields']['field_organization']['id'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['table'] = 'field_data_field_organization';
  $handler->display->display_options['fields']['field_organization']['field'] = 'field_organization';
  $handler->display->display_options['fields']['field_organization']['label'] = '';
  $handler->display->display_options['fields']['field_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 'text',
    ),
    'trim_preserve_tags' => '<p>',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'event_node',
  );
  $handler->display->display_options['fields']['field_dates']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_event_image_1']['id'] = 'field_event_image_1';
  $handler->display->display_options['fields']['field_event_image_1']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_image_1']['alter']['text'] = '<div class="photo-cred">[field_event_image_1-title]</div>';
  $handler->display->display_options['fields']['field_event_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: File: Photo Credit */
  $handler->display->display_options['fields']['field_file_image_credit']['id'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['table'] = 'field_data_field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['field'] = 'field_file_image_credit';
  $handler->display->display_options['fields']['field_file_image_credit']['relationship'] = 'field_event_image_fid';
  $handler->display->display_options['fields']['field_file_image_credit']['label'] = 'Photo';
  $handler->display->display_options['fields']['field_file_image_credit']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_file_image_credit']['element_wrapper_class'] = 'photo-cred';
  $handler->display->display_options['fields']['field_file_image_credit']['hide_empty'] = TRUE;
  $export['what_s_on_slideshow'] = $view;

  return $export;
}
