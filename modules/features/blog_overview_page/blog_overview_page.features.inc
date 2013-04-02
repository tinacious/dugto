<?php
/**
 * @file
 * blog_overview_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_overview_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_overview_page_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blog_overview_page_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('blog post'),
      'base' => 'node_content',
      'description' => t('The blog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
