# from datetime import date, time, datetime, timedelta, timezone
# from dateutil.relativedelta import relativedelta

# ---------------------------------------------------------------------------------

# DAYS LEFT UNTIL EXAM:-

# exam_date = date(2026, 8, 9)
# today = date.today()

# days_left = (exam_date - today).days

# print(days_left)

# ---------------------------------------------------------------------------------

# OTP EXPIRY (5 MINTUES):-

# gt = datetime.now()
# et = gt + timedelta(minutes=5)

# print("OTP generated at:", gt.strftime("%I:%M:%S %p"))
# print("OTP expires at:", et.strftime("%I:%M:%S %p"))

# ---------------------------------------------------------------------------------

# CHECK IF OFFICE IS OPEN (9 AM TO 6 PM):-

# openTime = "09:00"
# closeTime = "18:00"

# openTime_dt = datetime.strptime(openTime, "%H:%M").time()
# closeTime_dt = datetime.strptime(closeTime, "%H:%M").time()

# enterTime = datetime.now().time()

# print(enterTime)

# if openTime_dt <= enterTime <= closeTime_dt:
#     print("Office Open")
# else:
#     print("Office Closed")

# ---------------------------------------------------------------------------------

# ATTENDANCE CHECK (EMPLOYEE IS LATE IF THEY ARRIVE AFTER 09:00):-

# et = input("Enter Time (HH:MM)")

# et_dt = datetime.strptime(et, "%H:%M").time()

# entryTime = datetime.strptime("09:00", "%H:%M").time()

# if et_dt >= entryTime:
#     print("You arrived late")
# else:
#     print("You arrived on time")

# ---------------------------------------------------------------------------------

# GREETINGS BASED ON TIME:-

# ct = input("Enter Time (HH:MM)")

# ct_dt = datetime.strptime(ct, "%H:%M").hour

# if 5 <= ct_dt < 12:
#     print("Good morning")
# elif 12 <= ct_dt < 17:
#     print("Good afternoon")
# elif 17 <= ct_dt < 22:
#     print("Good evening")
# else:
#     print("Good night")

# ---------------------------------------------------------------------------------

# EMPLOYEE LOGIN LOGGER:-

# while True:
#     name = input("Enter your name: ")
#     et = datetime.now()

#     with open("./files/demo1.txt", "a") as file:
#         file.write(f"{name}->{et.strftime('%Y-%m-%d %H:%M:%S')}\n")

#     choice = input("Do you want to exit(y/n):")

#     if choice == 'y':
#         break

# with open("./files/demo1.txt", "r") as file:
#     data = file.readlines()

#     for x in data:
#         name, entryTime = x.split("->")
#         print(name,entryTime)

# ---------------------------------------------------------------------------------

# DAILY NOTES:-

# while True:
#     notes = input("Enter your notes: ")
#     et = date.today()

#     with open("./files/demo1.txt", "a") as file:
#         file.write(f"{et.strftime('%Y-%m-%d')}->{notes}\n")

#     choice = input("Do you want to exit(y/n):")

#     if choice == 'y':
#         break

# allTask = {}

# with open("./files/demo1.txt", "r") as file:
#     data = file.readlines()

#     for x in data:
#         dt, task = x.split("->")
        
#         if dt in allTask:
#             allTask[dt].append(task)
#         else:
#             allTask[dt] = [task]

#     for k, v in allTask.items():
#         print(k)

#         for x in v:
#             print(x.strip())

#         print()

# ---------------------------------------------------------------------------------