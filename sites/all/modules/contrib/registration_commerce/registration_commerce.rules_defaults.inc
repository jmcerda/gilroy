<?php
  /**
   * @file
   * registration_commerce.rules_defaults.inc
   */

  /**
   * Implements hook_default_rules_configuration().
   */
function registration_commerce_default_rules_configuration() {
  $rules = array();

  // Add a reaction rule to set the price of a registration product based on the
  // registration itself:
  $rules['registration_commerce_product_price_from_registration'] = entity_import('rules_config', '{ "registration_commerce_product_price_from_registration" : {
      "LABEL" : "Set registration product price from referenced registration",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Cart", "Registration Commerce" ],
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_product_reference" ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "commerce-line-item" ],
            "field" : "registration_commerce_reg"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-line-item:registration-commerce-reg:amount" ],
            "op" : "\u003E",
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce-line-item" ],
            "amount" : [ "commerce-line-item:registration-commerce-reg:amount" ],
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        },
        { "commerce_line_item_unit_price_currency_code" : {
            "commerce_line_item" : [ "commerce-line-item" ],
            "currency_code" : [ "commerce-line-item:registration-commerce-reg:currency" ]
          }
        }
      ]
    }
  }');
  // Add a reaction rule to unset the price of registration line items where the
  // registration can't be made active.
  $rules['registration_commerce_unset_unavailable_registration'] = entity_import('rules_config', '{ "registration_commerce_unset_unavailable_registration" : {
      "LABEL" : "Unset the price of unavailable registrations in the cart",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Cart", "Registration Commerce" ],
      "REQUIRES" : [ "rules", "registration_commerce", "commerce_product_reference" ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "commerce-line-item:line-item-id" ] } },
        { "entity_has_field" : {
          "entity" : [ "commerce-line-item" ],
            "field" : "registration_commerce_reg"
          }
        },
        { "NOT registration_commerce_item_can_register" : [] }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "commerce-line-item:commerce-unit-price:amount" ] } }
      ]
    }
  }');
  // Add a reaction rule to complete registrations when carts are paid.
  $rules['registration_commerce_complete_reg_on_checkout'] = entity_import('rules_config', '{ "registration_commerce_complete_reg_on_checkout" : {
    "LABEL" : "Complete Registrations on Cart Checkout",
    "PLUGIN" : "reaction rule",
    "WEIGHT" : "10",
    "OWNER" : "rules",
    "TAGS" : [ "Commerce Cart", "Registration Commerce" ],
    "REQUIRES" : [ "registration_commerce", "commerce_checkout" ],
    "ON" : { "commerce_checkout_complete" : [] },
    "DO" : [
      { "registration_commerce_set_state" : {
          "commerce_order" : [ "commerce_order" ],
          "registration_state" : "complete"
        }
      }
    ]
  }
}');

  // Add a reaction rule to cancel registrations when carts are cancelled.
  $rules['registration_commerce_cancel_reg_in_canceled_carts'] = entity_import('rules_config', '{ "registration_commerce_cancel_reg_in_canceled_carts" : {
      "LABEL" : "Cancel Registrations in Canceled Carts",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "WEIGHT" : "10",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Cart", "Registration Commerce" ],
      "REQUIRES" : [ "rules", "registration_commerce", "entity" ],
      "ON" : { "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-order:state" ], "value" : "canceled" } },
        { "NOT data_is" : { "data" : [ "commerce-order-unchanged:state" ], "value" : "canceled" } }
      ],
      "DO" : [
        { "registration_commerce_set_state" : { "commerce_order" : "commerce_order", "registration_state" : "canceled" } }
      ]
    }
  }');

  // Add a reaction rule to delete registrations with corresponding line items.
  $rules['registration_commerce_delete_registration_with_line_item'] = entity_import('rules_config', '{ "registration_commerce_delete_registration_with_line_item" : {
      "LABEL" : "Delete registration with line item",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout", "Registration", "Registration Commerce" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_remove" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "commerce-line-item" ],
            "type" : "commerce_line_item",
            "bundle" : { "value" : { "registration" : "registration" } }
          }
        }
      ],
      "DO" : [
        { "entity_delete" : { "data" : [ "commerce-line-item:registration-commerce-reg" ] } }
      ]
    }
  }');

  return $rules;
}
