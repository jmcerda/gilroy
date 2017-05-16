(function ($) {
    Drupal.behaviors.mapModule = {
        attach: function (context, settings) {
            $(function () {

                function initMap() {

                    var location = new google.maps.LatLng(37.0077292, -121.5718018);

                    var mapCanvas = document.getElementById('map');
                    var mapOptions = {
                        center: location,
                        zoom: 16,
                        panControl: false,
                        mapTypeId: google.maps.MapTypeId.ROADMAP
                    }
                    var map = new google.maps.Map(mapCanvas, mapOptions);

                }

                google.maps.event.addDomListener(window, 'load', initMap);
            });

        }
    };
}(jQuery));
