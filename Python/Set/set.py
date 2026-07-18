# s1 = {10, 5, 4, 7,10}

# CREATE:-

# print(s1, type(s1))

# ---------------------------------------------------------

# ACCESS:-

# for x in s1:
#     print (x)

# for i in range (len(s1)):         # not possible
#     print(s1[i])

# ---------------------------------------------------------

# METHOD:-

# s1.add(99)

# s1.remove(5)
# s1.add(50)

# s1.update([99,100,5])

# s1.remove(99)        # gives error if element not found in the set
# s1.discard(5)        # doesn't give error if element not found in the set

# s1.pop()             # removes element randomly

# s1.clear()

# print(len(s1))

# s2 = s1.copy()
# print (s2)

# ---------------------------------------------------------

# MEMBERSHIP OPERATOR:-

# print (50 in s1)

# ---------------------------------------------------------

# SET OPERATIONS:-

# s1 = {10, 5, 4, 7,10}
# s2 = {8, 9, 4, 2}
# l1 = [10, 1, 3, 6]

# 1. UNION:-

# print(s1.union(s2, l1))     # works for set, list, tuple
# print(s1 | s2 | l1)         # doesn't works for set, list, tuple

# 2. INTERSECTION:-

# print(s1.intersection(s1, s2, l1))      # works for set, list, tuple
# print (s1 & s2 & l1)                    # doesn't works for set, list, tuple

# 3. DIIFERENCE:-

# print(s1 - s2)          # removes s2 elements from s1
# print(s2 - s1)
# print(s1.difference(l1))        # works for set, list, tuple

# 4. SYMMETRIC DIFFERENCE:-

# print(s1.symmetric_difference(l1))      # works for set, list, tuple
# print(s1 ^ s2)                          # doesn't works for set, list, tuple

# 5. FROZEN SET:-

# fs1 = frozenset([10, 2, 3, 4, 10])
# fs1.add(99)                             # immutable 
# print(fs1)
