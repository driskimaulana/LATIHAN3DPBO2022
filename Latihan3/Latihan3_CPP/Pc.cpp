#include "Processor.cpp"
#include "Ram.cpp"
#include "Disk.cpp"

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

	// destructors
	~Pc(){};
};