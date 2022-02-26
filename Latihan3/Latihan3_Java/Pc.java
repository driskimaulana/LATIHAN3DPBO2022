public class Pc {

	// class attribute
	Processor processor;
	Disk disk;
	Ram ram;
	int totalPrice;

	// constructors
	Pc() {
	}

	Pc(Processor processor, Disk disk, Ram ram) {
		this.processor = processor;
		this.disk = disk;
		this.ram = ram;
		this.totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice();
	}

	// getter and setter
	public void setProcessor(Processor processor) {
		this.processor = processor;
	}

	public Processor getProcessor() {
		return processor;
	}

	public void setDisk(Disk disk) {
		this.disk = disk;
	}

	public Disk getDisk() {
		return disk;
	}

	public void setRam(Ram ram) {
		this.ram = ram;
	}

	public Ram getRam() {
		return ram;
	}

	public void setTotalPrice(int processorPrice, int diskPrice, int ramPrice) {
		this.totalPrice = processorPrice + diskPrice + ramPrice;
	}

	public int getTotalPrice() {
		return totalPrice;
	}

	// show class method
	public void ShowClass() {
		System.out.println("	PC SPECS");
		System.out.println("PC Price	: " + this.totalPrice);
		System.out.println("=========================");
		System.out.println("	PROCESSOR");
		System.out.println("=========================");
		System.out.println("Processor	: " + this.processor.getName());
		System.out.println("Processor Price : " + this.processor.getPrice());
		System.out.println("=========================");
		System.out.println("	DISK");
		System.out.println("=========================");
		System.out.println("Disk Type 	: " + this.disk.getType());
		System.out.println("Disk Capacity   : " + this.disk.getCapacity());
		System.out.println("Disk Price 	: " + this.disk.getPrice());
		System.out.println("=========================");
		System.out.println("	RAM");
		System.out.println("=========================");
		System.out.println("RAM Capacity 	: " + this.ram.getCapacity());
		System.out.println("RAM Price	: " + this.ram.getPrice());
	}
}
