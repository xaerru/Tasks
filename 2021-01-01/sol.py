import re

nthEven = lambda n:2*n-2

print(nthEven(1))
print(nthEven(2))
print(nthEven(100))

validateEmail = lambda s:bool(re.match(r".+@.+\..+", s))

print(validateEmail("@gmail.com"))
print(validateEmail("hello.gmail@com"))
print(validateEmail("gmail"))
print(validateEmail("hello@gmail"))
print(validateEmail("hello@edabit.com"))

def atbash(s):
    r=""
    for x in s:
        if x.isalpha():
            if x.islower():
                r+=chr(219-ord(x))
            else:
                r+=chr(155-ord(x))
        else:
            r+=x
    return r

print(atbash("apple"))
print(atbash("Hello world!"))
print(atbash("Christmas is the 25th of December"))