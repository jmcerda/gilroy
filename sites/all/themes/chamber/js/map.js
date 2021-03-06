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

                    var markerImage = 'sites/all/themes/chamber/images/location@3x.png';

                    var marker = new google.maps.Marker({
                        position: location,
                        map: map,
                        icon: markerImage
                    });

                    var styles = [{"featureType": "landscape", "stylers": [{"saturation": -100}, {"lightness": 65}, {"visibility": "on"}]}, {"featureType": "poi", "stylers": [{"saturation": -100}, {"lightness": 51}, {"visibility": "simplified"}]}, {"featureType": "road.highway", "stylers": [{"saturation": -100}, {"visibility": "simplified"}]}, {"featureType": "road.arterial", "stylers": [{"saturation": -100}, {"lightness": 30}, {"visibility": "on"}]}, {"featureType": "road.local", "stylers": [{"saturation": -100}, {"lightness": 40}, {"visibility": "on"}]}, {"featureType": "transit", "stylers": [{"saturation": -100}, {"visibility": "simplified"}]}, {"featureType": "administrative.province", "stylers": [{"visibility": "off"}]}, {"featureType": "water", "elementType": "labels", "stylers": [{"visibility": "on"}, {"lightness": -25}, {"saturation": -100}]}, {"featureType": "water", "elementType": "geometry", "stylers": [{"hue": "#ffff00"}, {"lightness": -25}, {"saturation": -97}]}];

                    map.set('styles', styles);

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

                    var onMapMouseleaveHandler = function (event) {
                        var that = $(this);

                        that.on('click', onMapClickHandler);
                        that.off('mouseleave', onMapMouseleaveHandler);
                        that.find('iframe').css("pointer-events", "none");
                    }

                    var onMapClickHandler = function (event) {
                        var that = $(this);

                        // Disable the click handler until the user leaves the map area
                        that.off('click', onMapClickHandler);

                        // Enable scrolling zoom
                        that.find('iframe').css("pointer-events", "auto");

                        // Handle the mouse leave event
                        that.on('mouseleave', onMapMouseleaveHandler);
                    }

                    // Enable map zooming with mouse scroll when the user clicks the map
                    $('.maps.embed-container').on('click', onMapClickHandler);


                }

                google.maps.event.addDomListener(window, 'load', initMap);
            });

        }
    };
}(jQuery));
