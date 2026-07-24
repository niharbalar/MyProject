class InvalidPINError(Exception):
    pass

class InvalidWithdrawalError(Exception):
    pass

try:
    check = 1234
    pin = int(input("Enter your PIN: "))

    if pin != check:
        raise InvalidPINError("Incorrect PIN")

    try:
        balance = 10000
        amount = int(input("Enter withdrawal amount: "))

        if amount <= 0:
            raise InvalidWithdrawalError("Withdrawal amount must be greater than zero")
        if amount > balance:
            raise InvalidWithdrawalError("Insufficient balance")
    except InvalidWithdrawalError as e:
        print("Withdrawal Error:", e)
    except ValueError:
        print("Enter valid input")

except InvalidPINError as e:
    print("PIN Error:", e)
except ValueError:
    print("Enter valid input")
finally:
    print("Program Completed")
