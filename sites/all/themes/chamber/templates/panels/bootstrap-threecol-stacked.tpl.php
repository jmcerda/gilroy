<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
    <div class="row">
      <?php print $content['top']; ?>
    </div>
  <?php endif ?>

  <?php if ($content['left'] || $content['middle'] || $content['right']): ?>
    <div class="row"> <!-- @TODO: Add extra classes -->
        <aside class="col-sm-3" role="complementary">
            <?php print $content['left']; ?>
        </aside>
        <section>
            <?php print $content['middle']; ?>
        </section>
        <aside class="col-sm-3" role="complementary">
            <?php print $content['right']; ?>
        </aside>
    </div>
  <?php endif ?>

  <?php if ($content['bottom']): ?>
    <div id="page-bottom" class="row">
      <?php print $content['bottom']; ?>
    </div>
  <?php endif ?>
</div>
