<?php

/**
 * @file
 * K First Login Manager controller class.
 */

/**
 * The Controller for K First Login Manager entities.
 */
class KFirstLoginManagerController extends EntityAPIController {
  /**
   * Create a K First Login Manager.
   *
   * @param array $values
   *   An array containing the possible values.
   *
   * @return object
   *   A object with all default fields initialized.
   */
  public function create(array $values = array()) {
    // Add values that are specific to our entity.
    $values += array(
      'k_first_login_manager_id' => '',
      'is_new' => TRUE,
      'label' => '',
    );

    $entity = parent::create($values);

    return $entity;
  }
}
