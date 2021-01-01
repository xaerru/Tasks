# 2021-01-01

## Task 1

Create a function that takes a number n and returns the nth even number.

### Examples

```py
nth_even(1) ➞ 0
# 0 is first even number

nth_even(2) ➞ 2
# 2 is second even number

nth_even(100) ➞ 198
```

## Task 2

Create a function that accepts a string, checks if it's a valid email address and returns either true or false, depending on the evaluation.

- The string must contain an @ character.
- The string must contain a . character.
- The @ must have at least one character in front of it.
- e.g. "e@edabit.com" is valid while "@edabit.com" is invalid.
- The . and the @ must be in the appropriate places.
- e.g. "hello.email@com" is invalid while "john.smith@email.com" is valid.
- If the string passes these tests, it's considered a valid email address.

### Examples

```py
validateEmail("@gmail.com") ➞ false

validateEmail("hello.gmail@com") ➞ false

validateEmail("gmail") ➞ false

validateEmail("hello@gmail") ➞ false

validateEmail("hello@edabit.com") ➞ true
```

## Task 3

The Atbash cipher is an encryption method in which each letter of a word is replaced with its "mirror" letter in the alphabet: A <=> Z; B <=> Y; C <=> X; etc.
Create a function that takes a string and applies the Atbash cipher to it.

Capitalisation should be retained.

Non-alphabetic characters should not be altered.

### Examples

```py
atbash("apple") ➞ "zkkov"

atbash("Hello world!") ➞ "Svool dliow!"

atbash("Christmas is the 25th of December") ➞ "Xsirhgnzh rh gsv 25gs lu Wvxvnyvi"
```

