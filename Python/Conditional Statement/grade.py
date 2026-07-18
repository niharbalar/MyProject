per = float(input("Enter your percentage:"))

if per<=100 and per>=91:
    print("Grade A")
elif per<91 and per>=81:
    print("Grade B")
elif per<81 and per>=71:
    print("Grade C")
elif per<71 and per>=61:
    print("Grade D")
elif per<61 and per>=40:
    print("Grade E")
elif per<40:
    print("FAILED")
else:
    print("INVALID PERCENTAGE")