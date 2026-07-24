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
        final = MovieTicket.calcDisc(
            self.price,
            MovieTicket.discount
        )
        print("Movie:", self.name)
        print("Final Ticket Price:", final)

ticket = MovieTicket("Avengers", 200)
ticket.display()
MovieTicket.updateDisc(20)
ticket.display()