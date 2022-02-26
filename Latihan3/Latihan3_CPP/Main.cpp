#include <iostream>
#include "Pc.cpp"

using namespace std;

int main()
{
	// create new pc instance
	Pc pc;

	Processor processor;
	processor.setName("Intel i9");
	processor.setPrice(2000000);

	Ram ram = Ram("16GB", 1000000);

	Disk disk = Disk("SSD", "3TB", 3000000);

	pc.setDisk(disk);
	pc.setProcessor(processor);
	pc.setRam(ram);
	pc.setTotalPrice(processor.getPrice(), ram.getPrice(), disk.getPrice());

	// show class instance
	pc.ShowClass();

	return (0);
}