<?php
include 'koneksi.php';
if(isset($_GET['cat'])) {
	if($_GET['cat']=="link" and isset($_GET['ver'])) {
		$a = @mysql_query("select alamat from berkas where versi = '".htmlspecialchars($_GET['ver'])."'");
		$b = @mysql_fetch_row($a);
		echo $b[0];
	} elseif ($_GET['cat']=="filename" and isset($_GET['ver'])) {
		$a = @mysql_query("select namafile from berkas where versi = '".htmlspecialchars($_GET['ver'])."'");
		$b = @mysql_fetch_row($a);
		echo $b[0];
	} elseif ($_GET['cat']=="logdata" and isset($_GET['ver'])) {
		$a = @mysql_query("select log_data from berkas where versi = '".htmlspecialchars($_GET['ver'])."'");
		$b = @mysql_fetch_row($a);
		echo $b[0];
	} elseif ($_GET['cat']=="sqlupdate" and isset($_GET['ver'])) {
		$a = @mysql_query("select db_update from berkas where versi = '".htmlspecialchars($_GET['ver'])."'");
		$b = @mysql_fetch_row($a);
		echo $b[0];
	} else {
		$a = @mysql_query("select versi from berkas order by id desc limit 1");
		$b = @mysql_fetch_row($a);
		echo $b[0];
	}
} else {
	$a = @mysql_query("select versi from berkas order by id desc limit 1");
	$b = @mysql_fetch_row($a);
	echo $b[0];
}
?>