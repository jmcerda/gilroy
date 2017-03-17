<?php
/**
 * @file
 * fh_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function fh_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'sponsor',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '00320f67-77c1-4744-b2fe-01955926df24',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'sponsor',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Child Care/Educational Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '011dbb91-7f61-4f89-a9e3-f7e985c604dd',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Educational/Tutoring',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '020d950d-c412-4ebc-b604-3b0d767058fc',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Garlic City Fun Run & Sock Hop 2014',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '026d7803-bcd1-45ed-a751-2e086bec850c',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Garlic City Fun Run & Sock Hop 2014',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Uesugi Farms',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '03d85465-e3a4-47a4-b8c9-64e60a12f93a',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Uesugi Farms',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Susan Patereau',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '05774c6e-4edc-42fb-a546-6616fd230740',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Susan Patereau',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Printing/Publishing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '080ee5fc-99e4-4ff6-9ca6-4720f13f3c9c',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Chamber of Commerce',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0988eb56-67a8-47f7-8b07-46ea54cf468b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Chamber of Commerce',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Political',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0a2c89ac-0fa2-4ae1-b5f4-14fcaa606a34',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Political',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Antiques',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0ae7ebc5-e6c2-494c-a0f5-ba915a851fc8',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Credit Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0b30f95a-4cc2-48ef-8c49-f1bf5452cb69',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gilroy',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '0c2eeb47-68a4-4498-aee4-75e1a7198c00',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Gilroy',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Landscaping/Tree Service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0d635d43-bbba-45d5-ad3d-6b787a4f7915',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Taxi Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0e05f656-ef36-454b-a9c8-2fcce5182475',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Florist',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0f0bf33a-f2d4-4e2a-bd5c-a9f8c23c3938',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Office Supplies/Equipment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0f6329c0-a3e5-4dc0-8c6c-c8fb7ec15027',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Thanksgiving',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '10ce26c8-b641-45f4-91b3-bcc34f6cca3c',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Thanksgiving',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Appliances/Service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '11658e67-aff6-4e5c-8bbf-35cb0816a800',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Downtown Christmas Parade',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '133332da-0444-4a8f-81cf-41e81a949f4f',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Downtown Christmas Parade',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Physicians & Surgeons',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '15bca4fd-a9c0-4eb8-aa59-952e80a5341a',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Breakfast Club',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1a3fe138-5623-43d6-ad34-94806cfc9b53',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Breakfast Club',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Weekly Update',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1a68d633-514c-42f3-9f54-3f5f34bf58c4',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Weekly Update',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Auto/Truck/Motorcycle/Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1ae9e1f9-b8c2-4483-9912-8094ea072814',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Ranching/Riding',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '1c1e0816-7345-42bc-8603-875e01d100d5',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Budweiser Beer',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '1da7aade-ee27-4131-9a07-b1e1e40d48c6',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Budweiser Beer',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pulido\'s Pro Fitness',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '21f34668-6cd6-4e63-9c3a-0e709bf36d18',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pulido\'s Pro Fitness',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Rental Equipment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '23fdcf85-a9bd-4fd0-a6ce-35ec79ed07b8',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Carpet/Rug/Floor Covering/Care',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '24beedcb-3544-4965-8c08-f7ff7b81c9a6',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Business Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '24f065cd-2086-4214-bbb5-40fc1b4bd1d4',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Photography',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '24f7f5e6-acdc-4216-8c49-8b7a0a7c0c6b',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Power Lunch',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '258910c3-19f6-4b85-a9e3-cac0f7af277b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Power Lunch',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Golf Course/Range/Products',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '27334f31-49ce-4d12-b95a-ffab61561a96',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Weekly Update',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2767ae09-9f5c-46fe-b701-d63c412d48ff',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Weekly Update',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Spice of Life',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2d10087d-fb20-4252-a4e7-727365ca2b61',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Spice of Life',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Networking',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2e87263e-3c63-480f-b3ce-7fd4ba071598',
    'vocabulary_machine_name' => 'event_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Networking',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'email',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '2ec2833b-9540-48e2-8909-6f878ee8224b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'email',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wednesday',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '308d8f24-b44b-49b2-86ac-70acba9bc67b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Wednesday',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '30ea2a87-de43-4b25-9429-2cbef4d7dc36',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Agriculture',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Environmental Products/Controls',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3540c816-27ed-4ecc-af04-10b5e821b06e',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Attorneys/Legal Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3675244d-ba7c-4590-a2f7-1da5b97eb790',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Boutiques & Specialty Shops',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3702d5ec-46df-432a-a65e-89f4055ad3b4',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Pinterest',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3af4434d-cc05-45c8-8169-e23a2ce17d52',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pinterest',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Winery',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3b2d6d74-298a-43d5-b6cc-c5fae54ffc35',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'U. S. Army',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3ca029e3-eaef-4db8-b9fa-a48b9e78f5c0',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'U. S. Army',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dental Services/Dental Labs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3cc91202-1dea-403e-998b-037ebd96068e',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Birthday',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '3d81a0ae-48bc-4589-9b3e-136aa0e6302d',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Birthday',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Computer/Internet Services/Repair',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4198d215-3daa-442c-880a-7ef3e0660ee2',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'McFlurry',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '43a52318-72db-4fa7-a0a3-1f27946f63ab',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'McFlurry',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ribbon Cuttings',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '44b49c1f-aef7-44f6-a17f-0fc4497c98d3',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Ribbon Cuttings',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'My Chamber App',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '45984886-5396-461b-80f7-74115c5f5317',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'My Chamber App',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nob Hill Foods',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '45a503da-4757-462e-84ed-883592b226fb',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Nob Hill Foods',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Screen-printing/Engraving',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '46013869-b9c3-433d-adf3-95d9368b4ad0',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rebekah Children\'s Services',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '47c8815e-b6b7-4082-b887-819b79de2938',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Rebekah Children\'s Services',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'South Bay Regional Mixer',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '48c0b878-bcc5-4c75-a252-e2a5cf9a4c6f',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'South Bay Regional Mixer',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Newspapers/Magazines',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4a2ed21e-fafb-4d26-8b7f-5e7b6624682e',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Veterinarians',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4af779f3-10d2-465f-bf75-93982d2e4dbc',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Uncategorized',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4e33a97f-4185-4575-9df6-02a23095b0c3',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Uncategorized',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Breakfast Club',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '4e383869-fdbd-434c-b324-d386116061f1',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Breakfast Club',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Accommodations/Lodging',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4fc56dac-2f0b-4ef2-a92c-a5e1944746ae',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Television/Radio/Broadcasting',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '500ee0d9-37a8-40b7-9910-d594c9410246',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Business',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '54ca30fb-345f-437c-922d-f019f60d8e97',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Business',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gilroy Center for the Arts',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '55a1f406-8272-4d8b-a025-623c541953a8',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Gilroy Center for the Arts',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Wholesale',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5832ed1b-16ce-400f-903f-964a81ff44aa',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'National Ice Cream Week',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '58c186f8-706d-4093-afc6-cbdb31b24062',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'National Ice Cream Week',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Optical/Optometrists',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5a46c83a-86b7-4acd-9b8d-e23c1425b2e9',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Janitorial/Cleaning',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5bc89700-311e-4ac1-b78e-06f10793cdd9',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Chamber Breakfast',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5c167b20-1fb7-4cb8-b001-44395884b9a8',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Chamber Breakfast',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nurseries',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5d2e9837-df35-45d2-8a9a-f2153b96b6c5',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Military',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5e703acc-b156-41d0-9120-fdb373d67e4c',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Military',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Business Networking',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5eb8dd72-aaa1-42fe-b57a-0e150aa37612',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Pinnacle Bank',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '61d7dc37-fb59-4028-b6f1-95b3769310cf',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pinnacle Bank',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Web Design',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '61e46180-9e35-4a4b-b63a-c078597c75dc',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Outdoor Power Equipment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '63413c7c-9ea2-48d0-a2c6-2d2ce12a07d7',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Susan Murphey Patereau',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '639d4d7f-3bc9-4717-a379-a2344f1e72ea',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Susan Murphey Patereau',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ribbon Cutting',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '64722ad8-91b2-4751-9c42-45347dbae34a',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Ribbon Cutting',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'After Hours Mixer',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '654037d8-515e-481b-aac4-72c9900ef586',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'After Hours Mixer',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mob Squad Lunch',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '665538ef-d1d1-4051-b590-e6470011f51f',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Mob Squad Lunch',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Volunteers',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '66b60482-86cf-4677-991d-ea052bad9605',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Volunteers',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Government Relations Committee',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '682e7875-5f11-4444-99bb-6d358130e42d',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Government Relations Committee',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mailing Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '69326737-8135-4099-bc9b-8e9c7bfaed3d',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Sue Thurman',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6a813bae-2170-4366-80cd-1f666a4f64ac',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Sue Thurman',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gilroy Chamber of Commerce',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '6b5a6619-0e39-4e65-869c-a98f4d8af827',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Gilroy Chamber of Commerce',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6bdb45f1-7abe-4182-a6a4-fd19bf227e39',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Convenience/Liquor Store',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6f06c8f9-c687-4d50-b800-97347279bd02',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6f29a4f7-7ed3-46ec-bc81-15b883acc634',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Education',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Cleaners/Laundries',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6ff2ba12-78ae-4765-a61f-77c2a7657c20',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Rehabilitation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '70aade18-518e-4e1c-afda-e0bdaaaaed8f',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Compassion Center',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '727cd138-658f-4840-806b-23a0798499d3',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Compassion Center',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'lunch',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '72c78099-6799-4807-84eb-ae056c6f56ec',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'lunch',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Relay for Life',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '737b07a0-a700-4a07-afb1-171f53eead33',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Relay for Life',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'networking',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '741f2a60-2932-467c-8b66-023a0c1a3eec',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'networking',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Distributor',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '74609a71-3ed3-4de7-8546-3b5a3cddab62',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Coffee House/Juice Bar',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '74a187fe-4034-4f4a-bd85-4b497e8b14c9',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Financial Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '75802fb4-fe77-4c45-94e1-2423e86e7972',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'awards',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '75ba78ad-d0ad-41aa-840e-b5754fe3c1aa',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'awards',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chiropractic Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '77613afe-d643-43e5-96dc-4c07ec4cfdfe',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Yoghart',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '7788bf47-645c-4eab-9671-36a5527be356',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Yoghart',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Painting Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7cb2fa63-f21e-42ea-a433-3d1b75d32218',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Electricians',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7ceb4424-7722-48b8-a097-af0fef9e00ee',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Entertainment',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7d5c92ce-8cab-42d9-bfec-699eb5653681',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Churches',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '7f262137-a14c-46b0-ad1b-b7553bc53530',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Apartments',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8040cdc0-78e7-4211-b21e-52266adcc14b',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Manufacturing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '81cc2dbc-69da-427e-b10b-03be9a3fefa4',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Engineering',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8330985f-dae9-44da-a366-dfc73538390e',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Mark Turner',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '83f671f5-1747-4158-931e-3e607540f9c2',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Mark Turner',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Patti\'s Perfect Pandry',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '853992de-7489-4113-a7ea-ddc2e3a184df',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Patti\'s Perfect Pandry',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Advertising/Promotions',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '86eaa58c-c423-4adb-b04d-20f85e3e36c5',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Accounting/Bookkeeping/Taxes',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8ab56ff4-48a2-4c24-a6be-1141bb774b9a',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Auto/Truck Sales',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8c73d876-ae03-4dd1-a2e3-439c742ff2a2',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Update',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '900b1a3b-896b-4e18-8d69-ff2d7232a70b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Update',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Plumbing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '92fd6e85-5721-4efb-bfe5-663c7a6c9683',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Heating & Air Conditioning',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '932ab458-89cc-4b8c-b65b-0871eaa95717',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Uesugi Pumpkin Park',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '93f077b6-a247-4a24-9f29-484eaf99a3d6',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Uesugi Pumpkin Park',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Organizations',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '948347c6-985e-4968-bda0-18bcd47f95df',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Moving & Storage',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '94c51ec4-2237-41cb-a68a-54b591ed7210',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Bands & Music',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '94e8fb08-494f-4eff-9ab6-82bf4ff8d12a',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Hangout-on-Air',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '97bdc3cc-b276-40b5-a121-f82878155938',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Hangout-on-Air',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Social Media Forum',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '982cf837-49aa-4340-a7fe-b88a5d9764a7',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Social Media Forum',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pet Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '997ef598-ab4a-4a38-8c05-e82bc81e4f73',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Kevin Heath',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9a2fdaf0-8222-47b2-85de-c85e1423afef',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Kevin Heath',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Water Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9a43158b-a081-42a0-8919-005e5483f7dd',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Social Media Forum',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9b54807d-1f3f-482b-b879-f819fa25ddc0',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Social Media Forum',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chamber Of Commerce',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '9b5c148c-4398-4d73-8d82-6ec7542572f2',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Chamber Of Commerce',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Art/Galleries',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9c778bb1-ff33-4eed-a20f-8f729c19f805',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Food Services Power & Utilities',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9e1e6f41-fb8f-4503-a091-e095a9142422',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Metal Fabrication',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9f7cc1b1-4bad-480f-8e5c-bab604fc88ad',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Title Companies',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a0e13499-0ee5-4ea3-b1d8-89263a5df1c4',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Nomination',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a25e6a8c-82f0-4813-8b0e-df6526d7ff8a',
    'vocabulary_machine_name' => 'form_type',
    'path' => array(
      'pathauto' => 0,
    ),
  );
  $terms[] = array(
    'name' => 'Professional',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a292ecd5-18c0-4278-bfc7-d7a888c70d50',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Professional',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Graphic Design/Publishing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a53f3fca-486d-48e5-8afd-e1ec93c8e3ab',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Government Relations',
    'description' => '',
    'format' => 'rich_text',
    'weight' => 0,
    'uuid' => 'a5a203e7-b7ed-4b92-ba9d-3141fc5a090e',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'rich_text',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Government Relations',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Travel Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a5e6cd58-9f3c-4e6d-83c9-b365c69aa920',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'video',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a7f6e073-8f4b-4c4e-8dcf-11ac03215077',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'video',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Party/Home',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a87106bc-b927-4b92-9d88-92dbcb7a5c1a',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'mob squad',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'a9231619-0e2f-4c49-8bce-a85a6d4e32b4',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'mob squad',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Attractions/Recreation',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a98da0d1-ad35-493a-9d30-54520a810f87',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Ambassadors',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ab5f48d4-f232-4953-8726-96f6a97b6340',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Ambassadors',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Dance Studio',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ac4972b2-eba3-41c0-b23c-212c7f158379',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Marketing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ad5a1fd3-1dc3-4a8e-80ba-31698b50369b',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Individuals',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'adc6a7db-b565-434b-858b-f6d527c65986',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Online Registration',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'af5968bb-a790-4328-9042-d18e624f22e1',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Online Registration',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Organizational Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'af6579cc-6678-4440-83b4-1a6774d0089b',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Roofing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b04d9ca4-e835-443c-a7d6-aae7460a0412',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Builder/Developer',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b26a950e-74c1-40cb-a891-4e6625d7fe78',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Candy/Ice Cream Shop',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b4c50756-2ec0-4005-8e3d-7671a815153a',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Meeting',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b707b700-a480-49f7-a9f6-fbebfb767f20',
    'vocabulary_machine_name' => 'event_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Meeting',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gluten Free',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'bd047ffb-2be7-42c8-8723-5c62b4fb367c',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Gluten Free',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Security/Locksmith',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bd88139e-7571-432c-ae3a-e1860e9832e2',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Meeting Note',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'be3542c8-507c-45cb-9e22-ff86b73d33dd',
    'vocabulary_machine_name' => 'form_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Utilities',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bec824ac-6212-42c9-acce-a817f591c426',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Restaurants & Catering',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bf2eb6c0-f77e-4718-906d-0c7751c36df1',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'National Dessert Day',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c17902ee-ea1e-4ac9-8ad0-f69063f3bdd0',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'National Dessert Day',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Employment Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c1bbaa48-3d86-49a6-822f-e99551e1bad4',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Telephone Equipment/Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c37472d2-078c-4095-a873-2f948e7ff45b',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Lunch Mob',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c427d48e-4e37-452b-a4b6-f089101e3ab4',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Lunch Mob',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'video email',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c61fe7f8-ebdb-4c42-963b-fe9d69f7b2c5',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'video email',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pulido\'s Fitness',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'c6a3b02c-c6d2-4db0-889a-a065f177889d',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pulido\'s Fitness',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Drug Store/Pharmacy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ca2fcefe-71ad-4c01-8b44-78010d129b73',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Collection Agency',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cb382261-e2c7-4296-abd8-dd3ba147ac82',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'HOA',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cb5334da-c9c6-4adb-a7ec-fea3853e9908',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'HOA',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ambassadors',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'cb7264b1-d72d-4b64-83ef-8bc46b02f4e8',
    'vocabulary_machine_name' => 'category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Ambassadors',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Furniture',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cc3503d2-af9f-411a-86fd-83d966688ccf',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Retail',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ccb4d2ef-c4c9-435c-a728-546d8e902c5b',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Real Estate',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ce55b14a-2c40-4b03-9f21-0f77161dcd23',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Insurance',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cf5a49e0-b09c-43a2-a995-7cd76fb82d78',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Public Service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd3501ac4-13ec-4bf6-9e13-d2d467caca5a',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Public Service',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Pool & Spa Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd406b649-f160-4118-be88-d269d7041dda',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'One to Another Thrift Store',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd72951d7-d6bc-4948-860f-0f8375f3cbea',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'One to Another Thrift Store',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'The Compassion Center',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd86aae5f-2689-46cc-a65c-464ed7a9f668',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'The Compassion Center',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cultural',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd8f6b36b-dcdf-4a21-97d6-c7f0ea8933ba',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Cultural',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Valentine\'s Day',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd9c6d046-6298-488c-9ba0-8a8b9a3b9e2b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Valentine\'s Day',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mortgage Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'dc71348d-35c0-4efc-8121-debc15ba9992',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Bonfante Collision Center',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'def06a6f-e47b-40ae-acbc-becd39e62924',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Bonfante Collision Center',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Happy Thanksgiving',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e1f3ac34-9b9f-4351-a464-28d07df3a0f7',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Happy Thanksgiving',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Glass/Windows',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e49305e6-5061-4bb1-8dd4-c95eb435bda3',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Construction/Contractors',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e495604d-25bd-48a5-9235-ffde50ed9221',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Community Service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e595789c-e6a9-4dd0-aded-aa4ec9c5bdfa',
    'vocabulary_machine_name' => 'industry',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Community Service',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Ambassador Committee',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e7b3e49e-7ef3-44fc-b85c-c6b250ac1866',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Ambassador Committee',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Pumpkin People Contest',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'e90c120c-3637-4818-8b01-26de55b2f4ec',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pumpkin People Contest',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Signs',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e90f9273-8acf-420c-bf53-11e17e8f5d4d',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Pumpkin People',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'ea2890a3-94cb-451a-935e-ac56d1d5922c',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Pumpkin People',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Delivery Service Messenger',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'eab7f9dc-7734-4b96-961f-3671af864a85',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Wreaths Across America',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'eb6e6bbc-b7af-4e15-8caa-cae28fe1831e',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Wreaths Across America',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Healthcare',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ed2f91e6-64fc-4dad-8c8a-f3dce359bdb5',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Seed Producers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ee6b524c-ac31-4b23-bc47-049340696ade',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Architect',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f03cda50-b5ce-44da-910b-b8d9dc3e62db',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Funeral Homes & Memorial Parks',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f0da4dd4-43db-4645-b583-4f2cc1a5f93f',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'business of the year',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'f15aad73-5cd6-4170-b0ee-a5ccea7fb2ac',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'business of the year',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'California',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f3b821d3-be85-48c0-8d99-0a64497f6ac3',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'California',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f565c6c1-6fca-46e9-b15a-d0720d74283c',
    'vocabulary_machine_name' => 'event_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Education',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Downtown Brew Crawl',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f65cddc3-60df-42c0-84d4-d0037f73a536',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Downtown Brew Crawl',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'RV Sales/Service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f6b9505b-ced5-4648-b670-c988687fb051',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Informed Choices',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'f6efcdd9-fa05-413a-9af1-7554e3a5466e',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Informed Choices',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Counseling',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f811350a-bf47-4bdb-8940-e46639dc1ee1',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Food Processing',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f9003c9a-02e4-40af-9b94-3d36e8f8616a',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Garlic',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f96044ae-83db-45ba-b7be-d8ef0b5a44d6',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Home Improvement',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f98970c8-041d-42e0-94e7-1ced58f56350',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Health, Beauty & Fitness',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'faa7c88f-64bf-4103-bded-a3cc8071ae69',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Gilroy Garlic Festival',
    'description' => NULL,
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'fb41fe37-8793-447d-bae0-b8ba4307b02b',
    'vocabulary_machine_name' => 'tags',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'summary' => NULL,
          'format' => 'plain_text',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Gilroy Garlic Festival',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Application',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fcdc15b3-0326-49ec-b293-d06fe85689f5',
    'vocabulary_machine_name' => 'form_type',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Banking Services',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fd247297-f4a1-45a8-a31d-300de12761b9',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Luncheon',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fe4034b8-d867-4256-a5a5-1dbc2618f842',
    'vocabulary_machine_name' => 'event_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'full_html',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Luncheon',
          'format' => NULL,
        ),
      ),
    ),
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Petroleum',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fe821556-89e1-4617-9c27-2a771f6de6b6',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Trucking',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ff50390b-89d9-4867-ab57-b09238e8dc94',
    'vocabulary_machine_name' => 'member_category',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
