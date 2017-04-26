<?php
/**
 * @file
 * The GeoJson plugin.
 */

namespace Drupal\geocoder\Plugin\Geocoder\Dumper;

use Drupal\geocoder\Plugin\Geocoder\Dumper;
use Drupal\geocoder\Plugin\Geocoder\DumperInterface;
use Geocoder\Model\Address;

/**
 * Class GeoJson.
 *
 * @GeocoderPlugin(
 *  id = "geojson",
 *  name = "GeoJson",
 *  type = "Dumper"
 * )
 */
class GeoJson extends Dumper implements DumperInterface {
  /**
   * @inheritdoc
   */
  public function dump(Address $address) {
    $handler = new \Geocoder\Dumper\GeoJson();
    return $handler->dump($address);
  }

}
