<?php
/**
 * @file
 * cadug_taxonomy_topic.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cadug_taxonomy_topic_taxonomy_default_vocabularies() {
  return array(
    'topic' => array(
      'name' => 'Topic',
      'machine_name' => 'topic',
      'description' => 'Topic type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
