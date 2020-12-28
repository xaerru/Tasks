from datetime import datetime
from dateutil.relativedelta import relativedelta
 
dis = lambda p,d:p-(p*(d/100))

print(dis(1500,50))
print(dis(89,20))
print(dis(100,75))

def numberOfDays(s : str) -> str:
    diff=relativedelta(datetime.now().date(),datetime.strptime(s, "%m/%d/%Y"))
    return f"{diff.years} year(s), {diff.months} month(s), {diff.days} day(s)"

print(numberOfDays("12/1/2020"))
print(numberOfDays("7/7/2020"))
print(numberOfDays("6/13/2019"))

isHappyNumber = lambda n:eval({1:"True",4:"False"}.get(n,'isHappyNumber(sum(int(x)**2for x in str(n)))'))

print(isHappyNumber(19))
print(isHappyNumber(7))
print(isHappyNumber(32))
print(isHappyNumber(145))
print(isHappyNumber(4))
print(isHappyNumber(89))
print(isHappyNumber(20))
