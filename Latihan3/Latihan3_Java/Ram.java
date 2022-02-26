public class Ram {

	// class attribute
	String capacity;
	int price;

	// construcotrs
	Ram() {
	}

	Ram(String capacity, int price) {
		this.capacity = capacity;
		this.price = price;
	}

	// getter and setter
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
