#include <string>

using namespace std;

class Ram
{
private:
	/* data */
	// class attribute
	string capacity;
	int price;

public:
	Ram(/* args */){};

	Ram(string capacity, int price)
	{
		this->capacity = capacity;
		this->price = price;
	};

	// getter and setter
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
	};

	// destructors
	~Ram(){};
};