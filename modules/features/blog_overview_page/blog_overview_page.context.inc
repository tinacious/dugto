<?php
/**
 * @file
 * blog_overview_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function blog_overview_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'remove-breadcrumb';
  $context->description = 'Remove Breadcrumb (relies on preprocess function in template.php)';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Remove Breadcrumb (relies on preprocess function in template.php)');
  $export['remove-breadcrumb'] = $context;

  return $export;
}
