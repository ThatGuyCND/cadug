<?php
/**
 * @file
 * cadug_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cadug_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: CADUG member.
  $roles['CADUG member'] = array(
    'name' => 'CADUG member',
    'weight' => 3,
    'machine_name' => 'cadug_member',
  );

  return $roles;
}
