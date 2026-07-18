# from datetime import date, time, datetime, timedelta, timezone

# today = date.today()
# now = datetime.now()
# dt = now.date()
# tm = now.time()

# print(now.weekday())
# print(now.day)
# print(now.month)
# print(now.year)
# print(now.hour)
# print(now.minute)
# print(now.second)

# dt = date(2008, 4, 1)
# print(dt)

# dt_tm = datetime(2026, 7, 13, 10, 30)
# print(dt_tm)

# ft = now.strftime("%d-%m-%Y %H:%M:%S %p")
# print(ft)

# from dateutil.relativedelta import relativedelta

# dt = date(2008, 1, 4)
# ndt = dt + relativedelta(days=3)
# # ndt = dt - relativedelta(days=3)
# print(ndt)

# dt_tm = datetime(2026, 7, 13, 10, 30)
# ndt_tm = dt_tm + relativedelta(hours=2)
# ndt_tm = dt_tm - relativedelta(minutes=30)
# print(ndt_tm)

# dt = date(2008, 1, 4)
# diff = today - dt 
# print(diff)

# dt_tm = datetime(2026, 7, 13, 10, 30)
# diff = dt_tm -  now  
# print(diff.days)
# print(int(round(diff.seconds/60)))

# dt = date(2008, 1, 4)
# ndt = today - dt
# y = divmod(ndt.days, 365)
# print(y)

# print(today > dt)

# print(now.timestamp())

# tm = datetime.fromtimestamp(1783571450)
# print(tm)

# utc1 = datetime.now(timezone.utc)
# print(utc1)