def check(a:list) -> str:
    inc = 0
    dec = 0
    for x in range(len(a)-1):
        if a[x]<a[x+1]:
            inc+=1
        else:
            dec+=1
    if inc==0:
        return "decreasing"
    elif dec==0:
        return "increasing"
    else:
        return "neither"

print(check([1,2,3]))
print(check([3,2,1]))
print(check([1,2,1]))
print("-----")

area = lambda a,b,c:abs((a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2.0) 

def withinTriangle(a:list, b:list, c:list, d:list) -> bool:
    return area(a,b,c)==area(b,c,d)+area(a,c,d)+area(a,b,d)

print(withinTriangle([1, 4], [5, 6], [6, 1], [4, 5]))
print(withinTriangle([1, 4], [5, 6], [6, 1], [3, 2]))
print("-----")

def color(s:str) -> bool:
    return ord(s[0])%2==ord(s[1])%2

def bishop(s:str, f:str, m:int) -> bool:
    return color(s) == color(f)

print(bishop("a1", "b4", 2))
print(bishop("a1", "b5", 5))
print(bishop("f1", "f1", 0))
