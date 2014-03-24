<?php
/**
 * @file
 * cadug_content_type_session.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cadug_content_type_session_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-session_proposal-field_body'
  $field_instances['node-session_proposal-field_body'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe your proposed session.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_body',
    'label' => 'Session summary',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-session_proposal-field_duration'
  $field_instances['node-session_proposal-field_duration'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'How many minutes long is your session?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_duration',
    'label' => 'Duration',
    'required' => 0,
    'settings' => array(
      'max' => 60,
      'min' => 0,
      'prefix' => '',
      'suffix' => 'min',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-session_proposal-field_level'
  $field_instances['node-session_proposal-field_level'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose a level of technical sophistication for your proposed session.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_level',
    'label' => 'Level',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-session_proposal-field_session_needs'
  $field_instances['node-session_proposal-field_session_needs'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List your technical needs for this session, if any. (E.g. projector, HDMI cable, extension cord, speakers, etc.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_session_needs',
    'label' => 'Session needs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-session_proposal-field_topic'
  $field_instances['node-session_proposal-field_topic'] = array(
    'bundle' => 'session_proposal',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select any topic category/ies that apply.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topic',
    'label' => 'Topic',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_buttons',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose a level of technical sophistication for your proposed session.');
  t('Describe your proposed session.');
  t('Duration');
  t('How many minutes long is your session?');
  t('Level');
  t('List your technical needs for this session, if any. (E.g. projector, HDMI cable, extension cord, speakers, etc.)');
  t('Select any topic category/ies that apply.');
  t('Session needs');
  t('Session summary');
  t('Topic');

  return $field_instances;
}
