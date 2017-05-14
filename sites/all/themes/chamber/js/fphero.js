/**
 * Created by jcerda on 5/13/17.
 */
(function ($) {
    Drupal.behaviors.fpheroModule = {
        attach: function flip(context, settings) {
            // Front page slider flip function
            $('.card').toggleClass('flipped');
        }
    };
}(jQuery));
