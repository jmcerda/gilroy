/**
 * Created by jcerda on 5/13/17.
 */
(function ($) {
    Drupal.behaviors.fpheroModule = {
        attach: function (context, settings) {
            // Front page slider flip function
            // $(".card").click(function() {
            //     $(this).addClass("flipped");
            // });
            //
            $(".flipster-slide").click(function(){
                if ($(this).hasClass('flipster__item--current')) {
                    $('.card').parent().addClass('flipped');
                }
            });


        }
    };
}(jQuery));