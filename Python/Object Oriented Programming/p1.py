class Building:
    companyName = "XYZ Pvt. Ltd"            # Class Variable

    def __init__(self, w, l):
        self.width = w
        self.length = l
        self.area = 0
        self.price = 0
        self.companyName = "XYZ Pvt. Ltd"

    def calcArea(self):
        self.area = self.width * self.length

    def calcDisc(self, d):
        disc = (self.price * 10) / 100

        print(f"Discount:{disc}")
        print(f"Price after Discount:{self.price - disc}")

    def calcPrice(self, p):
        self.price = self.area * p

    @classmethod
    def companyInfo(cls):
        print(f"{cls.companyName}")

    @classmethod
    def changeName(cls):
        cls.companyName = "GHI Pvt. Ltd"

    def dispInfo(self):
        print(f"Comapny Name:{self.companyName}")
        print(f"Area:{self.area}")
        print(f"Price:{self.price}")

Building.changeName()

b1 = Building(100, 80)
b1.companyName = "DEF Pvt. Ltd"
b1.length = 90
b1.calcArea()
b1.calcPrice(2000)
b1.companyInfo()
b1.dispInfo()
b1.calcDisc(10)

print("-------------------------------")

b2 = Building(100, 80)
b2.companyName = "DEF Pvt. Ltd"
b2.length = 90
b2.calcArea()
b2.calcPrice(2000)
b2.companyInfo()
b2.dispInfo()
b2.calcDisc(10)