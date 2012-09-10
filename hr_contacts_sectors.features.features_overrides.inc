<?php
/**
 * @file
 * hr_contacts_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_contacts_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-contact-field_clusters.field_instance|label"] = 'Sectors';

  // Exported overrides for: views_view
  $overrides["views_view.contacts.display|default|display_options|fields|field_clusters|label"] = 'Sector';
  $overrides["views_view.contacts.display|default|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';

 return $overrides;
}
