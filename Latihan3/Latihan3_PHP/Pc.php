<?php

include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc
{

	// class attribute
	private $processor;
	private $disk;
	private $ram;
	private $totalPrice;

	// constructors
	public function Pc($processor, $disk, $ram)
	{
		$this->processor = $processor;
		$this->disk = $disk;
		$this->ram = $ram;
		$this->totalPrice = $processor->getPrice() + $disk->getPrice() + $ram->getPrice();
	}

	// getter and setter
	public function setProcessor($processor)
	{
		$this->processor = $processor;
	}

	public function getProcessor()
	{
		return $this->processor;
	}

	public function setDisk($disk)
	{
		$this->disk = $disk;
	}
	public function getDisk()
	{
		return $this->disk;
	}

	public function setRam($ram)
	{
		$this->ram = $ram;
	}

	public function getRam()
	{
		return $this->ram;
	}

	public function setTotalPrice($processorPrice, $diskPrice, $ramPrice)
	{
		$this->totalPrice = $processorPrice + $diskPrice + $ramPrice;
	}

	public function getTotalPrice()
	{
		return $this->totalPrice;
	}

	// show class method
	public function ShowClass()
	{
		echo "	PC SPECS" . "<br>";
		echo "PC Price	: " . $this->totalPrice . "<br>";
		echo "================================" . "<br>";
		echo "	PROCESSOR" . "<br>";
		echo "================================" . "<br>";
		echo "Processor Name	: " . $this->getProcessor()->getName() . "<br>";
		echo "Processor Price	: " . $this->getProcessor()->getPrice() . "<br>";
		echo "================================" . "<br>";
		echo "	DISK" . "<br>";
		echo "================================" . "<br>";
		echo "Disk Type	: " . $this->getDisk()->getType() . "<br>";
		echo "Disk Capacity	: " . $this->getDisk()->getCapacity() . "<br>";
		echo "Disk Price	: " . $this->getDisk()->getPrice() . "<br>";
		echo "================================" . "<br>";
		echo "	RAM" . "<br>";
		echo "================================" . "<br>";
		echo "RAM Capacity	: " . $this->getRam()->getCapacity() . "<br>";
		echo "RAM Price	: " . $this->getRam()->getPrice() . "<br>";
	}
}
