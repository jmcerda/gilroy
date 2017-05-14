/**
 * Created by jcerda on 5/13/17.
 */
(function ($) {
    Drupal.behaviors.fpheroModule = {
        attach: function (context, settings) {
            // Front page slider flip function
            $(".card").click(function() {
                // $(this).addClass("flipped");
                if ( $(this).hasClass('flipped') ) {
                    $(this).removeClass('flipped');
                }
                $(this).addClass('current');
            });
        }
    };
}(jQuery));