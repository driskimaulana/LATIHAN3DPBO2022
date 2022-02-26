class Ram:
    # class attribute
    __capacity = ""
    __price = 0

    # constructors
    def __init__(self, capacity="", price=0):
        self.__capacity = capacity
        self.__price = price

    # getter and setter
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price
