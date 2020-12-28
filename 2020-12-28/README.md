# 28/12/2020

## Task 1

Write a function that inverts the keys and values of a dictionary.

### Examples

```py
invert({ "z": "q", "w": "f" })
➞ { "q": "z", "f": "w" }

invert({ "a": 1, "b": 2, "c": 3 })
➞ { 1: "a", 2: "b", 3: "c" }
```

## Task 2

Write a function that receives an array of x integers and returns an array of x integers in the Nth term of a quadratic number sequence (where x is the length of the incoming array). Your function should return the continuation of the quadratic sequence of the length equal to the length of the given array.

### Examples

```py
quad_sequence([48, 65, 84]) ➞ [105, 128, 153]
quad_sequence([0, 1, 6, 15, 28]) ➞ [45, 66, 91, 120, 153]
```

## Task 3

Create a function that takes four tuples. The first three are (x, y) coordinates of three corners of a triangle. Return true if the fourth tuple — the (x, y) coordinates of a test point — lies within the triangle, false if it doesn't.

### Examples

```py
within_triangle([1, 4], [5, 6], [6, 1], [4, 5]) ➞ true
within_triangle([1, 4], [5, 6], [6, 1], [3, 2]) ➞ false
```
