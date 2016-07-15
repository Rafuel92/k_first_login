<?php

/**
 * @file
 * k_first_login_manager editing UI.
 */

/**
 * UI controller.
 */
class KFirstLoginManagerUIController extends EntityDefaultUIController {
  /**
   * Overrides hook_menu() defaults.
   *
   * Main reason for doing this is that parent class hook_menu() is, optimized
   * for entity type administration.
   */
  public function hook_menu() {
    // TODO: EntityDefaultUIController controller automatically adds the menu
    // to import entities, but there is a bug with this action and can not work
    // with the version of your entity_api module, track the issue # 2112755
    // https://www.drupal.org/node/2112755
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%entity_object';

    $items = parent::hook_menu();

    // Change the overview menu type for the list of K First Login Manager.
    $items[$this->path]['type'] = MENU_LOCAL_TASK;

    // Replaces default entity title.
    $items[$this->path]['title'] = 'K First Login Manager';

    // Extend the 'edit' path.
    $items['k_first_login_manager/' . $wildcard . '/edit'] = array(
      'title callback' => 'k_first_login_manager_page_title',
      'title arguments' => array(1),
      'page callback' => 'entity_ui_get_form',
      'page arguments' => array($this->entityType, 1),
      'access callback' => 'entity_access',
      'access arguments' => array('edit', $this->entityType),
    );

    // Extend the 'add' path.
    $items[$this->path . '/add'] = array(
      'title callback' => 'entity_ui_get_action_title',
      'title arguments' => array('add', $this->entityType),
      'page callback' => 'entity_ui_bundle_add_page',
      'page arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('create', $this->entityType),
    );

    $items[$this->path . '/add/%'] = array(
      'title callback' => 'entity_ui_get_action_title',
      'title arguments' => array('add', $this->entityType, $this->id_count + 1),
      'page callback' => 'entity_ui_get_bundle_add_form',
      'page arguments' => array($this->entityType, $this->id_count + 1),
      'access callback' => 'entity_access',
      'access arguments' => array('create', $this->entityType),
    );

    $items['k_first_login_manager/' . $wildcard] = array(
      'title callback' => 'k_first_login_manager_page_title',
      'title arguments' => array(1),
      'page callback' => 'k_first_login_manager_page_view',
      'page arguments' => array(1),
      'access callback' => 'entity_access',
      'access arguments' => array('view', $this->entityType),
    );

    return $items;
  }
}

/**
 * Form callback: create or edit a K First Login Manager.
 */
function k_first_login_manager_form($form, &$form_state, $k_first_login_manager, $op = 'edit', $entity_type) {
  // Add the breadcrumb for the form's location.
  k_first_login_manager_set_breadcrumb();

  // Add the default field elements.
  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('K First Login Manager Label'),
    '#default_value' => isset($k_first_login_manager->label) ? $k_first_login_manager->label : '',
    '#maxlength' => 255,
    '#required' => TRUE,
    '#weight' => -5,
  );

  // Add the field related form elements.
  $form_state['k_first_login_manager'] = $k_first_login_manager;
  field_attach_form('k_first_login_manager', $k_first_login_manager, $form, $form_state);

  $form['actions'] = array(
    '#type' => 'container',
    '#attributes' => array('class' => array('form-actions')),
    '#weight' => 400,
  );

  // We add the form #submit array to this button along with the actual submit
  // handler to preserve any submit handlers added by a form callback_wrapper.
  $submit = array();

  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save K First Login Manager'),
    '#submit' => $submit + array('k_first_login_manager_edit_form_submit'),
  );

  if (!empty($k_first_login_manager->label)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete K First Login Manager'),
      '#suffix' => l(t('Cancel'), 'admin/content/k_first_login_manager'),
      '#submit' => $submit + array('k_first_login_manager_form_submit_delete'),
      '#weight' => 45,
    );
  }

  // We append the validate handler to validate in case a form callback_wrapper
  // is used to add validate handlers earlier.
  $form['#validate'] = array('k_first_login_manager_edit_form_validate');

  return $form;
}

/**
 * Form API validate callback for the K First Login Manager form.
 */
function k_first_login_manager_edit_form_validate(&$form, &$form_state) {
  $k_first_login_manager = $form_state['k_first_login_manager'];

  // Notify field widgets to validate their data.
  field_attach_form_validate('k_first_login_manager', $k_first_login_manager, $form, $form_state);
}

/**
 * Form API submit callback for the K First Login Manager form.
 */
function k_first_login_manager_edit_form_submit(&$form, &$form_state) {
  // Save the entity and go back to the list of K First Login Manager.
  $k_first_login_manager = entity_ui_controller('k_first_login_manager')->entityFormSubmitBuildEntity($form, $form_state);

  // Add in created and changed times.
  $is_new_entity = $k_first_login_manager->is_new = isset($k_first_login_manager->is_new) ? $k_first_login_manager->is_new : 0;
  if ($is_new_entity) {
    $k_first_login_manager->created = time();
  }

  $k_first_login_manager->changed = time();

  $k_first_login_manager->save();

  // Send feedback message to the user.
  $message = t("K First Login Manager :label updated.", array(':label' => $k_first_login_manager->label));

  if ($is_new_entity) {
    $message = t("K First Login Manager :label created.", array(':label' => $k_first_login_manager->label));
  }

  drupal_set_message($message);

  $form_state['redirect'] = 'admin/content/k_first_login_manager';
}

/**
 * Form API submit callback for the delete button.
 */
function k_first_login_manager_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/content/k_first_login_manager/manage/' . $form_state['k_first_login_manager']->k_first_login_manager_id . '/delete';
}

/**
 * Sets the breadcrumb for administrative K First Login Manager pages.
 */
function k_first_login_manager_set_breadcrumb() {
  $breadcrumb = array(
    l(t('Home'), '<front>'),
    l(t('Administration'), 'admin'),
    l(t('Content'), 'admin/content'),
    l(t('K First Login Manager'), 'admin/content/k_first_login_manager'),
  );

  drupal_set_breadcrumb($breadcrumb);
}
