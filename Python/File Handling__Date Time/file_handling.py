# WRITE:-

# file = open("./files/demo.txt", "w+")
# file.write("Hello")
# file.seek(0)
# data = file.read()
# print(data)
# file.close()

# -----------------------------------------------------------------------------------

#  READ:-

# file = open("./files/demo.txt", "r")
# data = file.read()

# -----------------------------------------------------------------------------------

# READ LINE BY LINE:-

# file = open("./files/demo.txt", "r+")
# data = file.readline()
# print(data)
# print(file.readline())
# print(file.readline(), end='')
# print(file.readline(), end='')

# data = file.readlines()

# for x in data:
#     print(x)
#     print("----------------------------------------")

# print(data[3])

# -----------------------------------------------------------------------------------

# APPEND:-

# file = open("./files/demo1.txt", "a+")
# file.write("Hello")
# file.seek(0)
# data = file.read()
# print(data)
# file.close()

# -----------------------------------------------------------------------------------

# with open("./files/demo1.txt", "a+") as file:
#     file.write("Okk")
#     file.seek(0)
#     data = file.read()
#     print(data)

# -----------------------------------------------------------------------------------

# import os 

# if os.path.exists("./files/demo.txt"):
#     os.remove("./files/demo.txt")
# else:
#     print("File Do Not Exists")

# -----------------------------------------------------------------------------------
