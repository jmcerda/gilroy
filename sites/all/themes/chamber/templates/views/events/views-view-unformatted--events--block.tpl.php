<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

    <span class="block-icons col-sm-2 col-xs-12"><img src="sites/all/themes/chamber/images/calendar.svg"></span>
    <span class="col-sm-10 col-xs-12"><h3>UPCOMING EVENTS</h3></span>

<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
