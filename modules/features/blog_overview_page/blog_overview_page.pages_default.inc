<?php
/**
 * @file
 * blog_overview_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_overview_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'static_home_page';
  $page->task = 'page';
  $page->admin_title = 'Static Home Page';
  $page->admin_description = 'Temporary static front page.';
  $page->path = 'static-home-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $pages['static_home_page'] = $page;

  return $pages;

}
