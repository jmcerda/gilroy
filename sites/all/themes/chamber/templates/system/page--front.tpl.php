<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */
?>
<div id="gilroy-head-wrap">
    <header id="navbar" role="banner" class="<?php print $navbar_classes; ?>">
        <div class="<?php print $container_class; ?>">
            <div class="navbar-header">
          <?php if ($logo): ?>
            <a class="logo navbar-btn pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
              <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
            </a>
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
                <div class="gsearch col-sm-3 pull-right">
                    <?php
                    $block = module_invoke('search', 'block_view');
                    print render($block['content']);
                    ?>
                </div>
                <div id="gmenu" class="gmenu-secondary pull-right">
                    <?php if (!empty($secondary_nav)): ?>
                        <?php print render($secondary_nav); ?>
                    <?php endif; ?>
                </div>
                <div class="gmenu-primary pull-right">
                  <?php if (!empty($primary_nav)): ?>
                    <?php print render($primary_nav); ?>
                  <?php endif; ?>
                </div>
              <?php if (!empty($page['navigation'])): ?>
                <?php print render($page['navigation']); ?>
              <?php endif; ?>
            </nav>
          </div>
        <?php endif; ?>
      </div>
    </header>
    <div class="container front-hero">
        <?php print views_embed_view('front_page_hero_slider', 'block'); ?>
    </div>
</div>

<div class="main-container <?php print $container_class; ?>">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div class="row">


    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
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
      <div class="section-one">
          <div id="fp-business">
              <div class="container block-container">
                  <div class="row">
                      <img src="sites/all/themes/chamber/images/ShakingHands.svg">
                      <h3 class="rtecenter">LETS DO BUSINESS TOGETHER</h3>

                      <p class="rtecenter">The Gilroy Chamber of Commerce is dedicated to supporting our members success and promoting a thriving business environment in the community of Gilroy, California.</p>

                      <p class="rtecenter">Become a member today to build your business network, enjoy exclusive member benefits , and be a part of this vibrant community with a spice for life!</p>
                  </div>
              </div>
          </div>
      </div>
  </div>
</div>
<div id="fp-mid-nav">
    <div class="utilities">
        <div class="container">
            <div class="row">
                <div class="col-sm-3 col-xs-12 utility-item directory-link equalHeight">
                    <a href="directory">
                        <img src="sites/all/themes/chamber/images/magnifying_glass_wh.svg">
                        <span>SEARCH BUSINESS DIRECTORY</span>
                    </a>
                </div>
                <div class="col-sm-3 col-xs-12 utility-item membership-link equalHeight">
                    <a href="about/membership">
                        <img src="sites/all/themes/chamber/images/member_wh.svg">
                        <span>BECOME A MEMBER</span>
                    </a>
                </div>
                <div class="col-sm-3 col-xs-12 utility-item gallery-link equalHeight">
                    <a href="events/gallery">
                        <img src="sites/all/themes/chamber/images/camera_wh.svg">
                        <span>VIEW PHOTO GALLERY</span>
                    </a>
                </div>
            </div>
        </div>
    </div>
</div>
<div id="fp-events-video">
    <div class="events-container container">
        <div class="row">
            <div class="fp-events equalHeight">
                <div class="col-sm-6 col-xs-12">
                    <?php print views_embed_view('events', 'block'); ?>
                </div>
            </div>
            <div class="fp-video equalHeight">
                <div class="col-sm-6 col-xs-12">
                    <?php print views_embed_view('featured_videos', 'block'); ?>
                </div>
            </div>
        </div>
    </div>
</div>
<div id="fp-benefits-slider">
    <?php print views_embed_view('sliders', 'benefits'); ?>
</div>
<div id="partners-nav">
    <div class="container">
        <div class="row">
            <div class="col-xs-12">
                <div id="divWheel" data-wheelnav data-wheelnav-colors="#005a80">
                    <div data-wheelnav-navitemimg="../images/GilroyDowntownBusinessAssoc.svg" data-wheelnav-navitemtext="Downtown Gilroy Business Association
                    A vibrant and historic downtown community">
                        <img src="../../images/GilroyDowntownBusinessAssoc.svg"><p>DOWNTOWN GILROY BUSINESS ASSOCIATION<br>A vibrant and historic downtown community</p></div>
                    <div data-wheelnav-navitemimg="/sites/all/themes/chamber/images/CityofGilroy.svg" data-wheelnav-navitemtext="City of Gilroy
                    Business licenses, bid opportunities, city services, and more"></div>
                    <div data-wheelnav-navitemimg="../../images/VisitGilroy.svg" data-wheelnav-navitemtext="Visit Gilroy
                    Everything you need to plan a getaway to Gilroy"></div>
                    <div data-wheelnav-navitemimg="sites/all/themes/chamber/images/GilroyEconomicDevelopmentCorp.png" data-wheelnav-navitemtext="Gilroy Economic Development
                    Corporation Resources to help you open,
                    expand or relocate your business"></div>
                </div>
            </div>
        </div>
    </div>
</div>
<div id="fp-ads-slider">
    <div class="container">
        <div class="row">
            <div id="wheel">
                <?php print views_embed_view('sliders', 'ads'); ?>
            </div>
        </div>
    </div>
</div>

<footer class="footer">
    <div class="<?php print $container_class; ?>">
        <div class="row">
            <div class="col-xs-12">
                <?php print render($page['footer']); ?>
            </div>
            <div class="equalHeight col-sm-6 col-xs-12">
                <div id="fumenu">
                    <?php
                    print render($main_menu_expanded);
                    ?>
                </div>
            </div>
            <div class="contact-container equalHeight col-sm-3">
                <span class="foot-contact" itemscope itemtype="http://schema.org/LocalBusiness">
    <!--                <h5><span itemprop="name">The Gilroy Chamber of Commerce</span></h5>-->
                    <span itemprop="address">7471 Monterey Street<br />Gilroy, CA 95020</span><br>
                    <span itemprop="telephone"><a href="tel:+14088426437">T: 408.842.6437</a></span><br>
                    <span itemprop="telephone"><a href="tel:+14088426010">F: 408.842.6010</a></span>
                </span>
            </div>
            <div class="foot-logo-container equalHeight col-sm-2">
                <a class="foot_logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
                    <img src="sites/all/themes/chamber/images/logo_wh.png@2x.png" alt="<?php print t('Home'); ?>" />
                </a>
            </div>
        </div>
    </div>
</footer>
<div class="footer-bottom">
    <div class="copyright">
        <p>
            &copy; <?php print date('Y') . ' ' . '|' . ' ' . t('The Gilroy Chamber of Commerce, ') . ' ' . t('All rights reserved.'); ?>
        </p>
    </div>

    <div class="utility-menu">
        <ul>
            <li><a href="/">Privacy Policy</a></li>
            <li><a href="/">Terms of Service</a></li>
        </ul>
    </div>
</div>
<div><a href="#" class="scrollToTop pull-right">Scroll To Top</a></div>
