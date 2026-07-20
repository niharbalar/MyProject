class Payment:
    def pay (self):
        print ("Payment Module")

class UPI(Payment):
    def pay (self):
        print ("UPI Payment")

class CreditCard(Payment):
    def pay (self):
        print ("Credit Card Payment")

class Cash(Payment):
    def pay (self):
        print ("Cash Payment")

u = UPI()
u.pay()

c = CreditCard()
c.pay()

cs = Cash()
cs.pay()