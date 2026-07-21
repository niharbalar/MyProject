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

                employees[int(emp_id)] = {
                    "name": name,
                    "type": emp_type
                }

        with open("./Python/Object Oriented Programming/officeAtt.txt", "r") as file:
            for y in file:
                emp_id, date = y.strip().split(",")

                if date == today:
                    print(
                        "ID:", emp_id,
                        "Type:", employees[int(emp_id)]["type"],
                        "Date:", date
                    )

                    count += 1

        print("Total Employee Attendance:", count)


while True:
    id = int(input("Enter your ID: "))
    name = input("Enter your Name: ")
    type = input("Enter your employment type (office, remote, intern): ").lower()

    o = Office_Employee(id, name, type)
    o.addEmployee()

    if type == "office":
        o.do_attendance()

    choice = input("\nDo you want to exit? (y/n): ")

    if choice.lower() == "y":
        break

o.count_attd()