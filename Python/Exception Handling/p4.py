class InvalidMarksError(Exception):
    pass
try:
    marks = int(input("Enter Marks: "))

    if marks < 0 or marks > 100:
        raise InvalidMarksError("Marks enterd must be between 0 to 100")

except ValueError:
    print("Enter valid input")
except InvalidMarksError as e:
    print("Error: ",e)
    