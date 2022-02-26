class Disk:
    # class attribute
    __capacity = ""
    __price = 0
    __type = ""

    # constructors
    def __init__(self, tipe="", capacity=0, price=0):
        self.__capacity = capacity
        self.__type = tipe
        self.__price = price

    # setter and getter
    def setType(self, tipe):
        self.__type = tipe

    def getType(self):
        return self.__type

    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price
