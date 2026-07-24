try:
    with open("./Python/Exception Handling/notes.txt", "r") as file:
        data = file.read()
except FileNotFoundError:
    print("File NOT Found")
else:
    print(data)
finally:
    print("Program Complted")