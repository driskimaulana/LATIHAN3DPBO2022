<?php

class Processor
{
	// class attribute
	private $name;
	private $price;

	// constructors
	public function Processor($name = "", $price = 0)
	{
		$this->name = $name;
		$this->price = $price;
	}

	// getter and setter
	public function setName($name)
	{
		$this->name = $name;
	}
	public function getName()
	{
		return $this->name;
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
