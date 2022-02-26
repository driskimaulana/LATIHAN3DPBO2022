public class Processor {

	// class attribute
	String name;
	int price;

	// empty constructors
	Processor() {
	}

	// constructors
	Processor(String name, int price) {
		this.name = name;
		this.price = price;
	}

	// getter and setter
	public void setName(String name) {
		this.name = name;
	}

	public String getName() {
		return name;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public int getPrice() {
		return price;
	}

}
