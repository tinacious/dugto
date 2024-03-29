api = 2
core = 7.x

; ; TEMPLATE
; projects[][subdir] = contrib

; MODULES
; Ascending Alphabetical order from the module name

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.4

projects[codefilter][subdir] = contrib
projects[codefilter][version] = 1.0

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.2

projects[date][subdir] = contrib
projects[date][version] = 2.6

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[diff][subdir] = contrib
projects[diff][version] = 2.0

projects[ds][subdir] = contrib
projects[ds][version] = 2.2

projects[email][subdir] = contrib
projects[email][version] = 1.2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0

projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.0

projects[entityreference_prepopulate][subdir] = contrib
projects[entityreference_prepopulate][version] = 1.2

projects[features][subdir] = contrib
projects[features][version] = 1.0

projects[fences][subdir] = contrib
projects[fences][version] = 1.0

projects[flag][subdir] = contrib
projects[flag][version] = 2.0

projects[flippy][subdir] = contrib
projects[flippy][version] = 1.0

projects[i18n][subdir] = contrib
projects[i18n][version] = 1.7
; Patch helps with installing from drush.
projects[i18n][patch][] = "http://drupal.org/files/static_reset.patch"

projects[link][subdir] = contrib
projects[link][version] = 1.0

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

projects[token][subdir] = contrib
projects[token][version] = 1.5

projects[variable][subdir] = contrib
projects[variable][version] = 2.2

projects[wysiwyg][subdir] = contrib
projects[wysiwyg][version] = 2.2

projects[views][subdir] = contrib
projects[views][version] = 3.6

projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.1

projects[rules][subdir] = contrib
projects[rules][version] = 2.2


; THEMES

projects[adaptivetheme][version] = 3.1

; LIBRARIES

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.zip"
libraries[ckeditor][directory_name] = "ckeditor"
