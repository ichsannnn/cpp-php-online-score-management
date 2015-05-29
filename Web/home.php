<?php include 'proc.php'; $error = ""; ?>
<div class="search">
	<div class=""><span class="">Masukan NIS atau NISN Dan PIN :</span></div>
	<div>
		<form id="1" action="proc.php" method="POST">
			<?php session_unset(); ?>
			<input type="text" name="nis" class="edit" placeholder="NISN"/>
			<input type="password" name="pin" class="edit" placeholder="PIN"/>
			<br><?php echo $error; ?>
		</form>
	</div>
	<div><button form="1" class="button">Cari</button></div>
</div>

