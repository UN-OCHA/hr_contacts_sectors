<?php
/**
 * @file
 * hr_contacts_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_contacts_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-contact-field_clusters'])) {
    $data['node-contact-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster(s)' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_contacts_sectors_views_default_views_alter(&$data) {
  if (isset($data['contacts'])) {
    $data['contacts']->display['default']->display_options['fields']['field_clusters']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['contacts']->display['default']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
  }
}
