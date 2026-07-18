a = float(input("Enter value of a: "))
b = float(input("Enter value of b: "))
c = float(input("Enter value of c: "))
d = float(input("Enter value of d: "))

if a >= b:
    if a >= c:
        if a >= d:
            max= a
        else:
            max = d
    else:
        if c >= d:
            max = c
        else:
            max = d
else:
    if b >= c:
        if b >= d:
            max = b
        else:
            max= d
    else:
        if c >= d:
            max = c
        else:
            max = d

print(max)
