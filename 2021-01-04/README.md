# 2021-01-04

## Task 1

Write a function that takes an array and determines whether it's strictly increasing, strictly decreasing, or neither.

### Examples

```py
check([1, 2, 3]) ➞ "increasing"
check([3, 2, 1]) ➞ "decreasing"
check([1, 2, 1]) ➞ "neither"
```

## Task 2

Create a function that takes a triangle and a test point. Return true if the test point lies within the triangle, false if it doesn't.

### Examples

```py
withinTriangle(triangle: [(1, 4), (5, 6), (6, 1)], testPoint: (4, 5)) ➞ true
withinTriangle(triangle: [(1, 4), (5, 6), (6, 1)], testPoint: (3, 2)) ➞ false
```

## Task 3

Your chess teacher wants to know if a bishop can reach a certain spot on the board in the given amount of moves.

Given a starting square start, ending square end and the maximum number of moves allowed n. Return true if the ending square can be reached from the starting square within 
the given amount of moves. Keep in mind the chessboard goes from a1 to h8 (8x8).

### Examples

```py
bishop("a1", "b4", 2) ➞ true
bishop("a1", "b5", 5) ➞ false
bishop("f1", "f1", 0) ➞ true
```

