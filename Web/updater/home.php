<table>
	<thead>
		<th>No</th>
		<th>Nama Berkas</th>
		<th>Versi</th>
		<th>Alamat</th>
		<th>Log Data</th>
		<th>SQL Update</th>
	</thead>
	<?php
	$a = @mysql_query("select * from berkas order by id asc");
	$i = 1;
	while($b = @mysql_fetch_array($a)) {
		?>
		<tbody>
			<tr>
				<td><?php echo $i; ?></td>
				<td><?php echo $b['namafile']; ?></td>
				<td><?php echo $b['versi']; ?></td>
				<td><?php echo $b['alamat']; ?></td>
				<td><?php echo $b['log_data']; ?></td>
				<td><?php echo $b['db_update']; ?></td>
			</tr>
		</tbody>
		<?php
		$i++;
		}
		?>
</table>