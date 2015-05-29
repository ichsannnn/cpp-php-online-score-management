<?php
include 'koneksi.php';
if(!isset($_SESSION['nisn'])) {
	header("Location: index.php");
}
?>
<div class="clearfix" id="page">
	<table class="desc">
		<tr class="tr1">
			<td class="td1">Nama</td>
			<td class="td1">:</td>
			<td class="td1"><?php echo $_SESSION['nam_sis']; ?></td>
		</tr>
		<tr class="tr1">
			<td class="td1">NISN</td>
			<td class="td1">:</td>
			<td class="td1"><?php echo $_SESSION['nisn']; ?></td>
		</tr>
	</table>
	<table border="0" class="rapot">
		<tr>
			<th rowspan="2">No.</th>
			<th rowspan="2">Mata Pelajaran</th>
			<th colspan="3">Nilai Kompetensi</th>
			<th rowspan="2">KKM</th>
			<th rowspan="2">Keterangan</th>
		</tr>
		 <tr>
			<th>Pengetahuan</th>
			<th>Keterampilan</th>
			<th>Sikap</th>
		</tr>
		<tr>
			<?php
				$no = 1; 
				$sqlpel = "SELECT *FROM pelajaran where id_kelas = '$_SESSION[idkelas]' ORDER by id_matpel ASC";
				foreach ($conn->query($sqlpel) as $pelajaran) {
					$idmatpel = $pelajaran['id_matpel'];
					$sqlnilai = $conn->prepare("SELECT * FROM nilai where id_matpel = '$idmatpel' AND id_siswa = '$_SESSION[idsiswa]' LIMIT 1");
					$sqlnilai->execute();
					$nilai = $sqlnilai->fetch(PDO::FETCH_ASSOC);
			?>
				<td><?php echo $no; $no++; ?></td>
				<td class="mapel"><?php echo $pelajaran['nammatpel']; ?></td>
				<td><?php echo $nilai['nilai_peng']; ?></td>
				<td><?php echo $nilai['nilai_ket']; ?></td>
				<td><?php echo $nilai['nilai_sikap']; ?></td>
				<td><?php echo $nilai['kkm']; ?></td>
				<td><?php echo $nilai['keterangan']; ?></td>
		</tr>	
				<?php
				}
			?>
	</table><br>
	<a href='javascript:print(document)'><img alt='print' src='http://1.bp.blogspot.com/-10ufvnCtIJM/UPo6JsA2VOI/AAAAAAAAVUY/MV8Pa2Kr7yI/s1600/iconprinter.png' title='Print This Page' />&#160;Print This Page</a>
</div>