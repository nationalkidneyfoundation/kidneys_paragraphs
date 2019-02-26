<?php
/**
 * @file
 * kidneys_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kidneys_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kidneys_paragraphs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kidneys_paragraphs_node_info() {
  $items = array(
    'design_system_component' => array(
      'name' => t('Design System Component'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function kidneys_paragraphs_paragraphs_info() {
  $items = array(
    'basic_contact' => array(
      'name' => 'Basic Contact',
      'bundle' => 'basic_contact',
      'locked' => '1',
    ),
    'big_media' => array(
      'name' => 'Big Media',
      'bundle' => 'big_media',
      'locked' => '1',
    ),
    'card' => array(
      'name' => 'Card',
      'bundle' => 'card',
      'locked' => '1',
    ),
    'email_capture' => array(
      'name' => 'Email Capture',
      'bundle' => 'email_capture',
      'locked' => '1',
    ),
    'filtered_search_form' => array(
      'name' => 'Filtered search form',
      'bundle' => 'filtered_search_form',
      'locked' => '1',
    ),
    'freeform' => array(
      'name' => 'Freeform',
      'bundle' => 'freeform',
      'locked' => '1',
    ),
    'hero' => array(
      'name' => 'Hero',
      'bundle' => 'hero',
      'locked' => '1',
    ),
    'layout_50x50' => array(
      'name' => 'Layout: 50x50',
      'bundle' => 'layout_50x50',
      'locked' => '1',
    ),
    'layout_flex' => array(
      'name' => 'Layout: Flex',
      'bundle' => 'layout_flex',
      'locked' => '1',
    ),
    'list_accordion' => array(
      'name' => 'List: Accordion',
      'bundle' => 'list_accordion',
      'locked' => '1',
    ),
    'list_accordion_item' => array(
      'name' => 'List: Accordion Item',
      'bundle' => 'list_accordion_item',
      'locked' => '1',
    ),
    'list_content' => array(
      'name' => 'List: Content',
      'bundle' => 'list_content',
      'locked' => '1',
    ),
    'logo_item' => array(
      'name' => 'Media: Logo item',
      'bundle' => 'logo_item',
      'locked' => '1',
    ),
    'logo_section' => array(
      'name' => 'Media: Logo Section',
      'bundle' => 'logo_section',
      'locked' => '1',
    ),
    'promo_banner' => array(
      'name' => 'Promo: Banner',
      'bundle' => 'promo_banner',
      'locked' => '1',
    ),
    'promo_inline_banner' => array(
      'name' => 'Promo: Inline Banner',
      'bundle' => 'promo_inline_banner',
      'locked' => '1',
    ),
    'section' => array(
      'name' => 'Section',
      'bundle' => 'section',
      'locked' => '1',
    ),
    'special_contact' => array(
      'name' => 'Special Contact',
      'bundle' => 'special_contact',
      'locked' => '1',
    ),
    'tabbed_slider' => array(
      'name' => 'Tabbed slider',
      'bundle' => 'tabbed_slider',
      'locked' => '1',
    ),
    'tabbed_slider_item' => array(
      'name' => 'Tabbed Slider Item',
      'bundle' => 'tabbed_slider_item',
      'locked' => '1',
    ),
    'text_basic' => array(
      'name' => 'Text: Basic',
      'bundle' => 'text_basic',
      'locked' => '1',
    ),
    'text_summary' => array(
      'name' => 'Text: Summary',
      'bundle' => 'text_summary',
      'locked' => '1',
    ),
    'text_testimonial' => array(
      'name' => 'Text: Testimonial',
      'bundle' => 'text_testimonial',
      'locked' => '1',
    ),
  );
  return $items;
}
