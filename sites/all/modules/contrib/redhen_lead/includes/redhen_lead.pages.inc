<?php

/**
 * @file
 * Page callbacks and functions for the RedHen Lead module.
 */


/**
 * Management page for Redhen Leads.
 */
function redhen_lead_manage_page() {
  return t('Administer RedHen Lead fields and display.');
}


/**
 * Admin page for the RedHen Lead module.
 */
function redhen_lead_admin_form($form, &$form_state) {

  return system_settings_form($form);
}
