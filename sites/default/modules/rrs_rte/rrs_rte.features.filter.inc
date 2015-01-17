<?php
/**
 * @file
 * rrs_rte.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rrs_rte_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Limited HTML.
  $formats['limited_html'] = array(
    'format' => 'limited_html',
    'name' => 'Limited HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_tokens' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'ckeditor_link_filter' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
