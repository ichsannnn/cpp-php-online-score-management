<?php 
	include 'koneksi.php';
	$error = "";
	if(isset($_POST)){
		$nis = $_POST['nis'];
		$pin = $_POST['pin'];
		$sqllogin = $conn->prepare("SELECT * FROM siswa where nisn = '$nis' AND nis = '$pin'");
		$sqllogin->execute();
		$login = $sqllogin->fetch(PDO::FETCH_NUM);
		if($login>0){
			$sqlsiswa = $conn->prepare("SELECT * FROM siswa where nisn = '$nis' AND nis = '$pin'");
			$sqlsiswa->execute();
			$siswa = $sqlsiswa->fetch(PDO::FETCH_ASSOC);
			$_SESSION['idsiswa'] = $siswa['id_siswa'];
			$_SESSION['nam_sis'] = $siswa['nama'];
			$_SESSION['nisn'] = $siswa['nisn'];
			$_SESSION['kelas'] = $siswa['kelas'];
			
			$sqlkelas = $conn->prepare("SELECT * FROM kelas where kelas = '".$_SESSION['kelas']."'");
			$sqlkelas->execute();
			$kelas = $sqlkelas->fetch(PDO::FETCH_ASSOC);
			$_SESSION['idkelas'] = $kelas['id_kelas'];
			header('location:index.php?osm=rapot');
		}
		else{
			$error = "NISN atau PIN salah";
			header('Location: index.php?osm=logfailed');
		}
	}
?>