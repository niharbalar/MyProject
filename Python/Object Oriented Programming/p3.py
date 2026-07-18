class Student:
    def __init__(self, n, m1, m2, m3):
        self.name = n
        self.phy = m1
        self.chem = m2
        self.math = m3
        self.total = 0
        self.per = 0
        self.grade = ""

    def calcTotal(self):
        self.total = self.phy + self.chem + self.math
    
    def calcPer(self):
        self.per = self.total / 3

    def calcgrade(self):
        if self.per == 100 and self.per <=90:
            self.grade = "A"
        elif self.per < 90 and self.per >=80:
            self.grade = "B"
        elif self.per < 80 and self.per >=70:
            self.grade = "C"
        elif self.per < 70 and self.per >=65:
            self.grade = "D"
        elif self.per < 65 and self.per >=35:
            self.grade = "E"
        elif self.per < 35:
            self.grade = "FAIL"

    def dispInfo(self):
        print(f"Name:{self.name}")
        print(f"Total Marks:{self.total}")
        print(f"Percentage:{self.per}%")
        print(f"Grade:{self.grade}")

name = input("Enter your Name:")
m1 = input("Enter Physics Marks:")
m2 = input("Enter Chemistry Marks:")
m3 = input("Enter Mathematics Marks:")

s1 = Student(name, m1, m2, m3)

s1.calcTotal()
s1.calcPer()
s1.calcgrade()
s1.dispInfo()