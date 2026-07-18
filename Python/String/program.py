# COUNT VOWELS:-

# str = input("Enter string: ")

# vowel = 'aeiouAEIOU'
# count = 0

# for x in str:
#     if x in vowel:
#         count +=1

# print(count)

# -----------------------------------------------------------------------------------

# CHECK PALINDROME:-

# str1 = input("Enter a string: ")

# str2 = str1.lower()

# if str2 == str2[::-1]:
#     print("String is palindrome.")
# else:
#     print("String is not palindrome.")

# -----------------------------------------------------------------------------------

# FIND LONGEST WORD:-

# str = input("Enter string: ")

# words = str.split()
# longest= ""

# for x in words:
#     if len(x) > len(longest):
#         longest = x

# print(longest)

# -----------------------------------------------------------------------------------

# REMOVE DUPLICATE CHARACTERS:-

# str = input("Enter string: ")

# unique = ""

# for x in str:
#     if x not in unique:
#         unique += x

# print(unique)

# -----------------------------------------------------------------------------------

# COUNT UPPERCASE, LOWERCASE AND DIGIT:-

# str = input("Enter string: ")

# upper = 0
# lower = 0
# digit = 0

# for x in str:
#     if x.isupper():
#         upper += 1
#     elif x.islower():
#         lower += 1
#     elif x.isdigit():
#         digit += 1

# print("Upper:", upper)
# print("Lower:", lower)
# print("Digit:", digit)

# -----------------------------------------------------------------------------------

# REVERSE EACH WORD:-

# str1 = input("Enter string: ")

# words = str1.split(" ")
# reverse = []

# for x in words:
#     reverse.append(x[::-1])

# str2 = " ".join(reverse)

# print(str2)

# -----------------------------------------------------------------------------------

# COMMON CHARACTERS BETWEEN TWO STRINGS:-

# str1 = input("Enter string 1: ")
# str2 = input("Enter string 2: ")

# common = ""

# for x in str1:
#     if x in str2 and x not in common:
#         common += x

# print(common)

# -----------------------------------------------------------------------------------

# GROUP WORDS BY LENGTH:-

# str = input("Enter string: ")

# word = str.split()
# ans = {}

# for x in word:
#     l = len(x)
    
#     if l not in ans:
#         ans[l] = []
        
#     ans[l].append(x)

# print(ans)

# -----------------------------------------------------------------------------------