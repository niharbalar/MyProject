# FIND FACTORIAL:-

# def factorial(n):
#     if n == 0:  
#         return 1
#     else:       
#         return n * factorial(n - 1)

# print(factorial(5))

# ----------------------------------------------------------------------------------

# PRINT INFORMATION:-

# data = [
#     "amit",
#     85.6,
#     [
#         "surat",
#         ["510", "Kyros Business Center", "Sarthana Jakatnaka", 395010]
#     ]
# ]

# def display(data):
#     for x in data:
#         if isinstance(x, list):
#             display(x)
#         else:
#             print(x)

# display(data)

# ----------------------------------------------------------------------------------

# DISPLAT COMPANY DATA:-

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

# JSON PARSER DATA:-

# data = {
#     "company": "BitKhanan IT Education",
#     "address": {
#         "city": "Surat",
#         "state": "Gujarat",
#         "country": "India"
#     },
#     "courses": {
#         "Programming": {
#             "Python": {
#                 "duration": "3 Months",
#                 "fees": 15000
#             },
#             "Java": {
#                 "duration": "4 Months",
#                 "fees": 18000
#             }
#         },
#         "Design": {
#             "UI/UX": {
#                 "duration": "2 Months",
#                 "fees": 12000
#             }
#         }
#     }
# }

# def dispData(d):
#     for k, v in d.items():
#         if isinstance(v, dict):
#             print(k)
#             dispData(v)
#             print()
#         else:
#             print(f"{k} {v}")

# dispData(data)

# ----------------------------------------------------------------------------------

# FILE EXPLORER:-

import os

def fileExpo(path, level=0):
    for x in os.listdir(path):
        fullPath = os.path.join(path, x)
        
        if os.path.isdir(fullPath):
            print(x)
            fileExpo(fullPath, level + 1)
        else:
            print(x)
fileExpo("E:\\Notes")
