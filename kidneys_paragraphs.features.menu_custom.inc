<?php
/**
 * @file
 * kidneys_paragraphs.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kidneys_paragraphs_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-follow-us.
  $menus['menu-follow-us'] = array(
    'menu_name' => 'menu-follow-us',
    'title' => 'Follow Us',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-ia.
  $menus['menu-ia'] = array(
    'menu_name' => 'menu-ia',
    'title' => 'IA',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-legal.
  $menus['menu-legal'] = array(
    'menu_name' => 'menu-legal',
    'title' => 'Legal',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-nkf.
  $menus['menu-nkf'] = array(
    'menu_name' => 'menu-nkf',
    'title' => 'NKF',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Follow Us');
  t('IA');
  t('Legal');
  t('NKF');

  return $menus;
}
