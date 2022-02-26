from Disk import Disk
from Pc import Pc
from Processor import Processor
from Ram import Ram

# instantiate each hardware classes
processor = Processor(name="Intel Core I19", price=10000000)
disk = Disk()
disk.setType("SSD")
disk.setCapacity("5TB")
disk.setPrice(5000000)
ram = Ram("32GB", 4000000)

# craete instance for pc class
pc = Pc(processor, disk, ram)

pc.ShowClass()
