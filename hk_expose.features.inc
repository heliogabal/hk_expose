<?php
/**
 * @file
 * hk_expose.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_expose_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_expose_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
