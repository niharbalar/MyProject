class Hospital:
    def __init__(self, h):
        self.hospital_name = h

    def setHospital_Name(self):
        print(f"Hospital Name:{self.hospital_name}")

class Doctor(Hospital):
    def __init__(self, n, d, t, h):
        super().__init__(h)
        self.name = n
        self.degree = d
        self.time = t

    def setDoctor_Details(self):
        self.setHospital_Name()
        print(f"Doctor Name:{self.name}")
        print(f"Doctor Degree:{self.degree}")
        print(f"Doctor Time:{self.time}")

class Patient(Hospital):
    def __init__(self, n, a, c, h):
        super().__init__(h)
        self.name = n
        self.apt = a
        self.cause = c

    def setPatient_Details(self):
        self.setHospital_Name()
        print(f"Patient Name:{self.name}")
        print(f"Patient Appointement ID:{self.apt}")
        print(f"Patient Cause:{self.cause}")

class Receptionist(Hospital):
    def __init__(self, n, s, w, h):
        super().__init__(h)
        self.name = n
        self.salary = s
        self.work_hours = w

    def setReceptionist_Details(self):
        self.setHospital_Name()
        print(f"Receptionist Name:{self.name}")
        print(f"Receptionist Salary:{self.salary}")
        print(f"Receptionist Work Hours:{self.work_hours}")

d = Doctor("ABC", "MBBS", "9:00 - 4:00", "XYZ Hospital")
d.setDoctor_Details()
p = Patient("DEF", "apt04", "UVW", "XYZ Hospital")
p.setPatient_Details()
r = Receptionist("GHI", 4000, "6", "XYZ Hospital")
r.setReceptionist_Details()