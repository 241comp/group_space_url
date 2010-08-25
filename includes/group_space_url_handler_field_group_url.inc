<?php
class group_space_url_handler_field_group_url extends views_handler_field {
  /**
   * Don't allow advanced render of this field.
   */
  function allow_advanced_render() { return FALSE; }

  /**
   * Render this field as a link to group space.
   */
  function render($value) {
    return str_replace('/', '', url('<front>', array('purl' => array('provider' => 'spaces_og', 'id' => $value->nid))));
  }
}