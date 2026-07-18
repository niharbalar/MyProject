# STUDENT REPORT CARD GENERATOR:-

# METHOD 1:-

# with open("./files/demo1.txt", "r") as file:
#     for x in file:
#         x = x.strip()
#         if x:
#             marks = x.split(",")
#             name = marks[0]
#             m1 = int(marks[1])
#             m2 = int(marks[2])
#             m3 = int(marks[3])
            
#             percentage = (m1 + m2 + m3) / 3
            
#             print(name, "-> Percentage:", (percentage), "%") 



# METHOD 2:-

# with open("./files/demo1.txt", "r") as file:
#     data = file.readlines()

#     for x in data:
#         items = x.split(',')

#         total = 0
#         subject = 0

#         for i in range(len(items)):
#             y = items[i].strip()
#             # print(type(items[i]), isinstance(items[i], int), y.isdigit())
#             if y.isdigit():
#                 total += int(items[i])
#                 subject += 1
#             else:
#                 print(f"Name: {items[0]}")

#         print(f"Total:{total}")
#         print(f"Percentage:{total / subject}")
        
# ---------------------------------------------------------------------------------

# EMPLOYEE ATTENDANCE SYSTEM:-

# METHOD 1:-

# count = {}

# with open("./files/demo1.txt", "r") as file:
#     for x in file:
#         x = x.strip()
#         if x:
#             id, name = x.split(",")
#             if name in count:
#                 count[name] = count[name] + 1
#             else:
#                 count[name] = 1

# for name in count:
#     print(name, "->", count[name], "Days")


# METHOD 2:-

# with open("./files/demo1.txt", "r") as file:
#     data = file.readlines()

#     attendance = {}

#     for x in data:
#         id, name = x.split(',')

#         if id in attendance:
#             attendance[id]["days"] += 1
#         else:
#             attendance[id] = {
#                 "name" : name.strip(),
#                 "days" : 1
#             }

#     for v in attendance.values():
#         print(f"{v['name']} -> {v['days']} days")

# ---------------------------------------------------------------------------------

# LOGUN SYSTEM:-

with open("./files/demo1.txt", "r") as file:
    data = file.readlines()

    u = input("Enter your Username:")
    p = input("Enter your Password:")

    auth = False

    for x in data:
        username, password = x.split(",")

        if u == username.strip() and p == password.strip():
            auth = True

    if auth:
        print("Successfully Logged in")
    else:
        print("Incorrect username or password")