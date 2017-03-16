<?php
/**
 * @file
 * fh_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fh_config_user_default_roles() {
  $roles = array();

  // Exported role: board member.
  $roles['board member'] = array(
    'name' => 'board member',
    'weight' => 5,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 4,
  );

  return $roles;
}
