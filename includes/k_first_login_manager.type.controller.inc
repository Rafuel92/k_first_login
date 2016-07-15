<?php

/**
 * @file
 * K First Login Manager controller class.
 */

/**
 * The Controller for K First Login Manager entities.
 */
class KFirstLoginManagerTypeController extends EntityAPIControllerExportable {
  /**
   * Create a K First Login Manager type.
   *
   * @param array $values
   *   An array containing the possible values.
   *
   * @return object
   *   A type object with all default fields initialized.
   */
  public function create(array $values = array()) {
    // Add values that are specific to our K First Login Manager.
    $values += array(
      'id' => '',
    );
    $entity_type = parent::create($values);

    return $entity_type;
  }
}
