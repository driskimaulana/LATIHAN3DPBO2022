#include <string>

using namespace std;

class Processor
{
private:
	/* data */
	// class attribute
	string name;
	int price;

public:
	Processor(/* args */){};

	Processor(string name, int price)
	{
		this->name = name;
		this->price = price;
	}

	// getter and setter
	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return this->name;
	}

	void setPrice(int price)
	{
		this->price = price;
	}

	int getPrice()
	{
		return this->price;
	}

	// destructors
	~Processor(){};
};
