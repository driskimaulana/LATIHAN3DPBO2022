public class Main {

	public static void main(String[] args) {
		// create new class instance
		Pc pc = new Pc();

		// create new instance for all the hardware
		Processor processor = new Processor("Intel Core I9", 2000000);

		Disk disk = new Disk();
		disk.setType("SSD");
		disk.setCapacity("2TB");
		disk.setPrice(800000);

		Ram ram = new Ram("32GB", 1000000);

		// set pc class with the attribute hardware
		pc.setProcessor(processor);
		pc.setDisk(disk);
		pc.setRam(ram);
		pc.setTotalPrice(processor.getPrice(), disk.getPrice(), ram.getPrice());

		// shows the pc
		pc.ShowClass();

	}

}
