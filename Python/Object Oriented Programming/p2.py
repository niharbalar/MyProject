class Library:
    total = 0

    def __init__(self, n, a):
        self.name = n
        self.author = a

        Library.total += 1

    def dispInfo(self):
        print(f"Book Name:{self.name}")
        print(f"Author Name:{self.author}")

    @classmethod
    def totalBook(cls):
        print(f"Total Books:{cls.total}")

l1 = Library("ABC", "DEF")
l2 = Library("GHI", "JKL")
l1.dispInfo()
print("------------------")
l2.dispInfo()
print("------------------")
Library.totalBook()