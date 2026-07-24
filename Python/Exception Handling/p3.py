try:
    l = [0, 1, 2, 3, 4]
    index = int(input("Enter an index: "))
    print(l[index])
except IndexError:
    print("Invalid index")
else:
    print("Index Accessed")
finally:
    print("Program Completed")