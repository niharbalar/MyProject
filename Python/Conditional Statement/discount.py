gender = input("Enter your gender (male/female): ")
age = int(input("Enter your age: "))

discount = 0

if gender == "male":
    if age > 60:
        discount = 10
elif gender == "female":
    if age > 60:
        discount = 15

print("Your discount is:", discount, "%")
