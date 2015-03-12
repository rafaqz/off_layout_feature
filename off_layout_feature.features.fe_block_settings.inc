<?php
/**
 * @file
 * off_layout_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function off_layout_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['book_explorer-book_explorer'] = array(
    'cache' => 5,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'book_explorer',
    'module' => 'book_explorer',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['groups_feature-group_toolbar'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'group_toolbar',
    'module' => 'groups_feature',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['groups_feature-user_groups_list'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_groups_list',
    'module' => 'groups_feature',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['header_feature-group_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'group_footer',
    'module' => 'header_feature',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'banner-lower',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['header_feature-group_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'group_header',
    'module' => 'header_feature',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['header_feature-user_footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_footer',
    'module' => 'header_feature',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'banner-lower',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['header_feature-user_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_header',
    'module' => 'header_feature',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'css_class' => 'masquerade',
    'custom' => 0,
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['message_feature-followers'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'followers',
    'module' => 'message_feature',
    'node_types' => array(
      0 => 'basic_page',
      1 => 'book',
      2 => 'conversation',
      3 => 'front_icons',
      4 => 'knowledge_object',
      5 => 'news',
    ),
    'pages' => 'node/*
node/add/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-301386dba33cbdacd710e75c8357d743'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '301386dba33cbdacd710e75c8357d743',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-all_users-block'] = array(
    'cache' => -1,
    'css_class' => 'iin-feature',
    'custom' => 0,
    'delta' => 'all_users-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'community',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-document_list-group_block'] = array(
    'cache' => -1,
    'css_class' => 'sidetheme',
    'custom' => 0,
    'delta' => 'document_list-group_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-featured_users-team_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'featured_users-team_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-follow_group-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_group-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-follow_node-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_node-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'split_first',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-follow_taxonomy_term-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_taxonomy_term-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-follow_user-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'follow_user-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'user
user/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'split_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front_icons-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_icons-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'banner-middle',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => -36,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-group_users-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'group_users-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/*/edit
user/*/edit',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => -30,
      ),
    ),
    'title' => 'Members',
    'visibility' => 0,
  );

  $export['views-news-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'split_first',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news_list-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_list-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'news',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_activity-block'] = array(
    'cache' => -1,
    'css_class' => 'hidden-phone',
    'custom' => 0,
    'delta' => 'recent_activity-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'innovation-capabilities
user/registration
user/password
user',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_activity-group_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_activity-group_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => -28,
      ),
    ),
    'title' => 'Activity',
    'visibility' => 0,
  );

  $export['views-recent_files-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_files-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_files-group_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_files-group_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-subgroups-group_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'subgroups-group_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tag_filter-group_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tag_filter-group_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tag_filter-user_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tag_filter-user_block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_zurb' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_zurb',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
