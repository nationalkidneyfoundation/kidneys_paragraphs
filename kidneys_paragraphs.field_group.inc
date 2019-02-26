<?php
/**
 * @file
 * kidneys_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function kidneys_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_admin|node|page|form';
  $field_group->group_name = 'group_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Page Settings',
    'weight' => '44',
    'children' => array(
      0 => 'body',
      1 => 'field_ia_category',
      2 => 'field_base_related_office',
      3 => 'field_last_revised',
      4 => 'field_article_author',
      5 => 'field_link_to_parent',
      6 => 'group_page_settings_includes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Page Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-admin field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_admin|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '43',
    'children' => array(
      0 => 'field_paragraph_section',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|big_media|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'big_media';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_image',
      2 => 'field_paragraph_admin_title',
      3 => 'field_base_link',
      4 => 'field_paragraph_video',
      5 => 'field_base_caption',
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
  $field_groups['group_content|paragraphs_item|big_media|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|card|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_base_description',
      1 => 'field_paragraph_admin_title',
      2 => 'field_paragraph_title',
      3 => 'field_paragraph_text_overlay1',
      4 => 'field_paragraph_text_overlay2',
      5 => 'field_base_image',
      6 => 'field_paragraph_video',
      7 => 'field_base_link',
      8 => 'field_color_theme',
      9 => 'field_paragraph_card_orientation',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|filtered_search_form|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'filtered_search_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_description',
      2 => 'field_ia_category',
      3 => 'field_search_placeholder_text',
      4 => 'field_section_background_color',
      5 => 'field_paragraph_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|filtered_search_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|freeform|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'freeform';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_description',
      2 => 'field_paragraph_admin_title',
      3 => 'field_base_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|freeform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|hero|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'hero';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_description',
      2 => 'field_base_cta',
      3 => 'field_section_background_color',
      4 => 'field_hero_background_image',
      5 => 'field_paragraph_admin_title',
      6 => 'field_hero_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|hero|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|layout_50x50|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_50x50';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_paragraph_layout_left',
      1 => 'field_paragraph_layout_right',
      2 => 'field_base_caption',
      3 => 'field_paragraph_admin_title',
      4 => 'field_base_link',
      5 => 'field_paragraph_title',
      6 => 'field_base_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|layout_50x50|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|layout_flex|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_flex';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '10',
    'children' => array(
      0 => 'field_paragraph_section',
      1 => 'field_base_description',
      2 => 'field_paragraph_title',
      3 => 'field_paragraph_admin_title',
      4 => 'field_paragraph_column_widths',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|layout_flex|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|list_accordion|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_accordion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_list_item_complex',
      1 => 'field_paragraph_title',
      2 => 'field_paragraph_admin_title',
      3 => 'field_base_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|list_accordion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|list_content|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_base_related_entity',
      1 => 'field_paragraph_title',
      2 => 'field_list_content_flavor',
      3 => 'field_base_description',
      4 => 'field_paragraph_admin_title',
      5 => 'field_base_link',
      6 => 'field_paragraph_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|list_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|logo_section|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'logo_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_paragraph_admin_title',
      1 => 'field_paragraph_title',
      2 => 'field_logo_item_complex',
      3 => 'field_base_link',
      4 => 'field_base_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|logo_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|promo_banner|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_banner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '9',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_image',
      2 => 'field_base_description',
      3 => 'field_base_cta',
      4 => 'field_section_background_color',
      5 => 'field_paragraph_admin_title',
      6 => 'field_paragraph_video',
      7 => 'field_base_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|promo_banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|promo_inline_banner|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_inline_banner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraph_admin_title',
      1 => 'field_paragraph_title',
      2 => 'field_base_image',
      3 => 'field_paragraph_video',
      4 => 'field_base_description',
      5 => 'field_base_cta',
      6 => 'field_base_link',
      7 => 'field_inner_color',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|promo_inline_banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|special_contact|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'special_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_base_description',
      1 => 'field_paragraph_title',
      2 => 'field_base_phone',
      3 => 'field_base_email',
      4 => 'field_base_image',
      5 => 'field_pardot_form',
      6 => 'field_base_caption',
      7 => 'field_base_tag_line',
      8 => 'field_base_nkf_role',
      9 => 'field_pardot_fields',
      10 => 'field_submit_button_text',
      11 => 'field_paragraph_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|special_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|text_basic|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '9',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_description',
      2 => 'field_base_image',
      3 => 'field_base_pull_quote',
      4 => 'field_base_offset_orientation',
      5 => 'field_base_caption',
      6 => 'field_paragraph_admin_title',
      7 => 'field_base_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|text_basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|text_summary|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_summary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_paragraph_title',
      1 => 'field_base_description',
      2 => 'field_paragraph_admin_title',
      3 => 'field_base_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|text_summary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|text_testimonial|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_base_description',
      1 => 'field_base_caption',
      2 => 'field_base_city',
      3 => 'field_base_image',
      4 => 'field_paragraph_title',
      5 => 'field_paragraph_admin_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|text_testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|node|page|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_admin',
      1 => 'group_content',
      2 => 'group_social',
      3 => 'group_search',
      4 => 'group_related',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|basic_contact|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'basic_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'field_base_tag_line',
      1 => 'field_base_description',
      2 => 'field_base_caption',
      3 => 'field_base_email',
      4 => 'field_base_phone',
      5 => 'field_inner_color',
      6 => 'field_base_nkf_role',
      7 => 'field_pardot_fields',
      8 => 'field_submit_button_text',
      9 => 'group_paragraph_settings',
      10 => 'group_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|basic_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|big_media|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'big_media';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_settings',
      1 => 'group_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|big_media|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|card|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '5',
    'children' => array(
      0 => 'group_content',
      1 => 'group_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|filtered_search_form|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'filtered_search_form';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|filtered_search_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|freeform|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'freeform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_paragraph_settings',
      1 => 'group_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|freeform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|hero|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'hero';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|hero|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|layout_50x50|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_50x50';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|layout_50x50|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|layout_flex|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_flex';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|layout_flex|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|list_accordion|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_accordion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|list_accordion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|list_content|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|list_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|logo_section|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'logo_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|logo_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|promo_banner|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_banner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|promo_banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|promo_inline_banner|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_inline_banner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|promo_inline_banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|special_contact|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'special_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|special_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|text_basic|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_basic';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|text_basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|text_summary|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_summary';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|text_summary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_group|paragraphs_item|text_testimonial|form';
  $field_group->group_name = 'group_group';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '0',
    'children' => array(
      0 => 'group_content',
      1 => 'group_paragraph_settings',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-group field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_group|paragraphs_item|text_testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_settings_includes|node|page|form';
  $field_group->group_name = 'group_page_settings_includes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_admin';
  $field_group->data = array(
    'label' => 'Items to include on page',
    'weight' => '52',
    'children' => array(
      0 => 'field_base_toc',
      1 => 'field_base_medical_disclaimer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Items to include on page',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-page-settings-includes field-group-fieldset bold',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_page_settings_includes|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|basic_contact|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'basic_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '24',
    'children' => array(
      0 => 'field_paragraph_publish',
      1 => 'field_paragraph_unpublish',
      2 => 'field_base_css',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|basic_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|big_media|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'big_media';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_bg_color',
      2 => 'field_search_exclude',
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
  $field_groups['group_paragraph_settings|paragraphs_item|big_media|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|freeform|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'freeform';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_bg_color',
      2 => 'field_paragraph_unpublish',
      3 => 'field_paragraph_publish',
      4 => 'field_search_exclude',
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
  $field_groups['group_paragraph_settings|paragraphs_item|freeform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|hero|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'hero';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_unpublish',
      2 => 'field_paragraph_publish',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|hero|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|layout_50x50|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_50x50';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_section_background_color',
      1 => 'field_base_css',
      2 => 'field_paragraph_unpublish',
      3 => 'field_paragraph_publish',
      4 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|layout_50x50|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|list_accordion|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_accordion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_unpublish',
      2 => 'field_paragraph_publish',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|list_accordion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|list_content|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'list_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_unpublish',
      2 => 'field_paragraph_publish',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|list_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|promo_banner|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_banner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '10',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_unpublish',
      2 => 'field_paragraph_publish',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|promo_banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|text_basic|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_basic';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '10',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_unpublish',
      2 => 'field_paragraph_publish',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|text_basic|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|text_summary|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_summary';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '6',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_unpublish',
      2 => 'field_paragraph_publish',
      3 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|text_summary|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_paragraph_settings|paragraphs_item|text_testimonial|form';
  $field_group->group_name = 'group_paragraph_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text_testimonial';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-paragraph-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_paragraph_settings|paragraphs_item|text_testimonial|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|page|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '45',
    'children' => array(
      0 => 'field_base_related_entity',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_search|node|page|form';
  $field_group->group_name = 'group_search';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Search Options',
    'weight' => '47',
    'children' => array(
      0 => 'field_search_boost_term',
      1 => 'field_search_boost_index',
      2 => 'field_search_exclude',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-search field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_search|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|paragraphs_item|card|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'card';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '6',
    'children' => array(
      0 => 'field_paragraph_publish',
      1 => 'field_paragraph_unpublish',
      2 => 'field_search_exclude',
      3 => 'field_base_css',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|paragraphs_item|card|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|paragraphs_item|filtered_search_form|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'filtered_search_form';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_base_css',
      1 => 'field_paragraph_publish',
      2 => 'field_paragraph_unpublish',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|paragraphs_item|filtered_search_form|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|paragraphs_item|layout_flex|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'layout_flex';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '11',
    'children' => array(
      0 => 'field_paragraph_publish',
      1 => 'field_paragraph_unpublish',
      2 => 'field_search_exclude',
      3 => 'field_base_css',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|paragraphs_item|layout_flex|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|paragraphs_item|logo_section|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'logo_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_paragraph_publish',
      1 => 'field_paragraph_unpublish',
      2 => 'field_search_exclude',
      3 => 'field_base_css',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|paragraphs_item|logo_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|paragraphs_item|promo_inline_banner|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'promo_inline_banner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '3',
    'children' => array(
      0 => 'field_paragraph_publish',
      1 => 'field_paragraph_unpublish',
      2 => 'field_search_exclude',
      3 => 'field_base_css',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|paragraphs_item|promo_inline_banner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|paragraphs_item|special_contact|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'special_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_section_background_color',
      1 => 'field_base_css',
      2 => 'field_paragraph_publish',
      3 => 'field_paragraph_unpublish',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_settings|paragraphs_item|special_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|page|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_group';
  $field_group->data = array(
    'label' => 'Social Sharing',
    'weight' => '48',
    'children' => array(
      0 => 'field_action_email',
      1 => 'field_action_facebook',
      2 => 'field_action_print',
      3 => 'field_action_tweet',
      4 => 'field_tweet_text',
      5 => 'field_tweet_via',
      6 => 'field_tweet_hashtag',
      7 => 'field_action_pinterest',
      8 => 'field_action_linkedin',
      9 => 'field_pinterest_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-social field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_social|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Group');
  t('Items to include on page');
  t('Page Settings');
  t('Related Content');
  t('Search Options');
  t('Settings');
  t('Social Sharing');

  return $field_groups;
}
