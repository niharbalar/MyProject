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
        date = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/officeAtt.txt", "a") as file:
            file.write(f"{self.id},{date}\n")

    def count_attd(self):
        count = 0
        today = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/officeAtt.txt", "r") as file:
            for x in file:
                emp_id, date = x.strip().split(",")

                if date == today:
                    print("ID:", emp_id, "Type: office", "Date:", date)
                    count += 1

        print("Total Office Attendance:", count)

class Remote_Employee(Attendance):
    def do_attendance(self):
        date = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/remoteAtt.txt", "a") as file:
            file.write(f"{self.id},{date}\n")

    def count_attd(self):
        count = 0
        today = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/remoteAtt.txt", "r") as file:
            for y in file:
                emp_id, date = y.strip().split(",")

                if date == today:
                    print("ID:", emp_id, "Type: remote", "Date:", date)
                    count += 1

        print("Total Remote Attendance:", count)

class Intern_Employee(Attendance):
    def do_attendance(self):
        date = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/internAtt.txt", "a") as file:
            file.write(f"{self.id},{date}\n")

    def count_attd(self):
        count = 0
        today = datetime.now().strftime("%d-%m-%Y")

        with open("./Python/Object Oriented Programming/internAtt.txt", "r") as file:
            for z in file:
                emp_id, date = z.strip().split(",")

                if date == today:
                    print("ID:", emp_id, "Type: intern", "Date:", date)
                    count += 1

        print("Total Intern Attendance:", count)


while True:
    id = int(input("Enter your ID: "))
    name = input("Enter your Name: ")
    type = input("Enter your employment type (office, remote, intern): ").lower()

    if type == "office":
        employee = Office_Employee(id, name, type)

    elif type == "remote":
        employee = Remote_Employee(id, name, type)

    elif type == "intern":
        employee = Intern_Employee(id, name, type)

    else:
        print("Invalid employee type")
        continue

    employee.addEmployee()
    employee.do_attendance()

    choice = input("\nDo you want to exit? (y/n): ")

    if choice.lower() == "y":
        break


print("\nAttendance Details")

Office_Employee(0, "", "office").count_attd()
Remote_Employee(0, "", "remote").count_attd()
Intern_Employee(0, "", "intern").count_attd()