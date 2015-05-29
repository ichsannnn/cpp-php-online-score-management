<?php
include('koneksi.php');
 
session_start();
	{
		<head>
		<style>
	<link rel="shortcut icon" href="img/itac.png" />
	<title>OSM</title>
	<link rel="stylesheet" href="style.css" type="text/style" />
			<body style="background-color:#00FA9A">
			<div class="header" style="background:transparent">
			<div class="logo">
	} 
		</style>
		</head>
//tangkap data dari form login
$username = $_POST['username'];
$password = $_POST['password'];
 
//untuk mencegah sql injection
//kita gunakan mysql_real_escape_string
$username = mysql_real_escape_string($username);
$password = mysql_real_escape_string($password);
 
//cek data yang dikirim, apakah kosong atau tidak
if (empty($username) && empty($password)) {
    //kalau username dan password kosong
    header('location:home.php?error=1');
    break;
} else if (empty($username)) {
    //kalau username saja yang kosong
    header('location:login.php?error=2');
    break;
} else if (empty($password)) {
    //kalau password saja yang kosong
    header('location:login.php?error=3');
    break;
}
 
$q = mysql_query("select * from user where username='$username' and password='$password'");
 
if (mysql_num_rows($q) == 1) {
	//kalau username dan password sudah terdaftar di database
	//buat session dengan username dengan isi nama user yang login
	$_SESSION['username'] = $username;

	//redirect ke halaman index
	header('location:index.php');
} else {
	//kalau username ataupun password tidak terdaftar didatabase
	header('location:log.php?error=4');
}
// membuat koneksi ke server
$koneksi = @mysql_connect("localhost","root","") or die (mysql_error());
 
if ($koneksi){
// jika berhasil koneksi ke server, pilih db
    @mysql_select_db("osm", $koneksi);
}
 
// jika tombol Login sudan di klik
if (isset($_POST['submit'])){
    $username = $_POST['username'];
    $password = md5($_POST['password']);
 
// query sql nya
$sql = "SELECT * FROM tb_user WHERE username = '$username' AND password = '$password'";
 
// execute query sql
$query = mysql_query($sql) or die (mysql_error());
 
// ambil datanya dan simpan dalam array
$hasil = mysql_fetch_array($query);
// hitung hasil query
$jumlah = mysql_num_rows($query);
 
if ($jumlah > 0){
    /* jika datanya ketemu, mulai membuat session
    * yg nilai dari sessionnya diambil dari tabel
    */
    session_start();
    $_SESSION['username'] = $hasil['username'];
    $_SESSION['password'] = $hasil['password'];
 
    // arahkan ke halaman administrator, misal didalam folder "admin"
    header("location:admin/index.php");
}
 
else {
    // data tidak ketemu
    echo "Username atau password salah";
}
}
?>