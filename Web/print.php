<?php
include "config.php";
include "koneksi.php";
require_once("dompdf/dompdf_config.inc.php");
$db = new pdo_class();
$db->select("siswa","*");
$data = $db->getResult();
ob_start();
?>
<link rel="stylesheet" type="text/css" href="css/style.css">
<link rel="stylesheet" type="text/css" href="css/font-awesome.css">
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
	</table>
	
	<div style="position:absolute;bottom:0;right:0;">
		Copyrights &copy; frcity.blogspot.com
	</div>
	<?php
	$html = ob_get_clean();
	$dompdf = new DOMPDF();
	$dompdf->load_html($html);
	$dompdf->set_paper("A3", "Potrait");
	$dompdf->render();

	$dompdf->stream("dompdf_out.pdf",array("Attachment" => false));
	?>
