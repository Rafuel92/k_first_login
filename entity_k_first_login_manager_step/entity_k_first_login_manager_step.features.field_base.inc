<?php
/**
 * @file
 * entity_k_first_login_manager_step.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function entity_k_first_login_manager_step_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_form_id'.
  $field_bases['field_form_id'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form_id',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_ordine_priorita'.
  $field_bases['field_ordine_priorita'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ordine_priorita',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_static_html_markup'.
  $field_bases['field_static_html_markup'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_static_html_markup',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_substeps'.
  $field_bases['field_substeps'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_substeps',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'step' => 'step',
        ),
      ),
      'target_type' => 'k_first_login_manager',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_user_role'.
  $field_bases['field_user_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_role',
    'indexes' => array(
      'rid' => array(
        0 => 'rid',
      ),
    ),
    'locked' => 0,
    'module' => 'rolereference',
    'settings' => array(
      'referenceable_roles' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
    'translatable' => 0,
    'type' => 'rolereference',
  );

  // Exported field_base: 'field_view_data'.
  $field_bases['field_view_data'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_view_data',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
