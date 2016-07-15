<?php

/**
 * @file
 * K First Login Manager type editing UI.
 */

/**
 * UI controller.
 */
class KFirstLoginManagerTypeUIController extends EntityDefaultUIController {
  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage K First Login Manager entity types, including adding and removing fields and the display of fields.';

    return $items;
  }
}

/**
 * Generates the K First Login Manager type editing form.
 */
function k_first_login_manager_type_form($form, &$form_state, $k_first_login_manager_type, $op = 'edit') {
  if ($op == 'clone') {
    $k_first_login_manager_type->label .= ' (cloned)';
    $k_first_login_manager_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $k_first_login_manager_type->label,
    '#description' => t('The human-readable name of this K First Login Manager type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($k_first_login_manager_type->type) ? $k_first_login_manager_type->type : '',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'k_first_login_manager_get_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this K First Login Manager type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save K First Login Manager type'),
    '#weight' => 40,
  );

  return $form;
}

/**
 * Form API submit callback for the type form.
 */
function k_first_login_manager_type_form_submit(&$form, &$form_state) {
  $k_first_login_manager_type = entity_ui_form_submit_build_entity($form, $form_state);
  $k_first_login_manager_type->save();
  $form_state['redirect'] = 'admin/structure/k_first_login_manager_types';
}

/**
 * Form API submit callback for the delete button.
 */
function k_first_login_manager_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/k_first_login_manager_types/manage/' . $form_state['k_first_login_manager_type']->type . '/delete';
}
