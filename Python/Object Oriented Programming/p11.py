class Courier():
    def __init__(self, w):
        self.weight = w
        self.gram100 = 200
        self.gram500 = 400
        self.gram1000 = 800
        self.above1000 = 1500

    def deliveryCharge(self):
        print("Courier Charge")

class LocalCourier(Courier):
    def __init__(self, w):
        super().__init__(w)
        
    def deliveryCharge(self):
        dc = 0

        if self.weight <= 100:
            dc = self.gram100
        elif self.weight <= 500:
            dc = self.gram500
        elif self.weight <= 1000:
            dc = self.gram1000
        elif self.above1000 > 1000:
            dc = self.above1000

        print(f"Local Delivery Charge:{dc}")

class NationalCourier(Courier):
    def __init__(self, w):
        super().__init__(w)
        
    def deliveryCharge(self):
        dc = 0

        if self.weight <= 100:
            dc = self.gram100 + 30
        elif self.weight <= 500:
            dc = self.gram500 + 80
        elif self.weight <= 1000:
            dc = self.gram1000 + 200
        elif self.above1000 > 1000:
            dc = self.above1000 + 500

        print(f"National Delivery Charge:{dc}")

class InternationalCourier(Courier):
    def __init__(self, w):
        super().__init__(w)
        
    def deliveryCharge(self):
        dc = 0

        if self.weight <= 100:
            dc = self.gram100 + 100
        elif self.weight <= 500:
            dc = self.gram500 + 500
        elif self.weight <= 1000:
            dc = self.gram1000 + 1000
        elif self.above1000 > 1000:
            dc = self.above1000 + 2500

        print(f"International Delivery Charge:{dc}")

weight = int(input("Enter weight in grams: "))

l1 = LocalCourier(weight)
l1.deliveryCharge()

n1 = NationalCourier(weight)
n1.deliveryCharge()

i1 = InternationalCourier(weight)
i1.deliveryCharge()
