class Processor:
    # class attribute
    __name = ""
    __price = 0

    # constructors
    def __init__(self, name="", price=0):
        self.__name = name
        self.__price = price

    # getter and setter
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name

    def SetPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price
