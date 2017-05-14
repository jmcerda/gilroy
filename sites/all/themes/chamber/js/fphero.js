/**
 * Created by jcerda on 5/13/17.
 */
(function ($) {
    Drupal.behaviors.fpheroModule = {
        attach: function flip() {
            $('.card').toggleClass('flipped');
        }
    };
}(jQuery));