<?php
include "koneksi.php";
?>
<html>
	<head>
		<link rel="stylesheet" type="text/css" href="css/style.css">
		<link rel="stylesheet" type="text/css" href="css/font-awesome.css">
		<link rel="icon" type="image/png" href="img/favicon.png">
	</head>
	<body>
		<div class="navbar">
			<span class="text">Selamat datang di<br><span class="fa fa-book">&nbsp;</span><a href="index.php"><span class="text-navbar-rapot">Rapot</span> <span class="text-navbar-online">Online</span></a></span>
		</div>
		<div class="container">
			<div class="body">
				<?php
					if(!isset($_GET['osm'])) {
						echo "<title>Rapot Online</title>";
						include 'home.php';
					} else {
						if($_GET['osm']=="home") {
							echo "<title>Rapot Online</title>";
							include 'home.php';
						} elseif ($_GET['osm']=="rapot") {
							echo "<title>Rapot Online</title>";
							include 'rapot.php';
						} elseif ($_GET['osm']=="download") {
							echo "<title>Rapot Online</title>";
							include 'download.php';
						} elseif ($_GET['osm']=="logfailed") {
							echo "<title>Rapot Online</title>";
							include 'logfail.php';
						}else {
							echo "<title>Error 404</title>";
							include '404.php';
						}
					}0
				?>
			</div>
		</div>
		<div class="footer">&copy;<?php echo date("Y");?></div>
	</body>
</html>