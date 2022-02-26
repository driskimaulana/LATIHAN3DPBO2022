<?php

include "Pc.php";

// create new instance for hardware class
$processor = new Processor("Intel Core I89", 10000000);
$disk = new Disk();
$disk->setType("SSD");
$disk->setPrice(800000);
$disk->setCapacity("512GB");
$ram = new Ram("16GB", 2000000);

// create new pc class instance
$pc = new Pc($processor, $disk, $ram);

$pc->ShowClass();
