What is Passbook?
---------------------------------------------
Passbook is an application in iOS that allows users to store coupons, 
boarding passes, event tickets, store cards, 'generic' cards and other 
forms of mobile payment.

What is PHP-Passbook library?
---------------------------------------------
PHP-Passbook is a library for creating and packaging passes inside your 
application. Distribution of generated pass files can be done by attaching 
the file in an e-mail or serving it from your web server.

What is PHP-Passbook module all about?
---------------------------------------------
PHP-Passbook module ensures that PHP-Passbook library is available to other 
modules. You should not have to install it unless required by another module.

Requirements
---------------------------------------------
    PHP 5.3+
    zip : 
        http://php.net/manual/en/book.zip.php
    OpenSSL : 
        http://www.php.net/manual/en/book.openssl.php

Dependencies
---------------------------------------------
   Composer Manager : 
        https://www.drupal.org/project/composer_manager

Installing the phppassbook
---------------------------------------------

PHP-Passbook API Doc
---------------------------------------------
Search by class, method name, or package: 
        http://eymengunay.github.io/php-passbook/api

Obtaining the Pass Type Identifier and Team ID
---------------------------------------------
You can find more information on following link : 
        https://developer.apple.com/library/ios/documentation/UserExperience/Conceptual/PassKit_PG/Chapters/Introduction.html

To know about requesting Certificates refer following links
---------------------------------------------
    P12 Certificate : 
        https://github.com/eymengunay/php-passbook#requesting-certificates
    WWDR Certificate : 
        https://www.drupal.org/sandbox/dineshweb3/WWDR%20Certificate

Installation Steps	
---------------------------------------------
1. Read the "Installation and Usage For Site Builders" for 
        https://drupal.org/project/composer_manager

2. Download and enable a PHP-Passbook module to *sites/default/modules* 
   directory  
   $ drush en phppassbook

3. Install/Update dependencies
   $ drush composer-manager install / update 
   or 
   $ drush composer install
