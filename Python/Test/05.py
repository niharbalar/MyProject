# PROGRAM 1:-

# company = {
#     "name": "John (CEO)",
#     "employees": [
#         {
#             "name": "Alice (HR Manager)",
#             "employees": [
#                 {"name": "David (HR Executive)", "employees": []},
#                 {"name": "Emma (HR Executive)", "employees": []}
#             ]
#         },
#         {
#             "name": "Bob (IT Manager)",
#             "employees": [
#                 {"name": "Kevin (Developer)", "employees": []},
#                 {"name": "Sophia (Developer)", "employees": []},
#                 {"name": "Ryan (Tester)", "employees": []}
#             ]
#         }
#     ]
# }

# def display(data, level = 0):
#     for k, v in data.items():
#         if isinstance(v, list):
#             for x in v:
#                 display(x, level + 1)
#         else:
#             print(" " * level + v)

# display(company)

# ----------------------------------------------------------------------------------

# PROGRAM 2:-

# import os

# def fileExpo(path, level=0):
#     for x in os.listdir(path):
#         fullPath = os.path.join(path, x)
        
#         if os.path.isdir(fullPath):
#             print(" " * level + x)
#             fileExpo(fullPath, level + 1)
#         else:
#            print(" " * level + x)

# fileExpo("D:\\C")

# ----------------------------------------------------------------------------------

# PROGRAM 3:-

# class Discount:
#     def __init__(self, d):
#       self.dprice = d

#     def calcDisc(self, dis):
#       return (dis * self.dprice) /100
   
# class GST:
#     def __init__(self, adp):
#       pass
      
#     def calcGST(self, adp):
#       return adp * 0.18
   
# class Product(Discount, GST):
#     def __init__(self, n, p, q):
#       self.name = n
#       self.price = p
#       self.qty = q
#       Discount.__init__(self, p*q)
#       GST.__init__(self, p*q)

#     def calcBill(self):
#         total = self.price * self.qty
#         disc = self.calcDisc(10)
#         afterDiscount = total - disc
#         gst = self.calcGST(afterDiscount)
#         final = afterDiscount + gst

#         print("\n----- BILL -----")
#         print("Product Name         :", self.name)
#         print("Price                :", self.price)
#         print("Quantity             :", self.qty)
#         print("Total Amount         :", total)
#         print("Discount             :", disc)
#         print("After Discount Price :", afterDiscount)
#         print("GST                  :", gst)
#         print("Final Bill           :", final)

# p = Product("ABC", 100, 10)
# p.calcBill()

# ----------------------------------------------------------------------------------

# PROGRAM 4:-

# class Vehicle:
#     def __init__(self, n, p):
#         self.name = n
#         self.price = p

# class Fuel(Vehicle):
#     def __init__(self, n, p, f):
#         super().__init__(n, p)
#         self.fuel = f

# class Battery(Fuel):
#     def __init__(self, n, p, f, b):
#         super().__init__(n, p, f)
#         self.battery = b

#     def dispInfo(self):
#         road_tax = self.price * 0.08
#         total = self.price + road_tax
#         print("\nVehicle Name:", self.name)
#         print("Price:", self.price)
#         print("Fuel Type:", self.fuel)
#         print("Battery Capacity:", self.battery)
#         print("Road Tax:", road_tax)
#         print("Final Price:", total)

# name = input("Enter vehicle name: ")
# price = int(input("Enter vehicle price: "))
# fuel = input("Enter fuel type: ")
# battery = int(input("Enter battery capacity: "))

# b = Battery(name, price, fuel, battery)
# b.dispInfo()

# ----------------------------------------------------------------------------------

# PROGRAM 5:-

from datetime import datetime, time, date, timedelta

with open("./files/demo.txt", "a") as file:
    while True:
        name = input("Enter Medicine Name: ")
        purchase = input("Enter Purchase Date (DD-MM-YYYY): ")
        expiry = input("Enter Expiry Date (DD-MM-YYYY): ")

        file.write(f"{name},{purchase},{expiry}\n")

        choice = input("Do you want to exit (y/n): ")

        if choice == "y":
            break
