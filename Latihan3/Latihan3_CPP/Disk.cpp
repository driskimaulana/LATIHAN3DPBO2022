#include <string>

using namespace std;

class Disk
{
private:
	/* data */
	// class attribute
	string type;
	string capacity;
	int price;

public:
	Disk(/* args */){};
	// constructors
	Disk(string type, string capacity, int price)
	{
		this->type = type;
		this->capacity = capacity;
		this->price = price;
	}

	// getter and setter
	void setType(string type)
	{
		this->type = type;
	};

	string getType()
	{
		return this->type;
	};

	void setCapacity(string capacity)
	{
		this->capacity = capacity;
	};

	string getCapacity()
	{
		return this->capacity;
	};

	void setPrice(int price)
	{
		this->price = price;
	};

	int getPrice()
	{
		return this->price;
	}

	// destructors
	~Disk(){};
};
