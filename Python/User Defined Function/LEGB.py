# count = 0           # Global Variable

# def increasecounter():
#     global count
#     count += 1

#     print(f"Local variable count:{count}")

# increasecounter()
# increasecounter()

# print(count)

# -----------------------------------------------------------------------------------

# count = 0           # Global Variable

# def increasecounter():
#     count = 0       # Local Variable
#     count += 1

#     print(f"Local variable count:{count}")

# increasecounter()
# increasecounter()

# print(count)

# -----------------------------------------------------------------------------------

# count = 0

# def outerFunction():
#     count = 44               # Enclosing Variable

#     def innerFunction():
#         # nonlocal count
#         # global count
#         # count = 7
#         count += 1
#         print(count)

#     innerFunction()

# outerFunction()

# -----------------------------------------------------------------------------------

# len = 7

# def outerAccess():
#     len = 4                   # Enclosing Variable

#     def innerAccess():
#         # len = 1
#         # nonlocal len
#         # global len
#         len += 1              # <built-in function len>
#         print(len)

#     innerAccess()

# outerAccess()

# -----------------------------------------------------------------------------------

# name = "A"

# def aName():
#     name = "B"

#     def bName():
#         name = "C"
#         print(name)

#     bName()

# aName()

# -----------------------------------------------------------------------------------