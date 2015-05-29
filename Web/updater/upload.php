<?php if(isset($_POST['versi'])) {
	$versi 			= $_POST['versi'];
	$log_data		= $_POST['log_data'];
	$sqlupdate		= $_POST['db_update'];
	$namafile		= $_FILES['berkas']['name'];
	$temp_file		= $_FILES['berkas']['tmp_name'];
	mkdir("berkas/".$versi, 0777);
	$folder			= "berkas/".$versi."/".$namafile;
	$alamat			= $_SERVER['SERVER_NAME']."/p3m/OnlineScoreManagement/updater/".$folder;
	$a 				= move_uploaded_file($temp_file, $folder);
	@mysql_query("INSERT INTO berkas (`versi`, `alamat`, `namafile`, `log_data`, `db_update`) values ('".$versi."', '".$alamat."', '".$namafile."', '".$log_data."', '".$sqlupdate."')");
	header("Location: index.php");
}
?>
<form method="POST" action="" enctype="multipart/form-data">
<table style="width:100%">
<tr>
<td>Versi</td>
<td><input type="text" name="versi" required></td>
</tr>
<tr>
<td>Berkas</td>
<td><input type="file" name="berkas" required></td>
</tr>
<tr>
<td>Log Data</td>
<td><textarea type="text" name="log_data" required></textarea></td>
</tr>
<tr>
<td>DB Update</td>
<td><textarea type="text" name="db_update" required></textarea></td>
</tr>
<tr>
<td></td>
<td><button type="submit">Submit</button></td>
</tr>
</table>
</form>