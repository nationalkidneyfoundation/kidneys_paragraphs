<?php
/**
 * @file
 * kidneys_paragraphs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kidneys_paragraphs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-follow-us_facebook:https://www.facebook.com/nationalkidneyfoundation/.
  $menu_links['menu-follow-us_facebook:https://www.facebook.com/nationalkidneyfoundation/'] = array(
    'menu_name' => 'menu-follow-us',
    'link_path' => 'https://www.facebook.com/nationalkidneyfoundation/',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-follow-us_facebook:https://www.facebook.com/nationalkidneyfoundation/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-follow-us_instagram:https://www.instagram.com/nationalkidneyfoundation.
  $menu_links['menu-follow-us_instagram:https://www.instagram.com/nationalkidneyfoundation'] = array(
    'menu_name' => 'menu-follow-us',
    'link_path' => 'https://www.instagram.com/nationalkidneyfoundation',
    'router_path' => '',
    'link_title' => 'Instagram',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-follow-us_instagram:https://www.instagram.com/nationalkidneyfoundation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-follow-us_linkedin:https://www.linkedin.com/company/national-kidney-foundation.
  $menu_links['menu-follow-us_linkedin:https://www.linkedin.com/company/national-kidney-foundation'] = array(
    'menu_name' => 'menu-follow-us',
    'link_path' => 'https://www.linkedin.com/company/national-kidney-foundation',
    'router_path' => '',
    'link_title' => 'LinkedIn',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-follow-us_linkedin:https://www.linkedin.com/company/national-kidney-foundation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-follow-us_twitter:https://twitter.com/nkf.
  $menu_links['menu-follow-us_twitter:https://twitter.com/nkf'] = array(
    'menu_name' => 'menu-follow-us',
    'link_path' => 'https://twitter.com/nkf',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-follow-us_twitter:https://twitter.com/nkf',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ia_get-involved:node/28480.
  $menu_links['menu-ia_get-involved:node/28480'] = array(
    'menu_name' => 'menu-ia',
    'link_path' => 'node/28480',
    'router_path' => 'node/%',
    'link_title' => 'Get Involved',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ia_get-involved:node/28480',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ia_kidney-basics:node/28457.
  $menu_links['menu-ia_kidney-basics:node/28457'] = array(
    'menu_name' => 'menu-ia',
    'link_path' => 'node/28457',
    'router_path' => 'node/%',
    'link_title' => 'Kidney Basics',
    'options' => array(
      'attributes' => array(
        'title' => 'This is a desctiption',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ia_kidney-basics:node/28457',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ia_kidney-donation:<front>.
  $menu_links['menu-ia_kidney-donation:<front>'] = array(
    'menu_name' => 'menu-ia',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kidney Donation',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ia_kidney-donation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ia_kidney-professionals:node/28472.
  $menu_links['menu-ia_kidney-professionals:node/28472'] = array(
    'menu_name' => 'menu-ia',
    'link_path' => 'node/28472',
    'router_path' => 'node/%',
    'link_title' => 'Kidney Professionals',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ia_kidney-professionals:node/28472',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ia_research:node/28477.
  $menu_links['menu-ia_research:node/28477'] = array(
    'menu_name' => 'menu-ia',
    'link_path' => 'node/28477',
    'router_path' => 'node/%',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ia_research:node/28477',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-ia_treatment--support:node/28466.
  $menu_links['menu-ia_treatment--support:node/28466'] = array(
    'menu_name' => 'menu-ia',
    'link_path' => 'node/28466',
    'router_path' => 'node/%',
    'link_title' => 'Treatment & Support',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-ia_treatment--support:node/28466',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-legal_charity-registration-disclosures:https://kidney.org/sites/default/files/required-fundraising-disclosure-statements.pdf/.
  $menu_links['menu-legal_charity-registration-disclosures:https://kidney.org/sites/default/files/required-fundraising-disclosure-statements.pdf/'] = array(
    'menu_name' => 'menu-legal',
    'link_path' => 'https://kidney.org/sites/default/files/required-fundraising-disclosure-statements.pdf/',
    'router_path' => '',
    'link_title' => 'Charity registration disclosures',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-legal_charity-registration-disclosures:https://kidney.org/sites/default/files/required-fundraising-disclosure-statements.pdf/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-legal_legal--copyright:node/17740.
  $menu_links['menu-legal_legal--copyright:node/17740'] = array(
    'menu_name' => 'menu-legal',
    'link_path' => 'node/17740',
    'router_path' => 'node/%',
    'link_title' => 'Legal & copyright',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-legal_legal--copyright:node/17740',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-legal_privacy-policy:node/17745.
  $menu_links['menu-legal_privacy-policy:node/17745'] = array(
    'menu_name' => 'menu-legal',
    'link_path' => 'node/17745',
    'router_path' => 'node/%',
    'link_title' => 'Privacy policy',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-legal_privacy-policy:node/17745',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_about-us:node/14471.
  $menu_links['menu-nkf_about-us:node/14471'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'node/14471',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_about-us:node/14471',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_careers:node/25712.
  $menu_links['menu-nkf_careers:node/25712'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'node/25712',
    'router_path' => 'node/%',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_careers:node/25712',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_contact-us:node/14475.
  $menu_links['menu-nkf_contact-us:node/14475'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'node/14475',
    'router_path' => 'node/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_contact-us:node/14475',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_en-espaol:node/17787.
  $menu_links['menu-nkf_en-espaol:node/17787'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'node/17787',
    'router_path' => 'node/%',
    'link_title' => 'En Español',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_en-espaol:node/17787',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_join-nkf:professionals/membership.
  $menu_links['menu-nkf_join-nkf:professionals/membership'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'professionals/membership',
    'router_path' => 'professionals/membership',
    'link_title' => 'Join NKF',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_join-nkf:professionals/membership',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_latest-news:latest-news.
  $menu_links['menu-nkf_latest-news:latest-news'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'latest-news',
    'router_path' => 'latest-news',
    'link_title' => 'Latest news',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_latest-news:latest-news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_newsroom:node/18216.
  $menu_links['menu-nkf_newsroom:node/18216'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'node/18216',
    'router_path' => 'node/%',
    'link_title' => 'Newsroom',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_newsroom:node/18216',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-nkf_our-store:http://nkf.worksmartsuite.com/UserContentStart.aspx.
  $menu_links['menu-nkf_our-store:http://nkf.worksmartsuite.com/UserContentStart.aspx'] = array(
    'menu_name' => 'menu-nkf',
    'link_path' => 'http://nkf.worksmartsuite.com/UserContentStart.aspx',
    'router_path' => '',
    'link_title' => 'Our store',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-nkf_our-store:http://nkf.worksmartsuite.com/UserContentStart.aspx',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Careers');
  t('Charity registration disclosures');
  t('Contact us');
  t('En Español');
  t('Facebook');
  t('Get Involved');
  t('Instagram');
  t('Join NKF');
  t('Kidney Basics');
  t('Kidney Donation');
  t('Kidney Professionals');
  t('Latest news');
  t('Legal & copyright');
  t('LinkedIn');
  t('Newsroom');
  t('Our store');
  t('Privacy policy');
  t('Research');
  t('Treatment & Support');
  t('Twitter');

  return $menu_links;
}
