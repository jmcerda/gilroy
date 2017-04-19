
CONTENTS OF THIS FILE
---------------------

 * Description
 * Use
 * Block Icon Settings
 * Theming
 * $block_icon Array


DESCRIPTION
-----------

The Block Icons module allows you to add icons to blocks (small images that
generally appear next to block titles).

More and more themes are being developed that ship with default icons displayed
next to block titles. One of this issues with this is that a theme cannot
account for all the blocks a site may have enabled at any one time; especially
since users can create their own, custom blocks. To get around this, users have
to add CSS code to their theme to add icons to any un-supported or custom
blocks.

This module exists for two reasons:

 1. To make it easier for users to add their own icons to any and all blocks on
    their site (without having to write additional CSS).

 2. To remove the need for block icons to be theme-dependent (i.e. users can
    keep their icon-block settings even when switching themes).


USE
---

To use Block Icons, you'll need to tell each block what icon to use and how to
display it. To do this, access the block configuration page of the block you
want to add an icon to. You will see a new set of options under 'Block specific
settings' (described below). Configure these settings, then hit 'Save block'.

If you decided to display the block icon in a 'custom' location, you will need
to add a call to the 'block_icon' theme function from your theme's block
template file. To do this, add the following line of code to your theme's
block.tpl.php file:

  <?php print theme('block_icon', $block_icon); ?>


BLOCK ICON SETTINGS
-------------------

Path to existing icon:
  If the icon you want to use already resides on the server (i.e. you FTP'd it
  to the Files directory, a theme ships with it, etc.), enter its relative path
  here.

Upload a new icon:
  If instead you want to upload an icon from your computer, you can do so with
  this field. NOTE: This field will overwrite the one above.

Imagecache preset:
  If you have the ImageCache module enabled, you can select a preset to use for
  the display of this block's icon. This module uses a default preset that
  scales and crops the icon to 30x30px, but feel free to create your own.

Icon location:
  This determines where in the block the icon will be displayed. Available
  options are:

  Title:
    The icon will be displayed next to the block's title.

  Content:
    The icon will be displayed within the content of the block (at the top).

  Custom:
    The icon can be displayed anywhere in the block by simply calling the
    'block_icon' theme function in block.tpl.php (see 'Use' above).

    Example: If you want the icon displayed at the bottom of the block, add
    <?php print theme('block_icon', $block_icon); ?> to the bottom of your
    theme's block.tpl.php file.

Icon position:
  This determines which side of the block the icon will be displayed on (can be
  overridden, see 'Theming' below).


THEMING
-------

There are a number of ways you can customise the display of block icons.

Block classes:
  If you'd like to use CSS to target all blocks that have an icon, or all blocks
  with the icon in a specific location or position, you can add the following
  code to your block's class attribute in block.tpl.php.

    <?php print $block_icon['block_class']; ?>

Override theme_block_icon():
  You can override theme_block_icon() in your theme's template.php file if you'd
  like to output the icon differently (e.g. as an <img> tag, edit the default
  CSS applied to the icon, etc.). All necessary variables are made available by
  the $block_icon array (see below for details).

Block-specific customisations:
  If you need to display icons differently depending on the type of block, you
  can create different block template files (as per
  http://drupal.org/node/190815), then output the icon directly using the
  variables from $block_icon (i.e. bypass the block_icon theme function
  altogether). You're only limited by your imagination.


$BLOCK_ICON ARRAY
-----------------

This module makes an array of block icon variables ($block_icon) available to
block.tpl.php files. This is useful for a number of reasons:

 1. This array is needed as a parameter for theme_block_icon().

 2. Themers can output block icon-specific classes in their blocks, making it
    easy to target icon-enabled blocks with CSS (see 'Block classes' under
    'Theming' above).

 3. Themers can bypass the block_icon theme function altogether and output block
    icons directly in block.tpl.php files (see 'Block-specific customisations'
    under 'Theming' above).

The $block_icon array is made up of the following variables:

width:
  From image_get_info(): http://api.drupal.org/api/function/image_get_info
  The width of the icon. Useful when outputting the icon as as <img> tag.

height:
  From image_get_info(): http://api.drupal.org/api/function/image_get_info
  The height of the icon. Useful when outputting the icon as as <img> tag.

extension:
  From image_get_info(): http://api.drupal.org/api/function/image_get_info
  The icon file's extension.

file_size:
  From image_get_info(): http://api.drupal.org/api/function/image_get_info
  The icon's filesize in bytes.

mime_type:
  From image_get_info(): http://api.drupal.org/api/function/image_get_info
  The icon file's MIME type (http://en.wikipedia.org/wiki/MIME_type).

path:
  The full (absolute) path to the icon file. This is either the path to the
  Imagecache preset (if used), or the manually-entered path. This can be used
  for outputting the icon as an <img> tag, or overriding the default CSS.

preset:
  The name of the selected Imagecache preset for this icon (if used). This can
  be used with the Imagecache API instead of the full path above when outputting
  the icon as an <img> tag.

location:
  The selected location of the icon within the block. This can be used to
  determine where the icon was set to be displayed from the block configuration
  page. This variable is also used in the block_class variable (see below).

position:
  The selected position of the icon. This is used by the default CSS to float
  the icon left or right, and should therefore be used if writing your own CSS.
  This variable is also used in the block_class variable (see below).

block_class:
  Three CSS block classes; namely 'has-block-icon', 'block-icon-[location]' and
  'block-icon-[position]'. These can be added to the block to allow themers to
  target all icon-enabled blocks, all blocks with icons in a certain location
  (title, content or custom) or all blocks with icons in a certain position
  (left or right).

module:
  The module this block belongs to. This is used by the theme function, in
  conjunction with the delta variable (see below), to target blocks by their IDs
  with CSS.

delta:
  The unique identifier for this block in relation to its module. This is used
  by the theme function, in conjunction with the module variable (see above), to
  target blocks by their IDs with CSS.

