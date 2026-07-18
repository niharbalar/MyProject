# COUNT POSITIVE AND NEGATIVE NUMBERS IN A LIST:-

# l1 = [11, -21, 31, -41, 51]
# l3 = []

# l3 = [0 if x < 0 else 1 for x in l1]

# print(l3.count(1))
# print(l3.count(0))

# positive_count = 0
# negative_count = 0

# for x in l1:
#     if x > 0:
#         positive_count = positive_count+1
#     elif x < 0:
#         negative_count = negative_count+1

# print(positive_count)
# print(negative_count)

# --------------------------------------------------------------------------------------

#  REMOVE DUPLICATE FROM LIST:-

# l1 = [11, -21, 31, -41, 51, -21, -41]
# l3 = []

# for x in l1:
#     if x not in l3:
#         l3.append(x)

# print(l3)

# --------------------------------------------------------------------------------------

#  REMOVE MULTIPLE ELEMENTS FROM A LIST

# l1 = [11, -21, 31, -41, 51,]
# l3 = []

# l3 = [x for x in l1 if x < 0]

# print(l3)

# for x in l1:
#     if x>=0:
#         l1.remove(x)
    
# print(l1)

# --------------------------------------------------------------------------------------

# INTERSECTION OF TWO LISTS

# l1 = [1, 2, 3, 4, 5]
# l2 = [4, 5, 6, 7, 8]

# l3 = []

# for item in l1:
#     if item in l2:
#         l3.append(item)

# print(l3)

# l3 = [item for item in l1 if item in l2]

# print(l3)

# --------------------------------------------------------------------------------------

# MAX AND MIN ELEMENT'S POSITION IN A LIST:-

# l1 = [10, 20, 30, 40, 50]

# max = max(l1)
# min = min(l1)

# maxp = l1.index(max)
# minp = l1.index(min)

# print(f"Maximum element is {max} at position: {maxp}")
# print(f"Minimum element is {min} at position: {minp}")

# --------------------------------------------------------------------------------------

# CHECK IF ELEMENT EXISTS:-

# l1 = [10, 20, 30, 40, 50]

# search= input("Enter the element you want to search for: ")

# if search in l1:
#     print(f"Yes, {search} exists in the list.")
# else:
#     print(f"No, {search} does not exist in the list.")

# --------------------------------------------------------------------------------------

# CHECK IF TWO LISTS ARE IDENTICAL:-

# l1 = [10, 20, 30, 40, 50]
# l2 = [10, 20, 30, 40, 50]

# if l1 == l2:
#     print("The two lists are identical.")
# else:
#     print("The two lists are NOT identical.")

# --------------------------------------------------------------------------------------

# SELECT RANDOM VALUE FROM A LIST:-

# import random

# l1 = [10, 20, 30, 40, 50]

# dd = random.choice(l1)

# print(dd)