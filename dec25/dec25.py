from datetime import datetime
from dateutil.relativedelta import relativedelta

"""
Create a function that takes two arguments: the original price and the discount percentage as integers and returns the final price after the discount.
"""
 
dis = lambda p,d:p-(p*(d/100))

print(dis(1500,50))
print(dis(89,20))
print(dis(100,75))

"""
Create a program to calculate year(s) month(s) and day(s) between giving day and current date
"""

def numberOfDays(s : str) -> str:
    diff=relativedelta(datetime.now().date(),datetime.strptime(s, "%m/%d/%Y"))
    return f"{diff.years} year(s), {diff.months} month(s), {diff.days} day(s)"

print(numberOfDays("12/1/2020"))
print(numberOfDays("7/7/2020"))
print(numberOfDays("6/13/2019"))

"""
Write a program to determine if a number n is "happy".

A happy number is a number defined by the following process: 

Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.
"""

isHappyNumber = lambda n:eval({1:"True",4:"False"}.get(n,'isHappyNumber(sum(int(x)**2for x in str(n)))'))

print(isHappyNumber(19))
print(isHappyNumber(7))
print(isHappyNumber(32))
print(isHappyNumber(145))
print(isHappyNumber(4))
print(isHappyNumber(89))
print(isHappyNumber(20))
