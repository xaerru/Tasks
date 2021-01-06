def averageChar(s:str) -> str:
    t = 0
    for x in s:
        t += ord(x)
    return chr(t//len(s))

print(averageChar("Hello"))
print(averageChar("Yes"))
print(averageChar("aaaa"))
print("-----")

def space(s:str) -> str:
    r = ""
    for x in s:
        if x.isupper() and s[0]!=x:
            r+=" "
            r+=x.lower()
        else:
            r+=x
    return r

print(space("HelloWorld!"))
print(space("HowAreYou?"))
print(space("Simple,Right?"))
print("-----")

def sort(s:str) -> str:
    l = s.split()
    d = {}
    for x in l:
        d[x]=ord(averageChar(x))
    sortedD={x:y for x,y in sorted(d.items(), key=lambda a: a[1])}
    for x in sortedD:
        print(x,end=" ")

sort("Hello Yes aaaa")
