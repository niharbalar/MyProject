from abc import ABC, abstractmethod
from datetime import datetime

class Notification(ABC):
    def __init__(self, n):
        self.name = n

    @abstractmethod
    def sent():
        pass 

class EmailNotification(Notification):
    def __init__(self, n):
        super().__init__(n)

    def sent(self):
        print(f"Email Notification sent to {self.name} at {datetime.now()}")

class SMSNotification(Notification):
    def __init__(self, n):
        super().__init__(n)

    def sent(self):
        print(f"SMS Notification sent to {self.name} at {datetime.now()}")

class PushNotification(Notification):
    def __init__(self, n):
        super().__init__(n)

    def sent(self):
        print(f"Push Notification sent to {self.name} at {datetime.now()}")

e = EmailNotification("ABC")
s = SMSNotification("DEF")
p = PushNotification("GHI")

e.sent()
s.sent()
p.sent()