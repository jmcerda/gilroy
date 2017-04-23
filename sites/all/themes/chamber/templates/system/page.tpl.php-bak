<div id="umenu">
    <?php
    $menu = menu_navigation_links('user-menu');
    print theme('links__user_menu', array('links' => $menu));
    ?>
</div>
<header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
  <div class="<?php print $container_class; ?>">
    <div class="navbar-header">
        <div class="col-sm-2 col-xs-12">
      <?php if ($logo): ?>
            <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
        </div>
      <?php endif; ?>

      <?php if (!empty($site_name)): ?>
        <a class="name navbar-brand" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
      <?php endif; ?>

      <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
        <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#navbar-collapse">
          <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
      <?php endif; ?>
    </div>

    <?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
      <div class="navbar-collapse collapse" id="navbar-collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($secondary_nav)): ?>
            <?php print render($secondary_nav); ?>
          <?php endif; ?>
          <?php if (!empty($page['navigation'])): ?>
            <?php print render($page['navigation']); ?>
          <?php endif; ?>
        </nav>
      </div>
    <?php endif; ?>
  </div>
</header>

<div class="main-container <?php print $container_class; ?>">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>
      <div class="gilroy_brand">
          <?php if (!empty($linked_logo)) {
              print $linked_logo;
          } ?>
      </div>
      <div id="gsearch">
          <?php
          $block = module_invoke('search', 'block_view');
          print render($block['content']);
          ?>
      </div>
      <div id="gmenu">
          <?php
          $menu = menu_navigation_links('main-menu');
          print theme('links__main_menu', array('links' => $menu));
          ?>
      </div>
    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>

<footer class="footer <?php print $container_class; ?>">
<?php print render($page['footer']); ?>
  <section class="footer-top">
      <div id="fumenu" class="col-sm-7 col-xs-12">
          <?php
          print render($main_menu_expanded);
          ?>
      </div>
      <div id="footer-contact">
          <div class="foot_contact col-sm-3 col-xs-12" itemscope itemtype="http://schema.org/LocalBusiness">
              <h2><span itemprop="name">The Gilroy Chamber of Commerce</span></h2>
              <span itemprop="address">7471 Monterey Street<br />Gilroy, CA 95020</span><br>
              <span itemprop="telephone"><a href="tel:+14088426437">T: 408.842.6437</a></span><br>
              <span itemprop="telephone"><a href="tel:+14088426010">F: 408.842.6010</a></span>
          </div>
          <div class="foot_logo col-sm-2 col-xs-12">
              <?php
              if (!empty($linked_logo)) {
                  print $linked_logo;
              }
              ?>
          </div>
      </div>
  </section>

  <section class="footer-bottom">
      <div class="copyright">
          <p>
              &copy; <?php print date('Y') . ' ' . t( 'The Gilroy Chamber of Commerce') . ' ' . t('All rights reserved.'); ?>
          </p>
      </div>

      <div class="utility-menu">
          <ul>
              <li><a href="/">Privacy Policy</a></li>
              <li><a href="/">Terms of Service</a></li>
          </ul>
      </div>
  </section>
</footer>
<a href="#" class="scrollToTop">Scroll To Top</a>
