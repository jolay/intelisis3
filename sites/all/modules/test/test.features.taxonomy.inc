<?php
/**
 * @file
 * test.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function test_taxonomy_default_vocabularies() {
  return array(
    'noticias_intelisis' => array(
      'name' => 'Noticias Intelisis',
      'machine_name' => 'noticias_intelisis',
      'description' => 'Noticias corporativas de Intelisis',
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
