<?php

class Ram
{
	// class attribute
	private $capacity;
	private $price;

	// constructors
	public function Ram($capacity = "", $price = 0)
	{
		$this->capacity = $capacity;
		$this->price = $price;
	}

	// getter and setter
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
