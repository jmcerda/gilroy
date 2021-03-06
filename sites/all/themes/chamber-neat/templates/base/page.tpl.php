<div role="document" class="page">
    <div id="umenu">
        <?php
        $menu = menu_navigation_links('user-menu');
        print theme('links__user_menu', array('links' => $menu));
        ?>
    </div>
        <header role="banner">
            <div class="outer-wrapper">
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
            </div>
        </header>
    <section id="fp-hero">
        <?php print views_embed_view('front_page_hero_slider', 'block'); ?>
    </section>

  <?php if (!empty($page['featured'])): ?>
    <section id="featured">
      <div class="outer-wrapper">
        <?php print render($page['featured']); ?>
      </div>
    </section>
  <?php endif; ?>

  <?php if ($messages): ?>
    <section id="messages">
      <div class="outer-wrapper">
        <?php print $messages; ?>
      </div>
    </section>
  <?php endif; ?>

  <?php if ($breadcrumb): ?>
    <section id="breadcrumb">
      <div class="outer-wrapper">
        <?php print $breadcrumb; ?>
      </div>
    </section>
  <?php endif; ?>

  <main id="panel" role="main" class="outer-wrapper">
    <?php if (!empty($page['sidebar_first'])): ?>
      <aside id="sidebar-first" role="complementary" class="sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <section id="content">
      <?php if ($title): ?>
        <?php print render($title_prefix); ?>
          <h1 id="page-title"><?php print $title; ?></h1>
        <?php print render($title_suffix); ?>
      <?php endif; ?>

      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
        <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside id="sidebar-second" role="complementary" class="sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>

    <footer id="site-footer" role="contentinfo">
        <section class="footer-top">
<!--            <div class="flex-boxes">-->
<!--                <div class="flex-box">-->
                    <div id="fumenu">
                        <?php
                            print render($main_menu_expanded);
                        ?>
                    </div>
<!--                </div>-->
<!--                <div class="flex-box">-->
                    <div id="footer-contact">
                        <div class="foot_contact" itemscope itemtype="http://schema.org/LocalBusiness">
                            <h2><span itemprop="name">The Gilroy Chamber of Commerce</span></h2>
                            <span itemprop="address">7471 Monterey Street<br />Gilroy, CA 95020</span><br>
                            <span itemprop="telephone"><a href="tel:+14088426437">T: 408.842.6437</a></span><br>
                            <span itemprop="telephone"><a href="tel:+14088426010">F: 408.842.6010</a></span>
                        </div>
                        <div class="foot_logo">
                            <?php
                                if (!empty($linked_logo)) {
                                    print $linked_logo;
                                }
                            ?>
                        </div>
                    </div>
<!--                </div>-->
<!--            </div>-->
        </section>

        <section class="footer-bottom">
            <div class="copyright">
                <p>
                    &copy; <?php print date('Y') . ' ' . $linked_site_name . ' ' . t('All rights reserved.'); ?>
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

</div>