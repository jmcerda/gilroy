<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if ($content['top']): ?>
      <div class="row">
        <?php print $content['top']; ?>
      </div>
  <?php endif ?>
  <?php if ($content['left'] || $content['right']): ?>
      <div class="row">
          <div class="col-sm-6">
            <?php print $content['left']; ?>
          </div>
          <div class="col-sm-6">
            <?php print $content['right']; ?>
          </div>
      </div>
  <?php endif ?>
  <?php if ($content['bottom']): ?>
      <div id="page-bottom" class="row">
        <?php print $content['bottom']; ?>
      </div>
  <?php endif ?>
</div>
