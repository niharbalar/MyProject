min = int(input("Enter your talktime in minutes:"))

bill = 0

if min >= 0 and min <= 100:
    bill = min * 0.50
elif min > 100 and min <= 200:
    bill = 100 * 0.50 + (min - 100) * 0.75
elif min > 200 and min <= 300:
    bill = 100 * 0.50 + 100 * 0.75 + (min - 200) * 1.20
elif min > 300:
    bill = 100 * 0.50 + 100 * 0.75 + 100 * 1.20 +  (min - 300) * 1.50

finalBill = bill + (bill*0.18)

print(f"Your Mobile bill is:{finalBill}")