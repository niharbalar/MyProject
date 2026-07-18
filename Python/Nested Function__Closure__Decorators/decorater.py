# def decorater(func):

#     def wrapper():
#         print("A")
#         func()
#         print("C")

#     return wrapper
    
# @decorater
# def text():
#     print("B")
# text()

# x = decorater(text)
# x()

# ----------------------------------------------------------------------------------

# CHECK AUTHENTICATION USING DECORATOR:-

# def Authentication(func):

#     def wrapper(r):
#         if r == "admin":
#             func(r)
#         else:
#             print("You do not have Access")

#     return wrapper

# @Authentication
# def order(role):
#     print("Your Order has been Placed")

# order("admin")
# order("user")

# ----------------------------------------------------------------------------------

# INPUT VALIDATION USING DECORATOR:-

# def Validation(func):

#     def wrapper(a):
#         if a >= 18:
#             func(a)
#         else:
#             print("You are NOT Eligible for Voting")

#     return wrapper

# @Validation
# def vote(age):
#     print("You are Eligible for Voting")

# vote(18)
# vote(9)

# ----------------------------------------------------------------------------------

# FUNCTION EXECUTION TIME USING DECORATOR:-

# import time

# def ececution(func):

#     def wrapper(*args):
#         start = time.time()

#         func(*args)

#         end = time.time()

#         print(f"Execution time: {end - start}")

#     return wrapper

# @ececution
# def add(a, b):
#     print(a+b)

# add(10, 20)

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

# CACHING USING DECORATOR:-

import time

def Caching(func):
    memory = {}

    def wrapper(n):
        if n in memory:
            print("Result from Cache:")
            return memory[n]
        
        print("Calculate:")
        res = func(n)       
        memory[n] = res      
        return res

    return wrapper

@Caching
def findFactorial(n):
    time.sleep(2)
    fact = 1

    for x in range(n, 1, -1):
        fact *= x
    
    return fact

print(findFactorial(4))
print(findFactorial(4))
print(findFactorial(4))
print(findFactorial(4))

# ----------------------------------------------------------------------------------