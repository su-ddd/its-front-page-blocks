<?php
/**
 * @file
 * front_page_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function front_page_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-its_emailcomm'] = array(
    'cache' => -1,
    'css_class' => 'well',
    'custom' => 0,
    'machine_name' => 'its_emailcomm',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_itservices',
        'weight' => -76,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-its_security'] = array(
    'cache' => -1,
    'css_class' => 'well',
    'custom' => 0,
    'machine_name' => 'its_security',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_itservices',
        'weight' => -77,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
