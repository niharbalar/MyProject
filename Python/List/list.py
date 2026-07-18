# l1 =        [11, -20, 31, -40, 51]
# # index       0     1      2      3
# #            -4    -3     -2     -1

# l2 = [99,100]

# --------------------------------------------------------------------------------------

# CREATE:-

# print(l1, type(l1))

# --------------------------------------------------------------------------------------

# ACCESS:-

# print (l1[1])

# for x in l1:
#     print(x)

# for i in range (len(l1)):
#     print(i,l1[i])

# --------------------------------------------------------------------------------------

# LIST SLICING (list[start : end : step]):-

# print(l1[1:3:1])
# print(l1[-3:-1])
# print(l1[2:])
# print(l1[:2])
# print(l1[::2])
# print(l1[::-1])
# print(l1[-2:])
# print(l1[:-2])

# --------------------------------------------------------------------------------------

# ADD:-

# l1.append(99)       # add new element at the end of the list
# l1.insert(2,99)     # add new element at a specific index
# l1.extend(l2)       # add two lists

# --------------------------------------------------------------------------------------

# UPDATE:-

# l1[2] =(99)
# l1[2:4] =(99,100)
# l1[2:4] =(99,100,101)

# --------------------------------------------------------------------------------------

# DELETE:-

# l1.remove(31)             # remove first occurence of element from list
# l1.pop()                    # remove the last element from the list
# l1.pop(2)                   # remove the element at particular index
# del l1                      # delete whole list
# l1.clear()                  # clears the list:remove all elements from the list

# print(l1)

# --------------------------------------------------------------------------------------

# LIST FUNCTIONS:

# print(len(l1))
# print(max(l1))
# print(min(l1))

# l2 = sorted (l1)                # sort list and return new list, original list is not changed
# l2 = l1.sort(reverse=True)      # sort list and return NONE, original list is changed

# print(l2)
# print(l1[1])                    # gives second maximum

# --------------------------------------------------------------------------------------

# city = ["vapi", "Bardoli", "Valsad", "surat"]
# city.sort(key=str.upper)
# city.sort(key=len, reverse=True)

# print (city)

# --------------------------------------------------------------------------------------

# print(l1.count(31))           # counts the duplicate element in the list
# print(l1.index(31))           # give index of the first occurence element in the list

# --------------------------------------------------------------------------------------

# LIST COMPREHENSION:-
# newList = [expression for item in iterable condition]       # syntax for LIST COMPREHENSION

# l3 = []

# for x in l1:
#     if x >= 50:
#         l3.append(x)

# l3 = [x for x in l1 if x >= 50]
# l3 = [x for x in l1 if x%2 == 0]
# l3 = [0 if x < 0 else x for x in l1]

# print(l3)

# --------------------------------------------------------------------------------------

# 2D LIST:-

# l3 = [
#     [1, "amit", 84.7],
#     [2, "yash", 66.6]
# ]

# for x in l3:
#     for y in x:
#         print(y, ' ', end='')
#     print("\n --------------------")

# --------------------------------------------------------------------------------------

# COPY:-

# l3 = l1.copy()
# l3 = l1[:] 

# --------------------------------------------------------------------------------------

# JOIN:-

# l3 = l1 + l2
# l3 = []

# for x in l1:
#     l3.append(x)

# for x in l2:
#     l3.append(x)

# print(l3)