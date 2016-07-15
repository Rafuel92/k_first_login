<?php




class Step{


  //machine name of forms -> array('machine_name_form'=> array('field1','field2'...))
  private $fields_name_array;
  //#STEP -> integer
  private $number_step;
  //array of views array('view_name','display','arguments')
  private $views_name_array;
  // user roles ->array()
  private $user_roles_array;
  //markup string
  private $html_markup;
  //id to reference step
  private $reference_step;

  /**
   * Step constructor.
   * @param array $values
   */
  public function __construct($values = array()) {
    $this->setFieldsNameArray($values['fields_name_array']);
    $this->setNumberStep($values['number_step']);
    $this->setViewsNameArray($values['views_name_array']);
    $this->setUserRolesArray($values['user_roles_array']);
    $this->setHtmlMarkup($values['html_markup']);
    $this->setReferenceStep($values['reference_step']);
  }

  /*
   * SET
   */

  /**
   * @param mixed $fields_name_array
   */
  public function setFieldsNameArray($fields_name_array) {
    $this->fields_name_array = $fields_name_array;
  }

  /**
   * @param mixed $number_step
   */
  public function setNumberStep($number_step) {
    $this->number_step = $number_step;
  }

  /**
   * @param mixed $views_name_array
   */
  public function setViewsNameArray($views_name_array) {
    $this->views_name_array = $views_name_array;
  }

  /**
   * @param mixed $user_roles_array
   */
  public function setUserRolesArray($user_roles_array) {
    $this->user_roles_array = $user_roles_array;
  }

  /**
   * @param mixed $html_markup
   */
  public function setHtmlMarkup($html_markup) {
    $this->html_markup = $html_markup;
  }

  /**
   * @param mixed $reference_step
   */
  public function setReferenceStep($reference_step) {
    $this->reference_step = $reference_step;
  }

  /*
   * GET
   * */

  /**
   * @return mixed
   */
  public function getFieldsNameArray() {
    return $this->fields_name_array;
  }

  /**
   * @return mixed
   */
  public function getNumberStep() {
    return $this->number_step;
  }

  /**
   * @return mixed
   */
  public function getViewsNameArray() {
    return $this->views_name_array;
  }

  /**
   * @return mixed
   */
  public function getUserRolesArray() {
    return $this->user_roles_array;
  }

  /**
   * @return mixed
   */
  public function getHtmlMarkup() {
    return $this->html_markup;
  }

  /**
   * @return mixed
   */
  public function getReferenceStep() {
    return $this->reference_step;
  }



}