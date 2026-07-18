# EVENT GUEST RGISTRATION SYSTEM:-

def register_guests(name, *args, age=18, event, **kwargs):
   
    vip = set(args)

    unique = set()

    for x in vip:
        if x not in unique:
            unique.add(x)

    print(name)
    print(unique)
    print(age)
    print(event)    
    
    for k, v in kwargs.items():
        print(k, v)

    return {
        "Event Name":name,
        "VIP Guests":unique,
        "Minimum Age":age,
        "Event": event,
        "Event Details":kwargs

    }

ans = register_guests("ABC", "A", "B", "C", "A", event=True, date="04/07/26", time="8:30 p.m", venue="XYZ")

print(ans)