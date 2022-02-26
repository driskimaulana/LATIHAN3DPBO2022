from dis import dis
from Processor import Processor
from Disk import Disk
from Ram import Ram


class Pc:
    # class attribute
    __processor = Processor()
    __disk = Disk()
    __ram = Ram()
    __totalPrice = 0

    # constructors
    def __init__(self, processor, disk, ram):
        self.__processor = processor
        self.__disk = disk
        self.__ram = ram
        self.__totalPrice = processor.getPrice() + disk.getPrice() + ram.getPrice()

    # getter and setter
    def setProcessor(self, processor):
        self.__processor = processor

    def getProcessor(self):
        return self.__processor

    def setDisk(self, disk):
        self.__disk = disk

    def getDisk(self):
        return self.__disk

    def setRam(self, ram):
        self.__ram = ram

    def getRam(self):
        return self.__ram

    def setTotalPrice(self, processorPrice, diskPrice, ramPrice):
        self.__totalPrice = processorPrice + diskPrice + ramPrice

    def getTotalPrice(self):
        return self.__totalPrice

    # shows class method
    def ShowClass(self):
        print("	PC SPECS")
        print("PC Price	: " + str(self.__totalPrice))
        print("==========================")
        print("	PROCESSOR")
        print("==========================")
        print("Processor Name	: " + self.__processor.getName())
        print("Processor Price	: " + str(self.__processor.getPrice()))
        print("==========================")
        print("	DISK")
        print("==========================")
        print("Disk Type	: " + self.__disk.getType())
        print("Disk Capacity: " + self.__disk.getCapacity())
        print("Disk Price	: " + str(self.__disk.getPrice()))
        print("==========================")
        print("	RAM")
        print("==========================")
        print("RAM Capacity	: " + self.__ram.getCapacity())
        print("RAM Price	: " + str(self.__ram.getPrice()))
