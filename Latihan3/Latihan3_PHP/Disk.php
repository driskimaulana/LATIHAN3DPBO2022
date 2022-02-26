<?php

class  Disk
{
	// class attribute
	private $type;
	private $capacity;
	private $price;

	// constructors
	public function Disk($type = "", $capacity = "", $price = 0)
	{
		$this->type = $type;
		$this->capacity = $capacity;
		$this->price = $price;
	}

	// getter and setter
	public function setType($type)
	{
		$this->type = $type;
	}

	public function getType()
	{
		return $this->type;
	}

	public function setCapacity($capacity)
	{
		$this->capacity = $capacity;
	}

	public function getCapacity()
	{
		return $this->capacity;
	}

	public function setPrice($price)
	{
		$this->price = $price;
	}

	public function getPrice()
	{
		return $this->price;
	}

	// destructors
	function __destruct()
	{
	}
}
