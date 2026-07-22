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

    @abstractmethod
    def count_attd(self):
        pass

class Office_Employee(Attendance):
    def do_attendance(self):
        ids = int(input("Enter ID: "))
        date = input("Enter date (dd-mm-yyyy):")

        with open("./Python/Object Oriented Programming/officeAtt.txt", "a") as file:
            file.write(f"{ids},{date}\n")

    def count_attd(self):
        att_data = {}

        with open("./Python/Object Oriented Programming/officeAtt.txt", "r") as file:
            data = file.readlines()

            for x in data:
                emp_id, date = x.strip().split(",")

                if date not in att_data:
                    att_data[date] = []

                att_data[date].append(emp_id)

        for k, v in att_data.items():
            print(f"{k} -> {len(v)}")



class Remote_Employee(Attendance):
    def do_attendance(self):
        ids = int(input("Enter ID: "))
        date = input("Enter date (dd-mm-yyyy):")

        with open("./Python/Object Oriented Programming/remoteAtt.txt", "a") as file:
            file.write(f"{ids},{date}\n")

    def count_attd(self):
        att_data = {}

        with open("./Python/Object Oriented Programming/remoteAtt.txt", "r") as file:
            data = file.readlines()

            for y in data:
                emp_id, date = y.strip().split(",")

                if date not in att_data:
                    att_data[date] = []

                att_data[date].append(emp_id)

        for k, v in att_data.items():
            print(f"{k} -> {len(v)}")

class Intern_Employee(Attendance):
    def do_attendance(self):
        ids = int(input("Enter ID: "))
        date = input("Enter date (dd-mm-yyyy):")

        with open("./Python/Object Oriented Programming/internAtt.txt", "a") as file:
            file.write(f"{ids},{date}\n")

    def count_attd(self):
        att_data = {}

        with open("./Python/Object Oriented Programming/internAtt.txt", "r") as file:
            data = file.readlines()

            for z in data:
                emp_id, date = z.strip().split(",")

                if date not in att_data:
                    att_data[date] = []

                att_data[date].append(emp_id)

        for k, v in att_data.items():
            print(f"{k} -> {len(v)}")
while True:
    id = int(input("Enter your ID: "))
    name = input("Enter your Name: ")
    emp_type = input("Enter your employment type (office, remote, intern): ").lower()

    if emp_type == "office":
        e = Office_Employee(id, name, emp_type)
    elif emp_type == "remote":
        e = Remote_Employee(id, name, emp_type)
    elif emp_type == "intern":
        e = Intern_Employee(id, name, emp_type)

    e.addEmployee()

    choice = input("\nDo you want to add another employee? (y/n): ")
    if choice.lower() == "n":
        break

while True:
    emp_type = input("Enter your employment type (office, remote, intern): ").lower()

    if emp_type == "office":
        e = Office_Employee(id, "", emp_type)
    elif emp_type == "remote":
        e = Remote_Employee(id, "", emp_type)
    elif emp_type == "intern":
        e = Intern_Employee(id, "", emp_type)

    e.do_attendance()
    
    choice = input("\nDo you want to exit? (y/n): ")
    if choice.lower() == "y":
        break

print("\n Office Employee Attemdance")
o = Office_Employee("", "", "")
o.count_attd()

print("\n Remote Employee Attemdance")
r = Remote_Employee("", "", "")
r.count_attd()

print("\n Intern Employee Attemdance")
i = Intern_Employee("", "", "")
i.count_attd()