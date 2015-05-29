<?php
$host = '174.120.70.217';
$user = 'ariefset_tb';
$pass = 'ichsan';
$db = 'ariefset_14_osm';

try {
	$conn = new PDO("mysql:dbname=$db;host=$host",$user, $pass);
}
catch(PDOException $e) {
	echo "Error = ".$e->getMessage();
}
session_start();	
error_reporting(0);
/*******************************************************************/
// mysql_connect("localhost", "root", "") or die("Gagal koneksi ke server".mysql_error());
// mysql_select_db("osm") or die("Gagal koneksi ke database".mysql_error());
?>