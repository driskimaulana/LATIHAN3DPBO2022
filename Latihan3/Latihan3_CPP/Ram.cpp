class Ram
{
private:
	/* data */
	// class attribute
	int capacity;
	int price;

public:
	Ram(/* args */){};

	Ram(int capacity, int price)
	{
		this->capacity = capacity;
		this->price = price;
	};

	// getter and setter
	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	};

	int getCapacity()
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