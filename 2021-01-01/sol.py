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

atbash=lambda  s:''.join([chr(90-(ord(x)-65)) if x.isalpha() and x.isupper() else (chr(122-(ord(x)-97) if x.isalpha() else ord(x))) for x in s])

print(atbash("apple"))
print(atbash("Hello world!"))
print(atbash("Christmas is the 25th of December"))
