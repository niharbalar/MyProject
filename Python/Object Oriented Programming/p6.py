class Account:
    def setDetails(self):
        self.name = input("Enter your name: ")
        self.acc_num = int(input("Enter Account Number: "))

    def displayAcc(self):
        print(f"Account Holder: {self.name}")
        print(f"Account Number: {self.acc_num}")

class SavingsAccount(Account):
    def setBalance(self):
        self.acc_bal = float(input("Enter Account Balance: "))

    def displayBal(self):
        print(f"Current Balance: {self.acc_bal}")

class FixedDeposit(SavingsAccount):
    def __init__(self, rate):
        self.interest_rate = rate

    def setYears(self):
        self.years = int(input("Enter Time Period (years): "))

    def calcMaturity(self):
        interest = (self.acc_bal  * self.interest_rate * self.years) / 100
        self.maturity = self.acc_bal + interest

    def displayFD(self):
        self.calcMaturity()
        self.displayAcc()
        self.displayBal()
        print(f"Interest Rate: {self.interest_rate}%")
        print(f"Time Period: {self.years} years")
        print(f"Maturity Amount: {self.maturity}")

fd = FixedDeposit(7)
fd.setDetails()
fd.setBalance()
fd.setYears()
fd.calcMaturity()
print("\n")
fd.displayFD()