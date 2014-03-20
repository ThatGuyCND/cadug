<?php
/**
 * @file
 * cadug_taxonomy_level.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function cadug_taxonomy_level_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Intermediate',
    'description' => 'An intermediate level person has some knowledge of Drupal operations and site-building but probably not much development.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0be2064a-f787-4cb6-b398-66eac5d6190c',
    'vocabulary_machine_name' => 'level',
  );
  $terms[] = array(
    'name' => 'Advanced',
    'description' => 'A person with advanced Drupal knowledge is familiar with the intimate details of at least some of Drupal\'s subsystems and APIs. They probably have some opinions and knowledge about future versions of Drupal.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6163a1e3-ca35-4147-9db0-69305f5dda5b',
    'vocabulary_machine_name' => 'level',
  );
  $terms[] = array(
    'name' => 'Beginner',
    'description' => 'A beginner has little or no prior Drupal knowledge.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c1fc0c47-6d6f-40d4-b3de-ce00833196c6',
    'vocabulary_machine_name' => 'level',
  );
  return $terms;
}
