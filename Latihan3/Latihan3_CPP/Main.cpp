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

	Ram ram = Ram(8, 1000000);

	Disk disk = Disk("SSD", 512, 800000);

	pc.setDisk(disk);
	pc.setProcessor(processor);
	pc.setRam(ram);
	pc.setTotalPrice(processor.getPrice(), ram.getPrice(), disk.getPrice());

	// show class
	cout << "Processor Name  : " << pc.getProcessor().getName() << endl;
	cout << "Processor Price : " << pc.getProcessor().getPrice() << endl;
	cout << "Ram Capacity	: " << pc.getRam().getCapacity() << " GB" << endl;
	cout << "Ram Price	: " << pc.getRam().getPrice() << endl;
	cout << "Disk Type	: " << pc.getDisk().getType() << endl;
	cout << "Disk Capacity	: " << pc.getDisk().getCapacity() << " GB" << endl;
	cout << "Disk Price	: " << pc.getDisk().getPrice() << endl;
	cout << "Total Price	: " << pc.getTotalPrice() << endl;

	return (0);
}