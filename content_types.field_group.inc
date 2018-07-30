<?php
/**
 * @file
 * content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|event|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '10',
    'children' => array(
      0 => 'field_sop_permit',
      1 => 'field_food_service_style',
      2 => 'field_bar',
      3 => 'field_additional_important_infor',
      4 => 'field_internet_wifi_',
      5 => 'field_will_you_be_having_recepti',
      6 => 'field_will_you_be_selling_mercha',
      7 => 'group_equipment',
      8 => 'group_insurance',
      9 => 'group_recordings',
      10 => 'group_socan_information',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_additional_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|rental|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_additional_information',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Additional Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-additional-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_additional_information|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bar|node|event|event_report_patron_services';
  $field_group->group_name = 'group_bar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bar',
    'weight' => '3',
    'children' => array(
      0 => 'field_sop_permit',
      1 => 'field_bar',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bar field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_bar|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_box_office|node|event|event_report_guest_services';
  $field_group->group_name = 'group_box_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_guest_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Box Office',
    'weight' => '2',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_pricing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-box-office field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_box_office|node|event|event_report_guest_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_box_office|node|event|event_report_patron_services';
  $field_group->group_name = 'group_box_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Box Office',
    'weight' => '1',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_pricing',
      2 => 'field_where_to_buy_tickets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-box-office field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_box_office|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_box_office|node|rental|form';
  $field_group->group_name = 'group_box_office';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'label' => 'Box Office',
    'weight' => '61',
    'children' => array(
      0 => 'field_box_office_name',
      1 => 'field_box_office_phone',
      2 => 'field_box_office_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Box Office',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-box-office field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_box_office|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_details|node|camp|default';
  $field_group->group_name = 'group_camp_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Camp Details',
    'weight' => '4',
    'children' => array(
      0 => 'group_info',
      1 => 'group_date_time',
      2 => 'group_registration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_details|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_details|node|camp|form';
  $field_group->group_name = 'group_camp_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp';
  $field_group->data = array(
    'label' => 'Camp Details',
    'weight' => '11',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_advisory_alert',
      2 => 'field_event_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camp_details|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_info|node|camp|form';
  $field_group->group_name = 'group_camp_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp';
  $field_group->data = array(
    'label' => 'Camp Info',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_image',
      1 => 'field_event_venue',
      2 => 'field_class_genre',
      3 => 'field_camp_season',
      4 => 'field_photos',
      5 => 'field_tickets_link',
      6 => 'field_notes',
      7 => 'field_presenter_type',
      8 => 'field_organization',
      9 => 'field_camp_dates',
      10 => 'field_display_title',
      11 => 'title',
      12 => 'group_camp_tabs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camp_info|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_1|node|camp|default';
  $field_group->group_name = 'group_camp_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => '',
    'weight' => '30',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-1 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_tab_1|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_1|node|camp|form';
  $field_group->group_name = 'group_camp_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 1',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camp_tab_1|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_2|node|camp|default';
  $field_group->group_name = 'group_camp_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 2',
    'weight' => '31',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-2 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_tab_2|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_2|node|camp|form';
  $field_group->group_name = 'group_camp_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 2',
    'weight' => '11',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camp_tab_2|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_3|node|camp|default';
  $field_group->group_name = 'group_camp_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 3',
    'weight' => '32',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-3 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_tab_3|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_3|node|camp|form';
  $field_group->group_name = 'group_camp_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 3',
    'weight' => '12',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camp_tab_3|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_4|node|camp|default';
  $field_group->group_name = 'group_camp_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 4',
    'weight' => '33',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-4 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_tab_4|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tab_4|node|camp|form';
  $field_group->group_name = 'group_camp_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp_tabs';
  $field_group->data = array(
    'label' => 'Camp Tab 4',
    'weight' => '13',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-camp-tab-4 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_camp_tab_4|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tabs|node|camp|default';
  $field_group->group_name = 'group_camp_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Camp Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_camp_tab_1',
      1 => 'group_camp_tab_2',
      2 => 'group_camp_tab_3',
      3 => 'group_camp_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-camp-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_tabs|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp_tabs|node|camp|form';
  $field_group->group_name = 'group_camp_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_camp_info';
  $field_group->data = array(
    'label' => 'Camp Tabs',
    'weight' => '11',
    'children' => array(
      0 => 'group_camp_tab_1',
      1 => 'group_camp_tab_2',
      2 => 'group_camp_tab_3',
      3 => 'group_camp_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-camp-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp_tabs|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_camp|node|camp|form';
  $field_group->group_name = 'group_camp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Camp',
    'weight' => '3',
    'children' => array(
      0 => 'group_camp_info',
      1 => 'group_camp_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-camp field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_camp|node|camp|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_catering_kitchen|node|rental|form';
  $field_group->group_name = 'group_catering_kitchen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_front_of_house';
  $field_group->data = array(
    'label' => 'Catering Kitchen',
    'weight' => '85',
    'children' => array(
      0 => 'field_catering_kitchen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Catering Kitchen',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-catering-kitchen field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_catering_kitchen|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_details|node|class|default';
  $field_group->group_name = 'group_class_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Class Details',
    'weight' => '4',
    'children' => array(
      0 => 'group_info',
      1 => 'group_date_time',
      2 => 'group_registration',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_details|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_details|node|class|form';
  $field_group->group_name = 'group_class_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class';
  $field_group->data = array(
    'label' => 'Class Details',
    'weight' => '11',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_advisory_alert',
      2 => 'field_event_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_class_details|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_info|node|class|form';
  $field_group->group_name = 'group_class_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class';
  $field_group->data = array(
    'label' => 'Class Info',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_image',
      1 => 'field_class_genre',
      2 => 'field_class_season',
      3 => 'field_photos',
      4 => 'field_tickets_link',
      5 => 'field_notes',
      6 => 'field_presenter_type',
      7 => 'field_organization',
      8 => 'field_class_dates',
      9 => 'field_display_title',
      10 => 'title',
      11 => 'group_class_tabs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_class_info|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_1|node|class|default';
  $field_group->group_name = 'group_class_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-1 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_tab_1|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_1|node|class|form';
  $field_group->group_name = 'group_class_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 1',
    'weight' => '24',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_class_tab_1|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_2|node|class|default';
  $field_group->group_name = 'group_class_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 2',
    'weight' => '7',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-2 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_tab_2|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_2|node|class|form';
  $field_group->group_name = 'group_class_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 2',
    'weight' => '25',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_class_tab_2|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_3|node|class|default';
  $field_group->group_name = 'group_class_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 3',
    'weight' => '8',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-3 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_tab_3|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_3|node|class|form';
  $field_group->group_name = 'group_class_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 3',
    'weight' => '26',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_class_tab_3|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_4|node|class|default';
  $field_group->group_name = 'group_class_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 4',
    'weight' => '9',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-4 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_tab_4|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tab_4|node|class|form';
  $field_group->group_name = 'group_class_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_tabs';
  $field_group->data = array(
    'label' => 'Class Tab 4',
    'weight' => '27',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-class-tab-4 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_class_tab_4|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tabs|node|class|default';
  $field_group->group_name = 'group_class_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Class Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_class_tab_1',
      1 => 'group_class_tab_2',
      2 => 'group_class_tab_3',
      3 => 'group_class_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-class-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_tabs|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class_tabs|node|class|form';
  $field_group->group_name = 'group_class_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_class_info';
  $field_group->data = array(
    'label' => 'Class Tabs',
    'weight' => '10',
    'children' => array(
      0 => 'group_class_tab_1',
      1 => 'group_class_tab_2',
      2 => 'group_class_tab_3',
      3 => 'group_class_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-class-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class_tabs|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_class|node|class|form';
  $field_group->group_name = 'group_class';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Class',
    'weight' => '2',
    'children' => array(
      0 => 'group_class_info',
      1 => 'group_class_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-class field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_class|node|class|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|event|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Applicant Contact Information',
    'weight' => '11',
    'children' => array(
      0 => 'field_main_contact_name',
      1 => 'field_main_contact_phone',
      2 => 'field_marketing_name',
      3 => 'field_marketing_phone',
      4 => 'field_box_office_email',
      5 => 'field_main_contact_email',
      6 => 'field_production_email',
      7 => 'field_signing_authority_email',
      8 => 'field_signing_authority_name',
      9 => 'field_signing_authority_phone',
      10 => 'field_production_name',
      11 => 'field_production_phone',
      12 => 'field_box_office_name',
      13 => 'field_box_office_phone',
      14 => 'field_other_name',
      15 => 'field_other_phone',
      16 => 'field_other_email',
      17 => 'field_marketing_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contact_info|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|rental_inquiry|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental_inquiry';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_last_name',
      1 => 'field_name_of_organization_if_ap',
      2 => 'field_phone_number',
      3 => 'field_email_address',
      4 => 'field_first_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_info|node|rental_inquiry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|rental_inquiry|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental_inquiry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_last_name',
      1 => 'field_name_of_organization_if_ap',
      2 => 'field_phone_number',
      3 => 'field_email_address',
      4 => 'field_first_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact_info|node|rental_inquiry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|rental|form';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '2',
    'children' => array(
      0 => 'group_main_contact',
      1 => 'group_signing_authority',
      2 => 'group_production',
      3 => 'group_marketing',
      4 => 'group_box_office',
      5 => 'group_other',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-contact-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contact_info|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|event|event_report_patron_services';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '2',
    'children' => array(
      0 => 'field_box_office_email',
      1 => 'field_box_office_name',
      2 => 'field_box_office_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|event|event_report_production';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '11',
    'children' => array(
      0 => 'field_production_email',
      1 => 'field_production_name',
      2 => 'field_production_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_contact|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|camp|default';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_details';
  $field_group->data = array(
    'label' => 'Date & Time',
    'weight' => '27',
    'children' => array(
      0 => 'field_camp_dates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date-time field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_date_time|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|class|default';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_details';
  $field_group->data = array(
    'label' => 'Date & Time',
    'weight' => '19',
    'children' => array(
      0 => 'field_class_dates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_date_time|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|event|default';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_details';
  $field_group->data = array(
    'label' => 'Date & Time',
    'weight' => '38',
    'children' => array(
      0 => 'field_dates',
      1 => 'field_mta_date',
      2 => 'field_vernissage_date',
      3 => 'field_artist_talk_date',
      4 => 'field_mta_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date-time field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_date_time|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_time|node|exhibition|default';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_exhibition_details';
  $field_group->data = array(
    'label' => 'Date & Time',
    'weight' => '17',
    'children' => array(
      0 => 'field_vernissage_date',
      1 => 'field_mta_date',
      2 => 'field_mta_link',
      3 => 'field_date_range',
      4 => 'field_artist_talk_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-date-time field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_date_time|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_deposit|node|rental|form';
  $field_group->group_name = 'group_deposit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Deposit',
    'weight' => '9',
    'children' => array(
      0 => 'field_deposit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Deposit',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-deposit field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_deposit|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment_rentals|node|rental|form';
  $field_group->group_name = 'group_equipment_rentals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipment',
    'weight' => '5',
    'children' => array(
      0 => 'field_equipment_rentals_please_c',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Equipment',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-equipment-rentals field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_equipment_rentals|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment|node|event|event_report_production';
  $field_group->group_name = 'group_equipment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipment',
    'weight' => '1',
    'children' => array(
      0 => 'field_equipment_additional_notes',
      1 => 'field_equipment_rentals_please_c',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-equipment field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_equipment|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment|node|event|form';
  $field_group->group_name = 'group_equipment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Equipment Rentals',
    'weight' => '68',
    'children' => array(
      0 => 'field_equipment_additional_notes',
      1 => 'field_equipment_rentals_please_c',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Equipment Rentals',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-equipment-rentals field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_equipment|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|event_report_guest_services';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_guest_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_event_code',
      2 => 'field_promo_code',
      3 => 'field_event_genre',
      4 => 'field_event_venue',
      5 => 'field_dates',
      6 => 'field_organization',
      7 => 'field_length_of_performance_even',
      8 => 'field_length_of_intermission',
      9 => 'field_season_code',
      10 => 'field_number_of_intermission',
      11 => 'field_expected_attendance',
      12 => 'field_will_you_be_having_recepti',
      13 => 'field_will_you_be_selling_mercha',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_details|node|event|event_report_guest_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|event_report_patron_services';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_patron_services';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_event_type',
      2 => 'field_event_code',
      3 => 'field_age_group',
      4 => 'field_event_genre',
      5 => 'field_event_venue',
      6 => 'field_dates',
      7 => 'field_organization',
      8 => 'field_length_of_performance_even',
      9 => 'field_length_of_intermission',
      10 => 'field_season_code',
      11 => 'field_number_of_intermission',
      12 => 'field_number_of_performers',
      13 => 'field_expected_attendance',
      14 => 'field_number_of_production_crew',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_details|node|event|event_report_patron_services'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|event|event_report_production';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '0',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_event_type',
      2 => 'field_event_code',
      3 => 'field_age_group',
      4 => 'field_event_genre',
      5 => 'field_event_venue',
      6 => 'field_dates',
      7 => 'field_other_age_group',
      8 => 'field_length_of_performance_even',
      9 => 'field_length_of_intermission',
      10 => 'field_number_of_intermission',
      11 => 'field_number_of_performers',
      12 => 'field_expected_attendance',
      13 => 'field_number_of_production_crew',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_details|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|rental_inquiry|default';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental_inquiry';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_expected_attendance',
      1 => 'field_event_type',
      2 => 'field_space_requested',
      3 => 'field_rent_inq_dates',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_details|node|rental_inquiry|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_details|node|rental_inquiry|form';
  $field_group->group_name = 'group_event_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental_inquiry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_expected_attendance',
      1 => 'field_event_type',
      2 => 'field_space_requested',
      3 => 'field_rent_inq_dates',
      4 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-details field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_details|node|rental_inquiry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_information|node|rental|form';
  $field_group->group_name = 'group_event_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_name_of_room_s_requesting_',
      1 => 'field_number_of_intermission',
      2 => 'field_number_of_performers',
      3 => 'field_number_of_production_crew',
      4 => 'field_recordings',
      5 => 'field_rent_app_dates',
      6 => 'field_number_of_performances',
      7 => 'field_performance_length',
      8 => 'field_performance_type',
      9 => 'field_video_recording',
      10 => 'field_dates_requested',
      11 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-event-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_information|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|form';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_event_image',
      2 => 'field_event_type',
      3 => 'field_presenter_type',
      4 => 'field_featured_event',
      5 => 'field_age_group',
      6 => 'field_event_genre',
      7 => 'field_event_venue',
      8 => 'field_photos',
      9 => 'field_dates',
      10 => 'field_advisory_alert',
      11 => 'field_organization',
      12 => 'field_event_language',
      13 => 'title',
      14 => 'group_event_tabs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_info|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_settings|node|event|form';
  $field_group->group_name = 'group_event_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Event Details',
    'weight' => '7',
    'children' => array(
      0 => 'field_children_under_6_years_of_',
      1 => 'field_event_code',
      2 => 'field_length_of_performance_even',
      3 => 'field_length_of_intermission',
      4 => 'field_season_code',
      5 => 'field_number_of_intermission',
      6 => 'field_number_of_performers',
      7 => 'field_expected_attendance',
      8 => 'field_number_of_production_crew',
      9 => 'field_where_to_buy_tickets',
      10 => 'field_event_description',
      11 => 'field_eventseason',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Event Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_settings|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_1|node|event|default';
  $field_group->group_name = 'group_event_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => '',
    'weight' => '70',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-event-tab-1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_tab_1|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_1|node|event|form';
  $field_group->group_name = 'group_event_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 1',
    'weight' => '10',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_tab_1|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_2|node|event|default';
  $field_group->group_name = 'group_event_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 2',
    'weight' => '71',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-2 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tab_2|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_2|node|event|form';
  $field_group->group_name = 'group_event_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 2',
    'weight' => '11',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_tab_2|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_3|node|event|default';
  $field_group->group_name = 'group_event_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 3',
    'weight' => '72',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-3 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tab_3|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_3|node|event|form';
  $field_group->group_name = 'group_event_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 3',
    'weight' => '12',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_tab_3|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_4|node|event|default';
  $field_group->group_name = 'group_event_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 4',
    'weight' => '73',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-4 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tab_4|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tab_4|node|event|form';
  $field_group->group_name = 'group_event_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_tabs';
  $field_group->data = array(
    'label' => 'Event Tab 4',
    'weight' => '13',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-tab-4 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_tab_4|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tabs|node|event|default';
  $field_group->group_name = 'group_event_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_event_tab_1',
      1 => 'group_event_tab_2',
      2 => 'group_event_tab_3',
      3 => 'group_event_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tabs|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_tabs|node|event|form';
  $field_group->group_name = 'group_event_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_info';
  $field_group->data = array(
    'label' => 'Event Tabs',
    'weight' => '79',
    'children' => array(
      0 => 'group_event_tab_1',
      1 => 'group_event_tab_2',
      2 => 'group_event_tab_3',
      3 => 'group_event_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_tabs|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event|node|event|form';
  $field_group->group_name = 'group_event';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event',
    'weight' => '2',
    'children' => array(
      0 => 'group_tickets',
      1 => 'group_event_info',
      2 => 'group_event_settings',
      3 => 'group_additional_information',
      4 => 'group_contact_info',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-event field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_details|node|exhibition|default';
  $field_group->group_name = 'group_exhibition_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibition Details',
    'weight' => '4',
    'children' => array(
      0 => 'group_info',
      1 => 'group_date_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_details|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_details|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition';
  $field_group->data = array(
    'label' => 'Exhibition Details',
    'weight' => '13',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_advisory_alert',
      2 => 'field_organization',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition_details|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_info|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition';
  $field_group->data = array(
    'label' => 'Exhibition Info',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_image',
      1 => 'field_notes',
      2 => 'field_vernissage_date',
      3 => 'field_mta_date',
      4 => 'field_mta_link',
      5 => 'field_photos',
      6 => 'field_featured_event',
      7 => 'field_date_range',
      8 => 'field_display_title',
      9 => 'field_exhibition_venue',
      10 => 'field_artist_talk_date',
      11 => 'title',
      12 => 'group_exhibition_tabs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition_info|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_1|node|exhibition|default';
  $field_group->group_name = 'group_exhibition_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 1',
    'weight' => '27',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-1 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_tab_1|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_1|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_tab_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 1',
    'weight' => '32',
    'children' => array(
      0 => 'body',
      1 => 'field_tab_1_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-1 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition_tab_1|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_2|node|exhibition|default';
  $field_group->group_name = 'group_exhibition_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 2',
    'weight' => '28',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-2 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_tab_2|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_2|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_tab_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 2',
    'weight' => '33',
    'children' => array(
      0 => 'field_tab_2_title',
      1 => 'field_tab_2_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-2 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition_tab_2|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_3|node|exhibition|default';
  $field_group->group_name = 'group_exhibition_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 3',
    'weight' => '29',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-3 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_tab_3|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_3|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_tab_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 3',
    'weight' => '35',
    'children' => array(
      0 => 'field_tab_3_title',
      1 => 'field_tab_3_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-3 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition_tab_3|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_4|node|exhibition|default';
  $field_group->group_name = 'group_exhibition_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 4',
    'weight' => '30',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-4 field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_tab_4|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tab_4|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_tab_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition_tabs';
  $field_group->data = array(
    'label' => 'Exhibition Tab 4',
    'weight' => '36',
    'children' => array(
      0 => 'field_tab_4_title',
      1 => 'field_tab_4_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exhibition-tab-4 field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_exhibition_tab_4|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tabs|node|exhibition|default';
  $field_group->group_name = 'group_exhibition_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibition Tabs',
    'weight' => '1',
    'children' => array(
      0 => 'group_exhibition_tab_1',
      1 => 'group_exhibition_tab_2',
      2 => 'group_exhibition_tab_3',
      3 => 'group_exhibition_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-exhibition-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_tabs|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition_tabs|node|exhibition|form';
  $field_group->group_name = 'group_exhibition_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_exhibition_info';
  $field_group->data = array(
    'label' => 'Exhibition Tabs',
    'weight' => '11',
    'children' => array(
      0 => 'group_exhibition_tab_1',
      1 => 'group_exhibition_tab_2',
      2 => 'group_exhibition_tab_3',
      3 => 'group_exhibition_tab_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-exhibition-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition_tabs|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exhibition|node|exhibition|form';
  $field_group->group_name = 'group_exhibition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exhibition',
    'weight' => '2',
    'children' => array(
      0 => 'group_exhibition_info',
      1 => 'group_exhibition_details',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-exhibition field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_exhibition|node|exhibition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_of_house|node|rental|form';
  $field_group->group_name = 'group_front_of_house';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Front of House',
    'weight' => '4',
    'children' => array(
      0 => 'group_merchandise',
      1 => 'group_reception',
      2 => 'group_catering_kitchen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Front of House',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-front-of-house field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_front_of_house|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|camp|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_details';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '26',
    'children' => array(
      0 => 'field_event_venue',
      1 => 'field_class_genre',
      2 => 'field_camp_season',
      3 => 'field_advisory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|class|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_details';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '18',
    'children' => array(
      0 => 'field_class_genre',
      1 => 'field_class_season',
      2 => 'field_advisory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|event|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_details';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '37',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_event_type',
      2 => 'field_age_group',
      3 => 'field_event_genre',
      4 => 'field_event_venue',
      5 => 'field_event_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|exhibition|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'exhibition';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_exhibition_details';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '16',
    'children' => array(
      0 => 'field_advisory',
      1 => 'field_exhibition_venue',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info|node|exhibition|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insurance|node|event|event_report_production';
  $field_group->group_name = 'group_insurance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Insurance',
    'weight' => '3',
    'children' => array(
      0 => 'field_coverage',
      1 => 'field_policy',
      2 => 'field_sop_permit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-insurance field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_insurance|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insurance|node|event|form';
  $field_group->group_name = 'group_insurance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Insurance',
    'weight' => '69',
    'children' => array(
      0 => 'field_coverage',
      1 => 'field_policy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-insurance field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_insurance|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_insurance|node|rental|form';
  $field_group->group_name = 'group_insurance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liability Insurance',
    'weight' => '6',
    'children' => array(
      0 => 'field_coverage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Liability Insurance',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-insurance field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_insurance|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_contact|node|rental|form';
  $field_group->group_name = 'group_main_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'label' => 'Main Contact',
    'weight' => '56',
    'children' => array(
      0 => 'field_main_contact_name',
      1 => 'field_main_contact_phone',
      2 => 'field_main_contact_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-main-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_main_contact|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marketing|node|rental|form';
  $field_group->group_name = 'group_marketing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'label' => 'Marketing',
    'weight' => '60',
    'children' => array(
      0 => 'field_marketing_name',
      1 => 'field_marketing_phone',
      2 => 'field_marketing_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Marketing',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-marketing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_marketing|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merchandise|node|rental|form';
  $field_group->group_name = 'group_merchandise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_front_of_house';
  $field_group->data = array(
    'label' => 'Merchandise',
    'weight' => '83',
    'children' => array(
      0 => 'field_will_you_be_selling_mercha',
      1 => 'field_merchandise_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Merchandise',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-merchandise field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_merchandise|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_info|node|news|default';
  $field_group->group_name = 'group_news_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
      2 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-news-info field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_news_info|node|news|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|rental|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '62',
    'children' => array(
      0 => 'field_other_name',
      1 => 'field_other_phone',
      2 => 'field_other_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_privacy_policy|node|rental_inquiry|form';
  $field_group->group_name = 'group_privacy_policy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental_inquiry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Privacy Policy',
    'weight' => '4',
    'children' => array(
      0 => 'field_privacy_policy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-privacy-policy field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_privacy_policy|node|rental_inquiry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_privacy|node|rental|form';
  $field_group->group_name = 'group_privacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Privacy',
    'weight' => '10',
    'children' => array(
      0 => 'field_rental_app_privacy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Privacy',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-privacy field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_privacy|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_production|node|rental|form';
  $field_group->group_name = 'group_production';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'label' => 'Production',
    'weight' => '58',
    'children' => array(
      0 => 'field_production_name',
      1 => 'field_production_phone',
      2 => 'field_production_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Production',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-production field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_production|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reception|node|rental|form';
  $field_group->group_name = 'group_reception';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_front_of_house';
  $field_group->data = array(
    'label' => 'Reception',
    'weight' => '84',
    'children' => array(
      0 => 'field_expected_attendance',
      1 => 'field_will_you_be_having_recepti',
      2 => 'field_reception_start_time',
      3 => 'field_end_time',
      4 => 'field_reception_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reception',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-reception field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_reception|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recordings|node|event|form';
  $field_group->group_name = 'group_recordings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'Recordings',
    'weight' => '70',
    'children' => array(
      0 => 'field_recordings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recordings field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recordings|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|node|camp|default';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'camp';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_camp_details';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '28',
    'children' => array(
      0 => 'field_tickets_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registration field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_registration|node|camp|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|node|class|default';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'class';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_class_details';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '20',
    'children' => array(
      0 => 'field_tickets_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registration field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_registration|node|class|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rental_information|node|rental|form';
  $field_group->group_name = 'group_rental_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Licensee Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_legal_name_of_applicant_or',
      1 => 'field_non_profit_registration_nu',
      2 => 'field_h_s_t_number',
      3 => 'field_mailing_address',
      4 => 'field_non_profit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Licensee Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rental-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rental_information|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_show_details|node|event|default';
  $field_group->group_name = 'group_show_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Show Details',
    'weight' => '5',
    'children' => array(
      0 => 'group_info',
      1 => 'group_date_time',
      2 => 'group_tickets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-show-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_show_details|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_signing_authority|node|rental|form';
  $field_group->group_name = 'group_signing_authority';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contact_info';
  $field_group->data = array(
    'label' => 'Signing Authority',
    'weight' => '57',
    'children' => array(
      0 => 'field_signing_authority_name',
      1 => 'field_signing_authority_phone',
      2 => 'field_signing_authority_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Signing Authority',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-signing-authority field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_signing_authority|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socan_information|node|event|event_report_production';
  $field_group->group_name = 'group_socan_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_report_production';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SOCAN Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_socan_space_rental',
      1 => 'field_socan_room',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-socan-information field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_socan_information|node|event|event_report_production'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socan_information|node|event|form';
  $field_group->group_name = 'group_socan_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_information';
  $field_group->data = array(
    'label' => 'SOCAN Information',
    'weight' => '71',
    'children' => array(
      0 => 'field_socan_space_rental',
      1 => 'field_socan_room',
      2 => 'field_own_licence_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-socan-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_socan_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socan_information|node|rental|form';
  $field_group->group_name = 'group_socan_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SOCAN',
    'weight' => '7',
    'children' => array(
      0 => 'field_socan_space_rental',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'SOCAN',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-socan-information field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_socan_information|node|rental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social_media|node|event|form';
  $field_group->group_name = 'group_social_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '8',
    'children' => array(
      0 => 'field_facebook',
      1 => 'field_twitter',
      2 => 'field_website',
      3 => 'field_youtube',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_social_media|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tickets|node|event|default';
  $field_group->group_name = 'group_tickets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_show_details';
  $field_group->data = array(
    'label' => 'Tickets (All-in Price)',
    'weight' => '39',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_event_code',
      2 => 'field_pricing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tickets field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tickets|node|event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tickets|node|event|form';
  $field_group->group_name = 'group_tickets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event';
  $field_group->data = array(
    'label' => 'Tickets',
    'weight' => '8',
    'children' => array(
      0 => 'field_tickets_link',
      1 => 'field_sold_out_',
      2 => 'field_pricing',
      3 => 'field_promo_use_def_url',
      4 => 'field_promo_alt_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Tickets',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_tickets|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Additional Information');
  t('Applicant Contact Information');
  t('Bar');
  t('Box Office');
  t('Camp');
  t('Camp Details');
  t('Camp Info');
  t('Camp Tab 1');
  t('Camp Tab 2');
  t('Camp Tab 3');
  t('Camp Tab 4');
  t('Camp Tabs');
  t('Catering Kitchen');
  t('Class');
  t('Class Details');
  t('Class Info');
  t('Class Tab 1');
  t('Class Tab 2');
  t('Class Tab 3');
  t('Class Tab 4');
  t('Class Tabs');
  t('Contact');
  t('Contact Info');
  t('Contact Information');
  t('Date & Time');
  t('Deposit');
  t('Equipment');
  t('Equipment Rentals');
  t('Event');
  t('Event Details');
  t('Event Info');
  t('Event Tab 1');
  t('Event Tab 2');
  t('Event Tab 3');
  t('Event Tab 4');
  t('Event Tabs');
  t('Exhibition');
  t('Exhibition Details');
  t('Exhibition Info');
  t('Exhibition Tab 1');
  t('Exhibition Tab 2');
  t('Exhibition Tab 3');
  t('Exhibition Tab 4');
  t('Exhibition Tabs');
  t('Front of House');
  t('Info');
  t('Insurance');
  t('Liability Insurance');
  t('Licensee Information');
  t('Main Contact');
  t('Marketing');
  t('Merchandise');
  t('Other');
  t('Privacy');
  t('Privacy Policy');
  t('Production');
  t('Reception');
  t('Recordings');
  t('Registration');
  t('SOCAN');
  t('SOCAN Information');
  t('Show Details');
  t('Signing Authority');
  t('Social Media');
  t('Tickets');
  t('Tickets (All-in Price)');

  return $field_groups;
}
