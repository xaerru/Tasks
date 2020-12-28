invert = lambda d:dict(zip(d.values(),d.keys())) 

print(invert({ "z": "q", "w": "f" }))
print(invert({ "a": 1, "b": 2, "c": 3 }))

def quadSequence(arr : list) -> list:
    r = [arr[x+1]-arr[x]for x in range(len(arr)-1)]
    d = r[1]-r[0]
    f=[]
    for x in range(len(arr)):f.append(arr[-1]+r[-1]+d);arr[-1]+=r[-1]+d*(x+2)
    return f

print(quadSequence([48, 65, 84]))
print(quadSequence([0, 1, 6, 15, 28]))

area = lambda a,b,c:abs((a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2.0) 

def withinTriangle(a:list, b:list, c:list, d:list) -> bool:
    return area(a,b,c)==area(b,c,d)+area(a,c,d)+area(a,b,d)

print(withinTriangle([1, 4], [5, 6], [6, 1], [4, 5]))
print(withinTriangle([1, 4], [5, 6], [6, 1], [3, 2]))
