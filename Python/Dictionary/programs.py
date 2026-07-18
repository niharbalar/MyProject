# FIND STUDENT PERCENTAGE:-

# d1 = {
#     "Maths" : 66,
#     "Physics" : 70,
#     "Chemistry" : 67
# }

# total = 0

# for k in d1.keys():
#     total += d1[k]

# per = (total / 300) * 100

# print(per)

# -----------------------------------------------------------------------------------

# MERGE TWO DICTIONARY:-

# d1 = {
#     "a" : 1,
#     "b" : 2
# }

# d2 = {
#     "c" : 3,
#     "d" : 4
# }

# d3 = {}

# for k in d1.keys():
#     d3[k] = d1[k]

# for k, v in d2.items():
#     d3[k] = v

# print(d3)

# -----------------------------------------------------------------------------------

# MOBILE CONTACT BOOK:-

# d1 = {
#     "A" : 11111,
#     "B" : 22222,
#     "C" : 33333,
#     "D" : 44444
# }

# search = input("Enter Name to Search: ")

# if search in d1:
#     print(d1[search])
# else:
#     print("Contact NOT Found.")

# -----------------------------------------------------------------------------------

# WORD FREQUENCY COUNTER:-

# text = input("Enter a sentence: ")
# word = text.split()

# count = {}

# for x in word:
#     if x in count:
#         count[x] += 1
#     else:
#         count[x] = 1

# print(count)

# -----------------------------------------------------------------------------------

# FIND TOPPER STUDENT USING NESTED DICTIONARY:-

# d1 = {
#     1: {
#         "Name" : "A",
#         "Per" : 84.7
#     },
#     2: {
#         "Name" : "B",
#         "Per" : 82.8
#     },
#     3: {
#         "Name" : "C",
#         "Per" : 75.6
#     },
#     4: {
#         "Name" : "D",
#         "Per" : 66.66
#     }
# }

# highest = 0
# name = ""

# for k, data in d1.items():
#     if data["Per"] > highest:
#         highest = data["Per"]
#         name = data["Name"]

# print(name)
# print(highest)

# -----------------------------------------------------------------------------------

#  COUNT STUDENTS PASSED:-

# d1 = {
#     1: {
#         "Name" : "A",
#         "Per" : 84.7
#     },
#     2: {
#         "Name" : "B",
#         "Per" : 24.5
#     },
#     3: {
#         "Name" : "C",
#         "Per" : 75.6
#     },
#     4: {
#         "Name" : "D",
#         "Per" : 31.2
#     }
# }

# count = 0

# for k, data in d1.items():
#     if data["Per"] >= 33:
#         count += 1

# print(count)

# -----------------------------------------------------------------------------------

# CALCULATE TOTAL SALARY:-

# d1 = {
#     1: {
#         "ID" : 101,
#         "Salary" : 10000
#     },
#     2: {
#         "ID" : 102,
#         "Salary" : 20000
#     },
#     3: {
#         "ID" : 103,
#         "Salary" : 30000
#     },
#     4: {
#         "ID" : 104,
#         "Salary" : 40000
#     }
# }

# total = 0

# for k, data in d1.items():
#         total = data["Salary"] + total

# print(total)

# -----------------------------------------------------------------------------------

# DELETE STUDENT RECORD:-

# d1 = {
#     1: {
#         "Name" : "A",
#         "Per" : 84.7
#     },
#     2: {
#         "Name" : "B",
#         "Per" : 24.5
#     },
#     3: {
#         "Name" : "C",
#         "Per" : 75.6
#     },
#     4: {
#         "Name" : "D",
#         "Per" : 31.2
#     }
# }

# for k, data in list (d1.items()):
#     if data["Per"] < 33:
#         del d1[k]

# print(d1)

# -----------------------------------------------------------------------------------

# REMOVE DUPLICATE DICTIONARIES FROM LIST:- 

# l1 = [
#     {1: {
#         "Name" : "A",
#         "Per" : 84.7
#     }},
#     {2: {
#         "Name" : "B",
#         "Per" : 24.5
#     }},
#     {3: {
#         "Name" : "C",
#         "Per" : 75.6
#     }},
#     {1: {
#         "Name" : "A",
#         "Per" : 84.7
#     }}
# ]

# unique = []

# for x in l1:
#     if x not in unique:
#         unique.append(x)

# print(unique)

# -----------------------------------------------------------------------------------

# BANK ACCOUNT MANAGEMENT:-

d1 = {
    101: {"name": "A", "balance": 2000},
    102: {"name": "B", "balance": 4000},
    103: {"name": "C", "balance": 6000},
    104: {"name": "D", "balance": 8000}
}

while True:
    print ('''
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Exit
    ''')        
    
    choice = input("Enter your choice: ")
    
    if choice == "4":
        print("EXITED")
        break
        
    if choice == "1" or choice == "2" or choice == "3":
        num = int(input("Enter your account number: "))
        
        if num in d1:
            if choice == "1":
                amount = float(input("Enter deposit amount: "))
                if amount > 0:
                    d1[num]["balance"] += amount
                    print("Deposited successfully")
                else:
                    print("Invalid amount")
                    
            elif choice == "2":
                amount = float(input("Enter withdrawal amount: "))
                if amount > d1[num]["balance"]:
                    print("Insufficient balance")
                elif amount > 0:
                    d1[num]["balance"] -= amount
                    print("Withdrawn successfully")
                else:
                    print("Invalid amount")
                    
            elif choice == "3":
                print(d1[num]["name"])
                print(d1[num]["balance"])
        else:
            print("Account not found")
    else:
        print("Invalid choice")

# -----------------------------------------------------------------------------------