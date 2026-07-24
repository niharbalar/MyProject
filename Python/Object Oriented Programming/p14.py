class CurrencyConverter:
    USDRate = 95

    def __init__(self, u):
        self.usd = u

    def converter(self):
        print(f"{self.usd} USD -> {self.usd * CurrencyConverter.USDRate} INR")

    @classmethod
    def exchangeRate(cls, c):
        cls.USDRate = c

    @staticmethod
    def validateAmount(amt):
        return amt > 0

amount = float(input("Enter Amount: "))

if CurrencyConverter.validateAmount(amount):
    c = CurrencyConverter(amount)
    c.converter()
    CurrencyConverter.exchangeRate(96)
    c.converter()
else:
    print("Invalid Amount")