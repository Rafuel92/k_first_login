<?php
/**
 * @file
 * entity_k_first_login_manager_step.features.inc
 */

/**
 * Implements hook_default_k_first_login_manager_type().
 */
function entity_k_first_login_manager_step_default_k_first_login_manager_type() {
  $items = array();
  $items['step'] = entity_import('k_first_login_manager_type', '{ "type" : "step", "label" : "step", "weight" : "0", "rdf_mapping" : [] }');
  return $items;
}
