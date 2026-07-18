# def outerFun(age):
#     print("This is Outer Function.")

#     name  = "ABC"

#     def innerFun():
#         print("This is Inner Function.")
#         print(f"Name: {name}, Age: {age}")

#     return innerFun

# ans = outerFun(15)
# print("-----------------------")
# ans()

# ----------------------------------------------------------------------------------

# SQUARE AND CUBE USING CLOSURE:-

# def handle(p):

#     def calc(n):
#         print(n ** p)

#     return calc

# square = handle(2)
# cube = handle(3)

# square(5)
# cube(2)

# ----------------------------------------------------------------------------------

# CREATE DATABASE CONNECTION AND QUERY EXECUTE USING CLOSURE:-

# def connect_db(username, password):
#     print(f"Connected to the Database using {username} and {password}")

#     def executeQuery(q):
#         print(f"Query Executed: {q}")

#     return executeQuery

# db = connect_db("amit", "amit@123")

# db("ABC")
# db("DEF")

# ----------------------------------------------------------------------------------

# CREATE API ENDPOINTS USING CLOSURE:-

# def url(URL):
#     print("")

#     def endpoint(p):
#         print(f"{URL}/{p}")

#     return endpoint

# ep = url("https://jsonplaceholder.typicode.com")

# ep("posts")
# ep("comments")
# ep("users")

# ----------------------------------------------------------------------------------

# CREATE COUNTER USING CLOSURE:-

def handle():
    count = 0

    def counter():
        nonlocal count
        count += 1
        print(count)
              
    return counter

x = handle()

x()
x()
x()

# ----------------------------------------------------------------------------------