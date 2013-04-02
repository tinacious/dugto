<?php
/**
 * @file
 * lean_markup.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lean_markup_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  return $permissions;
}
