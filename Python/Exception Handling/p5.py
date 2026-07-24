class InvalidPINError(Exception):
    pass

class InvalidWithdrawalError(Exception):
    pass

try:
    check = 1234
    pin = int(input("Enter your PIN: "))

    if pin != check:
        raise InvalidPINError("Incorrect PIN")

    balance = 10000
    amount = int(input("Enter withdrawal amount: "))

    if amount <= 0:
        raise InvalidWithdrawalError("Withdrawal amount must be greater than zero")
    if amount > balance:
        raise InvalidWithdrawalError("Insufficient balance")

except InvalidPINError as e:
    print("PIN Error:", e)
except InvalidWithdrawalError as e:
    print("Withdrawal Error:", e)
except ValueError:
    print("Please enter a valid number")
finally:
    print("Withdrawal Completed")