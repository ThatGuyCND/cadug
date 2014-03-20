<?php
/**
 * @file
 * cadug_taxonomy_topic.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function cadug_taxonomy_topic_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Technical demo',
    'description' => 'This describes a technical demonstration such as how to use a module, how to build a widget, or how the Ctools plugin system works.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '50cdf5d1-a054-4c33-ab2e-2c9ce73eab7b',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Community issues',
    'description' => 'General tech or Drupal community issues such as avoiding burnout, managing clients, the digital divide, etc.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '66716256-06ef-4db2-9d84-dc1612e19185',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Comic relief',
    'description' => '<a href="https://www.destroyallsoftware.com/talks/wat" title="Wat talk at Destroy All Software">WAT</a> is an example of a comic relief talk.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e046b102-dd55-4d94-ae44-bc8a444c574c',
    'vocabulary_machine_name' => 'topic',
  );
  $terms[] = array(
    'name' => 'Case study',
    'description' => 'Describes the details of a particular project as an example.',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ea872997-ae8c-4af7-8dbe-da3fd37e6efe',
    'vocabulary_machine_name' => 'topic',
  );
  return $terms;
}
