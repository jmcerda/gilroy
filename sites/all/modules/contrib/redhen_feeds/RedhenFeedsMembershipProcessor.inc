<?php
/**
 * @file
 * Class definition of RedhenFeedsMembershipProcessor.
 */

/**
 * Creates contacts from feed items.
 */
class RedhenFeedsMembershipProcessor extends FeedsProcessor {
  /**
   * Define entity type.
   */
  public function entityType() {
    return 'redhen_membership';
  }

  /**
   * Implements parent::entityInfo().
   */
  protected function entityInfo() {
    $info = parent::entityInfo();
    $info['label plural'] = t('RedHen Memberships');
    return $info;
  }

  /**
   * Creates a new membership in memory and returns it.
   */
  protected function newEntity(FeedsSource $source) {
    $values = array(
      'type' => $this->bundle(),
      'author_uid' => $this->config['author'],
      'entity_type' => $this->config['entity_type'],
    );
    return entity_get_controller('redhen_membership')->create($values);
  }

  /**
   * Loads an existing membership.
   */
  protected function entityLoad(FeedsSource $source, $id) {
    $memberships = entity_load('redhen_membership', array($id));
    return reset($memberships);
  }

  /**
   * Save a membership.
   */
  public function entitySave($entity) {
    $entity->save();
    return $entity;
  }

  /**
   * Delete a series of memberships.
   */
  protected function entityDeleteMultiple($ids) {
    $ret = entity_get_controller('redhen_membership')->delete($ids);
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    $return = array(
      'author' => 0,
      'prevent_null_overwrite' => FALSE,
      'entity_type' => 'redhen_contact',
    ) + parent::configDefaults();

    return $return;
  }

  /**
   * Override parent:configForm() to add custom config FAPI elements.
   */
  public function configForm(&$form_state) {
    $form = parent::configForm($form_state);
    unset($form['input_format']);

    $form['prevent_null_overwrite'] = array(
      '#type' => 'checkbox',
      '#title' => 'Prevent Null/blank Overwrite',
      '#description' => t('When selected, blank values from imports will not be used to overwrite existing or default values on RedHen Contacts. Note that this can prevent intentional data removal in some cases. WARNING: This checkbox nothing unless this !patch is applied to the Feeds module (alpha 8 release).',
      array('!patch' => l(t('patch'), "https://drupal.org/files/issues/allow_processors_to_override_nulling_alpha8.patch"))),
      '#default_value' => isset($this->config['prevent_null_overwrite']) ? $this->config['prevent_null_overwrite'] : FALSE,
    );
    $form['entity_type'] = array(
      '#type' => 'select',
      '#title' => 'Entity Type Membership Target',
      '#description' => t('Select which entity type your membership import targets.'),
      '#options' => array(
         'redhen_contact' => t('Redhen Contact'),
         'redhen_org' => t('Redhen Org'),
       ),
      '#default_value' => isset($this->config['entity_type']) ? $this->config['entity_type'] : 'redhen_contact',
    );

    $author = user_load($this->config['author']);
    $form['author'] = array(
      '#type' => 'textfield',
      '#title' => t('Author'),
      '#description' => t('Select the author of the contacts to be created - leave empty to assign "anonymous".'),
      '#autocomplete_path' => 'user/autocomplete',
      '#default_value' => empty($author->name) ?  'anonymous' : check_plain($author->name),
    );

    return $form;
  }

  /**
   * Reschedule if expiry time changes.
   */
  public function configFormSubmit(&$values) {
    if ($author = user_load_by_name($values['author'])) {
      $values['author'] = $author->uid;
    }
    else {
      $values['author'] = 0;
    }
    parent::configFormSubmit($values);
  }

  /**
   * Return available mapping targets.
   */
  public function getMappingTargets() {
    $targets['start_date'] = array(
      'name' => t('Start Date'),
      'description' => t('Start Date'),
    );
    $targets['expire_date'] = array(
      'name' => t('Expire Date'),
      'description' => t('Expire Date'),
    );
    $targets['email'] = array(
      'name' => t('Email'),
      'description' => t('Contact Email Lookup only for Contact Memberships'),
    );
    $targets['name'] = array(
      'name' => t('Name'),
      'description' => t('Organization Name for Org Memberships'),
    );
    $targets['entity_id'] = array(
      'name' => t('Entity ID'),
      'description' => t('Entity ID'),
    );
    $targets['membership_state'] = array(
      'name' => t('State'),
      'description' => t('Indicates if the membership is active or inactive. Must be boolean value.'),
    );
    $targets['author_uid'] = array(
      'name' => t('User UID'),
      'description' => t('The Drupal user ID of the contact author.'),
    );

    self::loadMappers();
    $entity_type = $this->entityType();
    $bundle = $this->bundle();
    drupal_alter('feeds_processor_targets', $targets, $entity_type, $bundle);

    return $targets;
  }

  /**
   * Override setTargetElement to operate on a target item.
   */
  public function setTargetElement(FeedsSource $source, $target_membership, $target_element, $value) {
    switch($target_element){
      case 'email':
        if($this->config['entity_type'] == 'redhen_contact'){ 
          $contacts = redhen_contact_load_by_mail($value);
          $contact = array_pop($contacts);
          $wrapper = entity_metadata_wrapper('redhen_membership', $target_membership);
          $wrapper->entity_id->set($contact->contact_id);
        }
      break;
      case 'name':
        if($this->config['entity_type'] == 'redhen_org'){
          $query = new EntityFieldQuery();
          $query->entityCondition('entity_type', 'redhen_org')
            ->propertyCondition('label', $value)
            ->addMetaData('account', user_load(1)); // Run the query as user 1.
          $result = $query->execute();
          if(isset($result['redhen_org'])){
            $org = array_pop($result['redhen_org']);
            $wrapper = entity_metadata_wrapper('redhen_membership', $target_membership);
            $wrapper->entity_id->set($org->org_id);
          }
        }
      break;
      case 'expire_date':
        $wrapper = entity_metadata_wrapper('redhen_membership', $target_membership);
        $wrapper->$target_element->set(strtotime($value));
      break;
      case 'start_date':
        $wrapper = entity_metadata_wrapper('redhen_membership', $target_membership);
        $wrapper->$target_element->set(strtotime($value));
      break;
      default:
        $wrapper = entity_metadata_wrapper('redhen_membership', $target_membership);
        $wrapper->$target_element->set($value);
    }
  }

  /**
   * Get membership_id of an existing feed item node if available.
   */
  protected function existingEntityId(FeedsSource $source, FeedsParserResult $result) {
    if ($id = parent::existingEntityId($source, $result)) {
      return $id;
    }

    // Iterate through all unique targets and test whether they do already
    // exist in the database.
    foreach ($this->uniqueTargets($source, $result) as $target => $value) {
      switch ($target) {

        case 'membership_id':
          return $value;
      }
    }

    return 0;
  }

  /**
   * Override addConfig to set null_overwrite and other config options.
   */
  public function addConfig($config) {
    parent::addConfig($config);
    if (isset($config['prevent_null_overwrite'])) {
      $this->config['prevent_null_overwrite'] = $config['prevent_null_overwrite'];
    }
    foreach ($this->config['mappings'] as &$cfg) {
      $cfg['prevent_null_overwrite'] = $this->config['prevent_null_overwrite'];
    }
  }
}
