<?php
/**
 * Implementation of hook_views_data().
 */
function group_space_url_views_data() {
  $data = array();

  // Group space link
  $data['node']['group_space_url_group_url'] = array(
    'real field' => 'title',
    'title' => t('Group space URL'),
    'help' => t("Provide URL to a group node's space."),
    'field' => array('handler' => 'group_space_url_handler_field_group_url'),
  );

  return $data;
}

/**
 * Implementation of hook_views_handlers().
 */
function group_space_url_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'group_space_url') .'/includes',
    ),
    'handlers' => array(
      'group_space_url_handler_field_group_url' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}