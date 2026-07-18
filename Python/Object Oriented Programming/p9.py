class User:
    def __init__(self, i):
        self.institute = i

    def setUser(self):
        print(f"Institute Name: {self.institute}")


class Student(User):
    def __init__(self, n1, id1, i):
        User.__init__(self, i)
        self.name = n1
        self.id = id1

    def setStudent(self):
        self.setUser()
        print(f"Student Name: {self.name}")
        print(f"Student ID: {self.id}")


class Instructor(User):
    def __init__(self, n2, id2, i):
        User.__init__(self, i)
        self.ins_name = n2
        self.ins_id = id2

    def setInstructor(self):
        self.setUser()
        print(f"Instructor Name: {self.ins_name}")
        print(f"Instructor ID: {self.ins_id}")


class TeachingAssistant(Student, Instructor):
    def __init__(self, i, n1, id1, n2, id2):
        Student.__init__(self, n1, id1, i)
        Instructor.__init__(self, n2, id2, i)

    def dispInfo(self):
        self.setUser()
        self.setStudent()
        self.setInstructor()

t = TeachingAssistant("ABC Institute", "DEF", "S04", "GHI", "I04")
t.dispInfo()