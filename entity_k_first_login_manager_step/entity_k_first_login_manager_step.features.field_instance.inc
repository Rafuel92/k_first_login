<?php
/**
 * @file
 * entity_k_first_login_manager_step.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function entity_k_first_login_manager_step_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'k_first_login_manager-step-field_form_id'.
  $field_instances['k_first_login_manager-step-field_form_id'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'k_first_login_manager',
    'field_name' => 'field_form_id',
    'label' => 'Identificativo Form con campi',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'k_first_login_manager-step-field_ordine_priorita'.
  $field_instances['k_first_login_manager-step-field_ordine_priorita'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'k_first_login_manager',
    'field_name' => 'field_ordine_priorita',
    'label' => 'Ordine di priorità',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'k_first_login_manager-step-field_static_html_markup'.
  $field_instances['k_first_login_manager-step-field_static_html_markup'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'k_first_login_manager',
    'field_name' => 'field_static_html_markup',
    'label' => 'Static html markup',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'k_first_login_manager-step-field_substeps'.
  $field_instances['k_first_login_manager-step-field_substeps'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'k_first_login_manager',
    'field_name' => 'field_substeps',
    'label' => 'Substeps',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'k_first_login_manager-step-field_user_role'.
  $field_instances['k_first_login_manager-step-field_user_role'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'rolereference',
        'settings' => array(),
        'type' => 'rolereference_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'k_first_login_manager',
    'field_name' => 'field_user_role',
    'label' => 'User Role',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'k_first_login_manager-step-field_view_data'.
  $field_instances['k_first_login_manager-step-field_view_data'] = array(
    'bundle' => 'step',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'k_first_login_manager',
    'field_name' => 'field_view_data',
    'label' => 'View data',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Identificativo Form con campi');
  t('Ordine di priorità');
  t('Static html markup');
  t('Substeps');
  t('User Role');
  t('View data');

  return $field_instances;
}
