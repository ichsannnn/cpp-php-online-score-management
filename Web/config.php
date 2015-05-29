<?php
class pdo_class extends PDO{
	private $engine;
	private $host;
	private $database;
	private $user;
	private $pass;
	private $result;

	public function __construct()
		{
		$this->engine = 'mysql';
		$this->host = '174.120.70.217';
		$this->database = 'ariefset_14_osm';
		$this->user = 'ariefset_tb';
		$this->pass = 'ichsan';
		$dns = $this->engine.':dbname='.$this->database.";host=".$this->host;
		parent::__construct( $dns, $this->user, $this->pass );
	}

	public function insert($table,$rows=null)
	{
		$command = 'INSERT INTO '.$table;
		$row = null; $value=null;
		foreach ($rows as $Key => $nilainya)
		{
			$row .=",".$key;
			$value .=", :".$key;
		}
		$command .="(".substr($row,1).")";
		$command .="VALUES(".substr($value,1).")";
		$stmt = parent::prepare($command);
		$stmt->execute($rows);
		$rowcount = $stmt->rowCount();
		return $rowcount;
	}

	public function delete($tabel,$where=null)
	{
		$command = 'DELETE FROM '.$tabel;

		$list = Array(); $parameter = null;
		foreach ($where as $key => $value)
		{
			$list[] = "$key = :$key";
			$parameter .= ', ":'.$key.'":"'.$value.'"';
		}
		$command .= ' WHERE '.implode(' AND ',$list);

		$json = "{".substr($parameter,1)."}";
		$param = json_decode($json,true);

		$query = parent::prepare($command);
		$query->execute($param);
		$rowcount = $query->rowCount();
		return $rowcount;
	}

	public function update($tabel, $fild=null,$where=null)
	{
		$update = 'UPDATE '.$tabel.' SET ';
		$set=null; $value=null;
		foreach($fild as $key => $values)
		{
			$set .= ', '.$key. ' = :'.$key;
			$value .= ', ":'.$key. '":"'.$values.'"';
		}
		$update .= substr(trim($set),1);
		$json = '{'.substr($value,1).'}';
		$param = json_decode($json,true);

		if($where != null)
		{
			$update .= ' WHERE '.$where;
		}

		$query = parent::prepare($update);
		$query->execute($param);
		$rowcount = $query->rowCount();
		return $rowcount;
	}

	public function select($table,$rows,$where=null,$order=null,$limit=null)
	{
		$command = 'SELECT '.$rows.' FROM '.$table;
		if($where != null)
			$command.=' WHERE '.$where;
		if($order != null)
			$command.=' ORDER BY '.$order;
		if($limit != null)
			$command.=' LIMIT '.$limit;

			$query = parent::prepare($command);
			$query->execute();

			$posts = array();
			while($row = $query->fetch(PDO::FETCH_ASSOC))
			{
				$posts[] = $row;
			}
			return $this->result = $posts;
	}

	public function getResult()
	{
		return $this->result;
	}

}

?>