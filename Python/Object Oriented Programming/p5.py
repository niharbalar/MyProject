class Person:
    def __init__(self, n, a):
        self.name = n
        self.age = a

    def dispInfo(self):
        print(f"{self.name}")
        print(f"{self.age}")

class Employee(Person):
    def __init__(self, n, a, d):
        super().__init__(n, a) 
        self.dept = d
    
    def allInfo(self):
        self.dispInfo()
        print(f"{self.dept}")

emp = Employee("ABC", 18, "XYZ")
emp.allInfo()