(function ($) {
    Drupal.behaviors.mapModule = {
        attach: function (context, settings) {
            $(function () {

                function initMap() {

                    var location = new google.maps.LatLng(50.0875726, 14.4189987);

                    var mapCanvas = document.getElementById('map');
                    var mapOptions = {
                        center: location,
                        zoom: 16,
                        panControl: false,
                        mapTypeId: google.maps.MapTypeId.ROADMAP
                    }
                    var map = new google.maps.Map(mapCanvas, mapOptions);

                    var markerImage = '../images/location.svg';

                    var marker = new google.maps.Marker({
                        position: location,
                        map: map,
                        icon: markerImage
                    });

                    var contentString = '<div class="info-window">' +
                        '<h3>The Gilroy Chamber of Commerce</h3>' +
                        '<div class="info-content">' +
                        '<p>Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vestibulum tortor quam, feugiat vitae, ultricies eget, tempor sit amet, ante.</p>' +
                        '</div>' +
                        '</div>';

                    var infowindow = new google.maps.InfoWindow({
                        content: contentString,
                        maxWidth: 400
                    });

                    marker.addListener('click', function () {
                        infowindow.open(map, marker);
                    });


                }

                google.maps.event.addDomListener(window, 'load', initMap);
            });

        }
    };
}(jQuery));
