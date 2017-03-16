
//# sourceMappingURL=maps/scripts.js.map


/**
 * @file
 * Placeholder file for custom sub-theme behaviors.
 *
 */
(function ($) {

    Drupal.behaviors.gilroyGlobals = {
        attach: function (context, settings) {

            // Mobile slideout  menu
            var slideout = new Slideout({
                'panel': document.getElementById('panel'),
                'menu': document.getElementById('umenu'),
                'padding': 256,
                'tolerance': 70
            });

            // SlickNav
            $('#gmenu').slicknav({
                label: 'LOGIN',
                duration: 500,
                easingOpen: "easeOutBounce", //available with jQuery UI
                // prependTo:'#demo2'
            });

            //Scroll to top
            //Check to see if the window is top if not then display button
            $(window).scroll(function(){
                if ($(this).scrollTop() > 100) {
                    $('.scrollToTop').fadeIn();
                } else {
                    $('.scrollToTop').fadeOut();
                }
            });

            //Click event to scroll to top
            $('.scrollToTop').click(function(){
                $('html, body').animate({scrollTop : 0},800);
                return false;
            });

        }
    };
})(jQuery);
