# GROUP WORDS BY LENGTH IN THE USER ENTERD STRING:-

# str = input("Enter string: ")

# word = str.split()
# ans = {}

# for x in word:
#     l = len(x)
    
#     if l not in ans:
#         ans[l] = []
        
#     ans[l].append(x)

# print(ans)

# ----------------------------------------------------------------------------------

# CACHING USING DECORATOR:-

# def Caching(func):
#     memory = {}

#     def wrapper(n):
#         if n in memory:
#             print("Result from Cache:")
#             return memory[n]
        
#         print("Calculate:")
#         res = func(n)       
#         memory[n] = res      
#         return res

#     return wrapper

# @Caching
# def findFactorial(n):
#     fact = 1

#     for x in range(n, 1, -1):
#         fact *= x
    
#     return fact

# print(findFactorial(4))
# print(findFactorial(4))
# print(findFactorial(4))
# print(findFactorial(4))

# ----------------------------------------------------------------------------------

# CREATE DATABASE CONNECTION AND QUERY EXECUTE USING CLOSURE:-

# def connect_db(username, password):
#     print(f"Connected to the Database using {username} and {password}")

#     def executeQuery(q):
#         print(f"Query Executed: {q}")

#     return executeQuery

# db = connect_db("abc", "abc@123")

# db("ABC")
# db("DEF")

# ----------------------------------------------------------------------------------

# FUNCTION LOGGER USUNG DECORATOR:-

# def logger(func):

#     def wrapper(*args, **kwargs):
#         print(f"Function: {func.__name__} is called with the arguments {args}, {kwargs}")
#         func(*args, **kwargs)

#     return wrapper

# @logger
# def text(*args, **kwargs):
#     # print(args, kwargs)
#     for x in args:
#         print(x)

#     for k, v in kwargs.items():
#         print(k, v)

# text("A", 4, b="B", c=1)
# text("D", 7, "E", 5)

# ----------------------------------------------------------------------------------

# FETCH EMPLOYEES SALARY:-

# employees = [
#     {"name": "John", "salary": 50000},
#     {"name": "Alice", "salary": 70000},
#     {"name": "Bob", "salary": 60000}
# ]

# def salary(emp):
#     return emp["salary"]

# normal1 = []
# for emp in employees:
#     normal1.append(salary(emp))

# lambda1 = list(map(lambda emp: emp["salary"], employees))

# map1 = list(map(salary, employees))

# comp1 = [emp["salary"] for emp in employees]

# print("Normal:")
# print(normal1)

# print("Lambda:")
# print(lambda1)

# print("Map:")
# print(map1)

# print("List Comprehension:")
# print(comp1)

# ----------------------------------------------------------------------------------

# STRUCTURED SUMMARY OF USER ENFORCING UNIQUE SKILLS:-

# def create_profile(username, *skills, additional_info):
#     unique = set(skills)
#     skill = list(unique)
  
#     print(username)
#     print(skill)
#     print(additional_info)

# create_profile("XYZ", "A", "B", "A", additional_info = "CDEFG")

# ----------------------------------------------------------------------------------

# FORMAT FLOAT VALUES IN CURRENCY STRINGS WITH A $ SYMBOL USING MAP & LAMBDA FUNCTION:-

# l1 = [5, 12.9, 100.555, 0.4]

# l2 = list(map(lambda x: f"${x}", l1))
# print(l2)

# ----------------------------------------------------------------------------------

# COUNT TOTAL NUMBER OF WORDS USING REDUCE FUNCTION:-

# from functools import reduce

# l1 = [
#     "Python programming is amazing",
#     "Functional concepts are clean",
#     "Keep learning code everyday"
# ]

# ans = reduce(lambda count, x: count + len(x.split()), l1, 0)
# print(ans)

# ----------------------------------------------------------------------------------

# SORT LIST OF TUPLE (name, age) USING LAMBDA FUNCTION:-

# l = [
#     ("A", 4),
#     ("B", 3),
#     ("C", 2),
#     ("D", 1),
# ]

# l.sort(key = lambda x: x[1])
# print(l)

# ---------------------------------------------------------------------------------

# VALIDATE PASSWORD:-

# def validate_password(p):
#     if len(p) < 8:
#         return False
    
#     upper = False
#     lower = False
#     digit = False
    
#     for x in p:
#         if x.isupper():
#             upper = True
#         elif x.islower():
#             lower = True
#         elif x.isdigit():
#             digit = True
            
#     if upper and lower and digit:
#         return True
#     else:
#         return False

# str = input("Enter password: ")
# ans = validate_password(str)
# print(ans)

# ----------------------------------------------------------------------------------