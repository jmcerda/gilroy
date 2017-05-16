/**
 * Created by jcerda on 5/15/17.
 */
// function gilroyMap() {
//     var mapOptions = {
//         center: new google.maps.LatLng(51.5, -0.12),
//         zoom: 10,
//         mapTypeId: google.maps.MapTypeId.HYBRID
//     }
//     var map = new google.maps.Map(document.getElementById("gilroymap"), mapOptions);
// }

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
