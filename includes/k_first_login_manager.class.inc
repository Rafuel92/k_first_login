<?php

/**
 * @file
 * K First Login Manager class.
 */

/**
 * The class used for k_first_login_manager entities.
 */
class KFirstLoginManager extends Entity {
  /**
   * Class constructor.
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'k_first_login_manager');
  }

  /**
   * Defines the default entity label.
   */
  protected function defaultLabel() {
    return $this->label;
  }

  /**
   * Defines the default entity URI.
   */
  protected function defaultUri() {
    return array('path' => 'k_first_login_manager/' . $this->k_first_login_manager_id);
  }
}

/**
 * The class used for K First Login Manager type entities.
 */
class KFirstLoginManagerType extends Entity {
  public $type;
  public $label;

  /**
   * Class constructor.
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'k_first_login_manager_type');
  }
}
