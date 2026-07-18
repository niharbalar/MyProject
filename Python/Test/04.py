from datetime import date, time, datetime, timedelta, timezone

# -----------------------------------------------------------------------------------

# DAILY SALES RECORD:-  

# date = datetime.now().strftime("%d-%m-%Y")

# with open("./files/demo.txt", "a") as file:
#     while True:
#         product = input("Enter product name: ")
#         quantity = int(input("Enter quantity: "))
#         price = int(input("Enter price per item: "))

#         total = quantity * price

#         file.write(f"{date} | {product} | {quantity} | {price} | {total}\n")

#         choice = input("Do you want to exit (y/n): ")

#         if choice == "y":
#             break

# print("\nDaily Sales Record")
# print("Date | Product | Quantity | Price | Total Amount")

# with open("./files/demo.txt", "r") as file:
#     for x in file:
#         print(x.strip())
#         data = x.strip().split(" | ")
     
# -----------------------------------------------------------------------------------

# BIRTHDAY REMINDER:-   

# n = int(input("Enter number of persons: "))

# with open("./files/demo.txt", "w") as file:
#     for i in range(n):
#         name = input("Enter name: ")
#         dob = input("Enter date of birth (DD-MM-YYYY): ")
#         file.write(f"{name},{dob}\n")

# today = datetime.now()

# with open("./files/demo.txt", "r") as file:
#     check = False

#     for x in file:
#         name, dob = x.strip().split(",")

#         birthday = datetime.strptime(dob, "%d-%m-%Y")

#         if birthday.day == today.day and birthday.month == today.month:
#             print(f"\nHappy Birthday {name}!")
#             check = True

# -----------------------------------------------------------------------------------

# LIBRARY BOOK ISSUE SYSTEM:-   

# name = input("Enter Book Name: ")
# id = input("Enter ID: ")
# issue = input("Enter Issue Date (DD-MM-YYYY): ")

# with open("./files/demo.txt", "a") as file:
#     file.write(f"{name},{id},{issue}\n")

# today = datetime.today()

# with open("./files/demo.txt", "r") as file:
#     data = file.readlines()

# print("\nOverdue Books:\n")

# for x in data:
#     book_name, user_id, issue_date = x.strip().split(",")

#     issue_date = datetime.strptime(issue_date, "%d-%m-%Y")
#     days = (today - issue_date).days

#     if days > 15:
#         fine = (days - 15) * 10

#         print("Book Name :", book_name)
#         print("User ID :", user_id)
#         print("Issue Date :", issue_date.strftime("%d-%m-%Y"))
#         print("Days Kept :", days)
#         print("Fine : ₹", fine)

# -----------------------------------------------------------------------------------

# PARKING MANAGEMENT SYSTEM:-

# while True:
#     number = input("Enter car number: ")
#     entry = int(input("Enter entry hour (0-23): "))
#     exit = int(input("Enter exit hour (0-23): "))

#     total = exit - entry

#     if total <= 0:
#         print("Invalid entry and exit time.")
#     else:
#         fee = total * 30
#         d = datetime.now().strftime("%d-%m-%Y")

#         details = [
#             f"Date : {d}",
#             f"Car Number : {number}",
#             f"Entry Hour : {entry}",
#             f"Exit Hour : {exit}",
#             f"Total Hours : {total}",
#             f"Parking Fee : Rs. {fee}",
#             "--------------------------"
#         ]

#         with open("./files/demo.txt", "a") as file:
#             for x in details:
#                 file.write(f"{x}\n")

#     choice = input("\nDo you want to exit? (y/n): ")

#     if choice == "y":
#         break

# with open("./files/demo.txt", "r") as file:
#     data = file.readlines()

# print("\nParking Records")
# for y in data:
#     print(y, end="")

# -----------------------------------------------------------------------------------