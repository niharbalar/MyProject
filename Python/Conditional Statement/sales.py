cat = input("Enter category (Stationary, Electronics, Fashion): ")
amt = float(input("Enter purchase amount: "))

disc = 0

if amt > 5000:
    disc = 15
elif amt >= 1001:
    if cat == "Stationary":
        disc = 8
    elif cat == "Electronics":
        disc = 10
    elif cat == "Fashion":
        disc = 12
elif amt >= 501:
    if cat == "Stationary":
        disc = 5
    elif cat == "Electronics":
        disc = 8
    elif cat == "Fashion":
        disc = 10
elif amt >= 0:
    if cat == "Stationary":
        disc = 3
    elif cat == "Electronics":
        disc = 5
    elif cat == "Fashion":
        disc= 7

disc_amt = (disc / 100) * amt
final = amt - disc_amt

print("Discount Percentage:", disc, "%")
print("Discount Amount:", disc_amt)
print("Final Amount:", final)
