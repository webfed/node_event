<?php
/**
 * @file
 * node_event.features.inc
 */

/**
 * Implements hook_node_info().
 */
function node_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evenement'),
      'base' => 'node_content',
      'description' => t('Events have a start date and an optional end date as well as a teaser and a body. They can be extended by other modules, too.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
