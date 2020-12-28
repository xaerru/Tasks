"""
Write a function that inverts the keys and values of a dictionary.
"""

invert = lambda d:dict(zip(d.values(),d.keys())) 

print(invert({ "z": "q", "w": "f" }))
print(invert({ "a": 1, "b": 2, "c": 3 }))

"""
Write a function that receives an array of x integers and returns an array of x integers in the Nth term of a quadratic number sequence (where x is the length of the incoming array).
Your function should return the continuation of the quadratic sequence of the length equal to the length of the given array.
"""

def quadSequence(arr : list) -> list:
    r = [arr[x+1]-arr[x]for x in range(len(arr)-1)]
    d = r[1]-r[0]
    f=[]
    for x in range(len(arr)):f.append(arr[-1]+r[-1]+d);arr[-1]+=r[-1]+d*(x+2)
    return f

print(quadSequence([48, 65, 84]))
print(quadSequence([0, 1, 6, 15, 28]))

"""
Create a function that takes four tuples. The first three are (x, y) coordinates of three corners of a triangle. 
Return true if the fourth tuple — the (x, y) coordinates of a test point — lies within the triangle, false if it doesn't.
"""

area = lambda a,b,c:abs((a[0] * (b[1] - c[1]) + b[0] * (c[1] - a[1]) + c[0] * (a[1] - b[1])) / 2.0) 

def withinTriangle(a:list, b:list, c:list, d:list) -> bool:
    return area(a,b,c)==area(b,c,d)+area(a,c,d)+area(a,b,d)

print(withinTriangle([1, 4], [5, 6], [6, 1], [4, 5]))
print(withinTriangle([1, 4], [5, 6], [6, 1], [3, 2]))
