# def intro():
#     print("A")
#     print("B")

# intro()

# intro()

# intro()

# -----------------------------------------------------------------------------------

# def age(year):
#     old = 2026 - year

#     print(old)
#     return old

# ans = age(2008)

# print(ans) 

# -----------------------------------------------------------------------------------

# def register():
#     print("Registration Process")

# def login():
#     pass

# register()
# login()

# -----------------------------------------------------------------------------------

# POSITIONAL ARGUMENTS:-

# def info(name, age , exp):
#     print(name, age, exp)

# info("A", 18, "4 Years")

# -----------------------------------------------------------------------------------

# KEYWORD ARGUMENTS:-

# def info(age , exp, name):
#     print(name, age, exp)

# info(name="A", age=18, exp="4 Years")      

# -----------------------------------------------------------------------------------

# DEFAULT PARAMETERS:-


# def info(age , exp, name, company="XYZ"):
#     print(name, age, exp, company)

# info(name="A", age=18, exp="4 Years")
# -----------------------------------------------------------------------------------

# / → ALL PARAMETERS BEFORE / ARE POSITIONAL-ONLY ARGUMENTS:-

# def info(name, age, exp, /):
#     print(name, age, exp)

# info("A", 18, exp="4 Years")        # ERROR IN SYNTAX
# info("A", 18, "4 Years")

# -----------------------------------------------------------------------------------


# * → ALL PARAMETERS AFTER * MUST BE PASSED USING KEYWORDS:-

# def info(*, name, age, exp):
#     print(name, age, exp)

# info(name="A", age=18, "4 Years")     # ERROR IN SYNTAX
# info(name="A", age=18, exp="4 Years")

# -----------------------------------------------------------------------------------

# ARBITARY ARGUMENTS:-

# def info(*args):
#     print(args)

# info("A", 18, "4 Years")
# info("B", 20, "7 Years")


# def sum(*args):
    
#     sum = 0

#     for x in args:
#         sum += x

#     print(sum)

# sum(10, 20, 30)
# sum(10, 20 , 30, 40)


# def info(*args):

#     marks = list(args)
    
#     marks.append(80)

#     print(marks)

#     total = 0

#     for x in marks:
#         total += x

#     per = total /len(marks)

#     print(per)

# info(75, 45, 66)
# info(23, 76, 56, 78)

# -----------------------------------------------------------------------------------

# ARBITARY KEYWORD ARGUMENTS:-

# def info(**kwargs):
    
#     for k, v in kwargs.items():
#         print(k, v)

# info(name="A", age=18, exp="4 Years")
# info(name="B", age=20, exp="7 Years",sal=40000)

# -----------------------------------------------------------------------------------

# def info(name, *args, price, **kwargs):
#     print(name)
#     print(args)
#     print(price)
#     print(kwargs)

# info("A", 1, 2, 3, price=400, a=4, b=5, c=6)

# -----------------------------------------------------------------------------------

