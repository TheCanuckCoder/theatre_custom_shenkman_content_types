<?php
/**
 * @file
 * content_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function content_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_agreement_pdf'.
  $permissions['create field_agreement_pdf'] = array(
    'name' => 'create field_agreement_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_notes'.
  $permissions['create field_notes'] = array(
    'name' => 'create field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_agreement_pdf'.
  $permissions['edit field_agreement_pdf'] = array(
    'name' => 'edit field_agreement_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_notes'.
  $permissions['edit field_notes'] = array(
    'name' => 'edit field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_agreement_pdf'.
  $permissions['edit own field_agreement_pdf'] = array(
    'name' => 'edit own field_agreement_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_notes'.
  $permissions['edit own field_notes'] = array(
    'name' => 'edit own field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_agreement_pdf'.
  $permissions['view field_agreement_pdf'] = array(
    'name' => 'view field_agreement_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_notes'.
  $permissions['view field_notes'] = array(
    'name' => 'view field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_agreement_pdf'.
  $permissions['view own field_agreement_pdf'] = array(
    'name' => 'view own field_agreement_pdf',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_notes'.
  $permissions['view own field_notes'] = array(
    'name' => 'view own field_notes',
    'roles' => array(
      'administrator' => 'administrator',
      'rental staff' => 'rental staff',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
