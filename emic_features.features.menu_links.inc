<?php
/**
 * @file
 * emic_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function emic_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_documentation:uuid/node/5c311880-223e-49e0-8279-fce5f1f85971
  $menu_links['main-menu_documentation:uuid/node/5c311880-223e-49e0-8279-fce5f1f85971'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/5c311880-223e-49e0-8279-fce5f1f85971',
    'router_path' => 'uuid',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'documentation',
        ),
      ),
      'identifier' => 'main-menu_documentation:uuid/node/5c311880-223e-49e0-8279-fce5f1f85971',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lab:uuid/node/e4693f7f-f13f-4ed5-933c-b02f8c8cb732
  $menu_links['main-menu_lab:uuid/node/e4693f7f-f13f-4ed5-933c-b02f8c8cb732'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/e4693f7f-f13f-4ed5-933c-b02f8c8cb732',
    'router_path' => 'uuid',
    'link_title' => 'Lab',
    'options' => array(
      'attributes' => array(
        'title' => 'Lab',
        'class' => array(
          0 => 'lab',
        ),
      ),
      'identifier' => 'main-menu_lab:uuid/node/e4693f7f-f13f-4ed5-933c-b02f8c8cb732',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_login:user/login
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_members:uuid/node/21439854-781f-4925-9af5-bd2c49e6cd08
  $menu_links['main-menu_members:uuid/node/21439854-781f-4925-9af5-bd2c49e6cd08'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/21439854-781f-4925-9af5-bd2c49e6cd08',
    'router_path' => 'uuid',
    'link_title' => 'Members',
    'options' => array(
      'attributes' => array(
        'title' => 'Members',
        'class' => array(
          0 => 'members',
        ),
      ),
      'identifier' => 'main-menu_members:uuid/node/21439854-781f-4925-9af5-bd2c49e6cd08',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_my-workbench:workbench
  $menu_links['main-menu_my-workbench:workbench'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'workbench',
    'router_path' => 'workbench',
    'link_title' => 'My Workbench',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'my-workbench',
        ),
      ),
      'identifier' => 'main-menu_my-workbench:workbench',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documentation');
  t('Home');
  t('Lab');
  t('Login');
  t('Members');
  t('My Workbench');


  return $menu_links;
}
