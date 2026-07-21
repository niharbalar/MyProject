from abc import ABC, abstractmethod
from datetime import datetime

class Attendance(ABC):
    def __init__(self, i, n, t):
        self.id = i
        self.name = n
        self.type = t

    def addEmployee(self):
        with open("./Python/Object Oriented Programming/allEmp.txt", "a") as file:
            file.write(f"{self.name},{self.id},{self.type}\n")

    @abstractmethod
    def do_attendance(self):
        pass

class Office_Employee(Attendance):
    def __init__(self, i, n, t):
        super().__init__(i, n, t)

    def do_attendance(self):
        date = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/officeAtt.txt", "a") as file:
            file.write(f"{self.id},{date}\n")

    def count_attd(self):
        employees = {}
        count = 0

        today = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/allEmp.txt", "r") as file:
            for x in file:
                name, emp_id, emp_type = x.strip().split(",")

                employees[int(emp_id)] = emp_type

        with open("./Python/Object Oriented Programming/officeAtt.txt", "a+") as file:
            file.seek(0)

            for line in file:
                emp_id, date = line.strip().split(",")

                if date == today:
                    if employees[int(emp_id)] == self.type:
                        count += 1

            if self.type == "office":
                file.write(f"{self.id},{today}\n")
                count += 1

        print(count)
        
while True:
    id = int(input("Enter your ID: "))
    name = input("Enter your Name: ")
    type = input("Enter your employment type (office, remote, intern): ").lower()

    o = Office_Employee(id, name, type)
    o.addEmployee()
    o.count_attd()

    choice = input("\nDo you want to exit? (y/n): ")

    if choice.lower() == "y":
        break

    o.count_attd()