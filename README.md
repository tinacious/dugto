# DugTO Site Install Profile

Drupal User Group Toronto Community Site by Tina Holly ([Tinacious Design](http://tinaciousdesign.com), [@TinaciousDesign](http://twitter.com/tinaciousdesign)) and Christopher Milne ([@Chris_J_Milne](http://twitter.com/Chris_J_Milne))

## Site Install

1. Download Drupal to a chosen directory
2. `cd` to the `profiles` directory
3. Download the Git repository: `git clone` using SSH or HTTPS
4. Create an empty database in MySQL
5. Run the install in your browser
6. `cd` to the `dugto` site profile directory and run the rebuild script: `bash rebuild.sh`
7. Check the site in your browser and you should be up to date. To ensure the install hooks have run properly, you should see the `admin_menu` style toolbar and the modules page should be using `module_filter`.

## Theming

We'll be using a subtheme of the Adaptive Theme.
