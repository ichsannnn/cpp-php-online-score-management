<?php
	include 'koneksi.php';
	mysql_query("truncate berkas");
	header("Location: index.php");
?>