class Employee:
    def __init__(self, n, s):
        self.name = n               # Public
        self._salary = s            # Protected
        self.__bonus = 0            # Private
        self.finalSalary = 0

    def calcBonus(self, p):
        self.__bonus = (self._salary * p) / 100

    def calcFinal(self):
        self.finalSalary = self._salary + self.__bonus

    def dispInfo(self):
        print("Employee Name:", self.name)
        print("Monthly Salary:", self._salary)
        print("Bonus Amount:", self.__bonus)
        print("Final Salary:", self.finalSalary)

name = input("Enter Employee Name: ")
salary = float(input("Enter Monthly Salary: "))
percent = float(input("Enter Bonus Percentage: "))

emp = Employee(name, salary)
emp.calcBonus(percent)
emp.calcFinal()
emp.dispInfo()

print(emp._salary)
print(emp._Employee__bonus) # Syntax to access Private Data Member outside the class : object._className__PrivateDataMember