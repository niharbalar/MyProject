# SQUARE A NUMBER USING LAMBDA FUNCTION:-

# ans =  lambda x: x*x
# print(ans(4))

# ----------------------------------------------------------------------------------

# ADD 2 NUMBERS USING LAMBDA FUNCTION:-

# ans =  lambda x, y: x + y
# print(ans(10, 20))


# ----------------------------------------------------------------------------------

# SQUARE OF ELEMENT OF LIST USING LAMBDA FUNCTION:-

# l = [1, 2, 3, 4, 5]

# ans = list(map(lambda x: x*x, l))
# print(ans)

# ans = [x*x for x in l]
# print(ans)

# def square(n):
#     return n*n

# ----------------------------------------------------------------------------------

# ADD 18% GST TO EACH PRICE USING LAMBDA FUNCTION:-

# price = [100, 200, 300, 400, 500]

# ans = list(map(lambda x: x*1.18, price))
# print(ans)

# ans = [x*1.18 for x in price]
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

# ----------------------------------------------------------------------------------

# # CLEAN CUSTOMER DATA USING MAP:-

# l1 = [
#     "  abc",
#     "def  ",
#     " ghi"
# ]

# ans = list(map(lambda x : x.strip(), l1))
# print(ans)

# ----------------------------------------------------------------------------------

# PR 8 : PROGRAM 7:-

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

# GIVES EMPLOYEE WHOSE SALARY ABOVE 50000 FROM ABOVE DATA:-

# employees = [
#     {"name": "John", "salary": 50000},
#     {"name": "Alice", "salary": 70000},
#     {"name": "Bob", "salary": 60000}
# ]

# ans = list(filter(lambda x: x["salary"] > 50000, employees))
# print(ans)

# def data(func):
#     l1 = []
#     for x in func:
#         if x["salary"] > 50000:
#             l1.append(x)
#     return l1

# ans = data(employees)
# print(ans)

# ans = [x["salary"] for x in employees if x["salary"] > 50000]
# print(ans)

# ----------------------------------------------------------------------------------

# FIND EVEN ELEMENTS FROM LIST USING FILTER:-

# l1  = [1, 2, 3, 4, 5, 6]

# ans = list(filter(lambda x : x%2 == 0, l1))
# print(ans)

# ans = [x for x in l1 if x%2 == 0]
# print(ans)

# def even():
#     l2 = []
#     for x in l1:
#         if x%2 == 0:
#             l2.append(x)
#     return l2

# ans = even()
# print(ans)

# ----------------------------------------------------------------------------------

# SUM OF ALL ELEMENTS USING REDUCE FUNCTION:-

# l1  = [1, 2, 3, 4, 5, 6]

# from functools import reduce

# ans = reduce(lambda total, x: total + x, l1, 0)
# print(ans)

# ----------------------------------------------------------------------------------

# SUM OF ALL EMPLOYEES SALARY USING REDUCE FUNCTION:-

# employees = [
#     {"name": "John", "salary": 50000},
#     {"name": "Alice", "salary": 70000},
#     {"name": "Bob", "salary": 60000}
# ]

# from functools import reduce

# ans =  reduce(lambda total, x : total + x["salary"], employees, 0)
# print(ans)

# ----------------------------------------------------------------------------------