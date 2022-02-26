public class Disk {

	// class attribute
	String type;
	String capacity;
	int price;

	// constructors
	Disk() {
	}

	Disk(String type, String capacity, int price) {
		this.type = type;
		this.capacity = capacity;
		this.price = price;
	}

	// getter and setter
	public void setType(String type) {
		this.type = type;
	}

	public String getType() {
		return type;
	}

	public void setCapacity(String capacity) {
		this.capacity = capacity;
	}

	public String getCapacity() {
		return capacity;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public int getPrice() {
		return price;
	}

}
