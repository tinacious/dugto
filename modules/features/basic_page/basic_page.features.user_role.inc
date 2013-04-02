<?php
/**
 * @file
 * basic_page.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function basic_page_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  return $roles;
}
