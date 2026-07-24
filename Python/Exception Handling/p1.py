try:
    n1 = int(input("Enter number 1: "))
    n2 = int(input("Enter number 2: "))
    ans = n1/n2
# except ValueError:
#     print("Invalid Input")
# except ZeroDivisionError:
#     print("Division by Zero is NOT  Possible")

# except (ValueError, ZeroDivisionError):
#     print("Invalid Input OR Division by Zero is NOT  Possible")

except Exception as e:
    print("Exception: ",e)
else:
    print(f"Answer:{ans}")
finally:
    print("Program Completed")
