#include <iostream>
#include <string>
#include "Processor.cpp"
#include "Ram.cpp"
#include "Disk.cpp"

using namespace std;

class Pc
{
private:
	/* data */
	// class attribute
	Processor processor;
	Ram ram;
	Disk disk;
	int totalPrice;

public:
	Pc(/* args */){};
	// constructors
	Pc(Processor processor, Ram ram, Disk disk)
	{
		this->disk = disk;
		this->ram = ram;
		this->processor = processor;
		this->totalPrice = disk.getPrice() + ram.getPrice() + disk.getPrice();
	};

	// getter and setter
	void setProcessor(Processor processor)
	{
		this->processor = processor;
	};

	Processor getProcessor()
	{
		return this->processor;
	};

	void setRam(Ram ram)
	{
		this->ram = ram;
	};

	Ram getRam()
	{
		return this->ram;
	};

	void setDisk(Disk disk)
	{
		this->disk = disk;
	};

	Disk getDisk()
	{
		return this->disk;
	};

	void setTotalPrice(int processorPrice, int ramPrice, int diskPrice)
	{
		this->totalPrice = processorPrice + ramPrice + diskPrice;
	}

	int getTotalPrice()
	{
		return this->totalPrice;
	}

	// show class method
	void ShowClass()
	{
		cout << "	PC SPECS" << endl;
		cout << "PC Price	: " << this->totalPrice << endl;
		cout << "=========================\n";
		cout << "	PROCESSOR\n";
		cout << "=========================\n";
		cout << "Processor Name  : " << this->processor.getName() << endl;
		cout << "Processor Price : " << this->processor.getPrice() << endl;
		cout << "=========================\n";
		cout << "	DISK\n";
		cout << "=========================\n";
		cout << "Disk Type	: " << this->disk.getType() << endl;
		cout << "Disk Capacity	: " << this->disk.getCapacity() << endl;
		cout << "Disk Price	: " << this->disk.getPrice() << endl;
		cout << "=========================\n";
		cout << "	RAM\n";
		cout << "=========================\n";
		cout << "Ram Capacity	: " << this->ram.getCapacity() << endl;
		cout << "Ram Price	: " << this->ram.getPrice() << endl;
	}

	// destructors
	~Pc(){};
};