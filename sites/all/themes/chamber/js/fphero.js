/**
 * Created by jcerda on 5/13/17.
 */
(function ($) {
    Drupal.behaviors.fpheroModule = {
        attach: function (context, settings) {
            // Front page slider flip function
            $(".card").click(function() {  //use a class, since your ID gets mangled
                $(this).addClass("flipped");      //add the class to the clicked element
            });
        }
    };
}(jQuery));