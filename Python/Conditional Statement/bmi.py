w = float(input("Enter weight in kg: "))
h = float(input("Enter height in cm: "))

hm = h / 100
bmi = w / (hm * hm)

print(f"Your BMI is: {bmi}")

if bmi < 18.5:
    print("Underweight")
elif bmi >= 18.5 and bmi < 25:
    print("Normal Weight")
elif bmi >= 25 and bmi < 30:
    print("Overweight")
elif bmi >= 30 and bmi < 35:
    print("Obese (Class I)")
elif bmi >= 35 and bmi < 40:
    print("Obese (Class II)")
else:
    print("Extreme Obesity (Class III)")