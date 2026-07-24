class MovieTicket:
    discount = 10

    def __init__(self, n, p):
        self.name = n
        self.price = p

    @staticmethod
    def calcDisc(price, discount):
        return price - (price * discount / 100)

    @classmethod
    def updateDisc(cls, nd):
        cls.discount = nd

    def display(self):
        final = self.calcDisc(self.price, self.discount)
        print(f"Movie: {self.name}")
        print(f"Final Ticket Price: {final}")

name = input("Enter Movie Name: ")
ticket = int(input("Enter Ticket Price: "))

ticket = MovieTicket(name, ticket)
ticket.display()
MovieTicket.updateDisc(20)
ticket.display()