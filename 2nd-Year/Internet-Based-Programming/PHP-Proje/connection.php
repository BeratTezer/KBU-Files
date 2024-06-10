<?php

$dbhost = "localhost";
$dbuser = "root";
$dbpass = "";
$dbname = "otelyonetim";

if(!$con = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname)) {
    die("Connection failed!");
}