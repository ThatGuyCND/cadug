<?php
/**
 * @file
 * cadug_taxonomy_level.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cadug_taxonomy_level_taxonomy_default_vocabularies() {
  return array(
    'level' => array(
      'name' => 'Level',
      'machine_name' => 'level',
      'description' => 'Levels of technical sophistication',
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
