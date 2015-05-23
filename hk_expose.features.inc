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
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_expose_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hk_expose_image_default_styles() {
  $styles = array();

  // Exported image style: expose.
  $styles['expose'] = array(
    'label' => 'Exposé',
    'effects' => array(
      2 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 2067,
          'height' => 1163,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
