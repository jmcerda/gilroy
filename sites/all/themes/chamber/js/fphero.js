/**
 * Created by jcerda on 5/13/17.
 */
(function flip($) {
    Drupal.behaviors.exampleModule = {
        attach: function (context, settings) {
            // Code to be run on page load, and
            // on ajax load added here
            $('.card').toggleClass('flipped');
        }
    };
}(jQuery));