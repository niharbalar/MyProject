#  COUNT VOWELS USING A SET:-

# text = input("Enter any text:")

# vowels = {'a', 'e', 'i', 'o', 'u'}

# count = 0

# for x in text:
#     if x in vowels:
#         count +=1

# print(count)

# -----------------------------------------------------------------------------------

# CHECK IF TWO SETA ARE EQUAL:-

# s1 = {10, 20, 30, 40, 50}
# s2 = {60, 70 ,80, 90, 100}

# if s1 == s2:
#     print("SAME Set")
# else:
#     print("NOT Same Set")

# -----------------------------------------------------------------------------------

# CONVERT STRING INTO UNIQUE CHARACTERS USING SET:-

# text = input("Enter any text:")

# print(set(text))

# -----------------------------------------------------------------------------------

# CHECK SUBSET AND SUPERSET:-

# s1 = {10, 20, 30, 40, 50}
# s2 = {10, 20}

# print(s2.issubset(s1))
# print(s1.issuperset(s2))

# -----------------------------------------------------------------------------------

# FIND COMMON ELEMENTS FROM TWO LISTS USING SET:-

# l1 = [10, 20, 30, 40, 50]
# l2 = [10, 20, 60, 70, 80]

# l1 = set(l1)
# l2 = set(l2)

# print(l1.intersection(l2))