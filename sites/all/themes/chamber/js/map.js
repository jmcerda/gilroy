/**
 * Created by jcerda on 5/15/17.
 */
function gilroyMap() {
    var mapOptions = {
        center: new google.maps.LatLng(51.5, -0.12),
        zoom: 10,
        mapTypeId: google.maps.MapTypeId.HYBRID
    }
    var map = new google.maps.Map(document.getElementById("gilroymap"), mapOptions);
}
