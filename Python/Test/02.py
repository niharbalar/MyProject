# FIND MINIMUM OF FIRST HALF OF A LIST:-

# l1 = [10, 20, 30, 40, 50, 60]

# n = int (len(l1) / 2)
# min = l1[0]

# for i in range(n):
#     if l1[i] < min:
#         min = l1[i]

# print(min)

# -----------------------------------------------------------------------------------

# SWAP FIRST AND LAST ELEMENT OF A LIST:-

# l1 = [10, 20, 30, 40, 50]

# for i in range(1):
#     temp = l1[0]
#     l1[0] = l1[-1]
#     l1[-1] = temp

# print(l1)


# -----------------------------------------------------------------------------------

# REMOVE DUPLICATE FROM LIST:-

# l1 = [10, 20, 30, 20, 10]
# unique = []

# for i in range(len(l1)):
#     x = l1[i]
#     if x not in unique:
#         unique.append(x)

# print(unique)


# -----------------------------------------------------------------------------------

# LIST THAT CONTAIN COMMON ELEMENTS OF TWO STRINGS:-

# s1 = input("Enter string 1: ")
# s2 = input("Enter string 2: ")

# common = []

# for x in s1:
#     if x in s2 and x not in common:
#         common.append(x)

# print(common)

# -----------------------------------------------------------------------------------

# FIND FREQUENCY OF ELEMENTS IN TUPLE:-

# t1 = (10, 20, 30, 40, 10)

# for x in t1:
#     print(f"{t1.count(x)} time {x} ")

# -----------------------------------------------------------------------------------

# COUNT UNIQUE ITEMS IN TUPLE:-

# t1 = (10, 20, 30, 40, 50, 10, 20, 30)

# unique= set(t1)

# count = len(unique)

# print(count)

# -----------------------------------------------------------------------------------

# TOTAL MARKS OF STUDENT WITH STIDENT ID 2135:-

# marks = {
#     2234: [99, 23, 56], 
#     2135: [67, 56, 68], 
#     2199: [78, 89, 66] 
# }

# total = sum(marks[2135])

# print(f"2135:{total}") 

# -----------------------------------------------------------------------------------

#  E-COMMERCE ORDER ANALYSIS:-

# orders = [ 
#     {"id":1, "customer":"Rahul", "amount":5000}, 
#     {"id":2, "customer":"Priya", "amount":12000}, 
#     {"id":3, "customer":"Rahul", "amount":8000}, 
#     {"id":4, "customer":"Amit", "amount":3000} 
# ]

# sales = 0
# avg = 0

# for x in orders:
#     sales = sales + x["amount"]

# for y in orders:
#     avg = sales / 4

# print(sales)
# print(avg)

# -----------------------------------------------------------------------------------

# toppers = {'id11', 'id23', 'id34', 'id45', 'id77', 'id12', 'id89', 'id56', 'id55', 'id19'}
# champions = {'id19', 'id23', 'id78', 'id99', 'id79', 'id13', 'id56', 'id45', 'id80'}

# a)

# toppers.remove('id11')
# print(toppers)

# b)

# champions.add('id46')
# champions.add('id20')
# print(champions)

# c)

# print(toppers.difference(champions))

#  d)

# print(champions.difference(toppers))

# e)

# print(toppers.intersection(champions))