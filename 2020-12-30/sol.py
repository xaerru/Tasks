textSum = lambda s:sum([ord(x)-96for x in s.lower()])

print(textSum("Hello"))
print(textSum("Bye"))
print(textSum("Sum"))

primeSum = lambda n:sum([x for x in range(1,n)if all(x%y for y in range(2,x//2+1))])

print(primeSum(16))
print(primeSum(19))
print(primeSum(5))

similarPrime = lambda n:[x for x in[x for x in range(1,n)if all(x%y for y in range(2,x//2+1))]if sorted(str(x))==sorted(str(n))][0]

print(similarPrime(71))
print(similarPrime(32))
print(similarPrime(371))
