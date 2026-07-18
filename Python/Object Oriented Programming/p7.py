# class Discount:
#     def calcDisc(self, d):
#         discount = d * 10 / 100
#         return discount

# class GST:
#     def calcGST(self, g):
#         gst = g * 18 / 100
#         return gst

# class Product(Discount, GST):
#     def setInfo(self):
#         self.name = input("Enter Product Name: ")
#         self.price = int(input("Enter Product Price: "))
#         self.qty = int(input("Enter Quantity: "))

#     def calcBill(self):
#         total = self.price * self.qty
#         discount = self.calcDisc(total)
#         afterDisc = total - discount
#         gst = self.calcGST(afterDisc)
#         final_bill = afterDisc + gst

#         print("\n----- BILL -----")
#         print("Product Name         :", self.name)
#         print("Price                :", self.price)
#         print("Quantity             :", self.qty)
#         print("Total Amount         :", total)
#         print("Discount             :", discount)
#         print("After Discount Price :", afterDisc)
#         print("GST                  :", gst)
#         print("Final Bill           :", final_bill)

# p = Product()
# p.setInfo()
# p.calcBill()

# ----------------------------------------------------------------------------------

class Discount:
    def __init__(self, d):
      self.dprice = d

    def calcDisc(self, dis):
      return (dis * self.dprice) /100
   
class GST:
    def __init__(self, adp):
      pass
      
    def calcGST(self, adp):
      return adp * 0.18
   
class Product(Discount, GST):
    def __init__(self, n, p, q):
      self.name = n
      self.price = p
      self.qty = q
      Discount.__init__(self, p*q)
      GST.__init__(self, p*q)

    def calcBill(self):
        total = self.price * self.qty
        disc = self.calcDisc(10)
        afterDiscount = total - disc
        gst = self.calcGST(afterDiscount)
        final = afterDiscount + gst

        print("\n----- BILL -----")
        print("Product Name         :", self.name)
        print("Price                :", self.price)
        print("Quantity             :", self.qty)
        print("Total Amount         :", total)
        print("Discount             :", disc)
        print("After Discount Price :", afterDiscount)
        print("GST                  :", gst)
        print("Final Bill           :", final)

p = Product("ABC", 100, 10)
p.calcBill()