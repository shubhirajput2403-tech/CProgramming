============================================================
C PROJECT – ARRAY AND NUMERICAL OPERATIONS
============================================================

This project contains two separate C programs:

1. mainArray.c    -> Handles array-based operations
2. main.c         -> Handles numerical operations like prime, palindrome, etc.
3. MylibArray/    -> Folder containing custom array utility functions
4. README.txt     -> This file

------------------------------------------------------------
1. mainArray.c – Array Operations
------------------------------------------------------------

This is a menu-driven program that performs operations on an array of integers.

>>> Features:
- Input array elements
- Display the array
- Find the maximum element and its index
- Find the minimum element and its index
- Calculate the average of all elements
- Reverse the array
- Sort the array
- Search for an element using linear search

>>> Menu Structure:

    === Menu ===
    1. Display Array
    2. Find Maximum Element
    3. Find Minimum Element
    4. Find Average of Elements
    5. Reverse Array
    6. Sort Array
    7. Search for an Element
    0. Exit

>>> Dependencies:
- Uses functions defined in MylibArray/myLibArray.h and MylibArray/myLibArray.c

------------------------------------------------------------
2. main.c – Numerical Operations
------------------------------------------------------------

This program allows users to perform various number-related checks.

>>> Features:
- Check if a number is prime
- Check if a number is a palindrome
- Check if a number is an Armstrong number
- Check if a number is an Adam number

>>> Menu Structure:

    === Number Operations Menu ===
    1. Check Prime
    2. Check Palindrome
    3. Check Armstrong
    4. Check Adam Number
    0. Exit

>>> Description of Checks:
- Prime Number: Number divisible only by 1 and itself
- Palindrome: Number reads the same forward and backward
- Armstrong: Sum of digits raised to the number of digits equals the number itself
- Adam Number: A number whose square reversed equals the square of its reversed digits

------------------------------------------------------------
3. Compilation Instructions
------------------------------------------------------------

Use GCC compiler to compile and run the programs.

>>> Compile Array Program:
    gcc mainArray.c MylibArray/myLibArray.c -o arrayOps

>>> Compile Numerical Program:
    gcc main.c -o numOps

>>> Run the Executables:
    ./arrayOps      (for array operations)
    ./numOps        (for number operations)

------------------------------------------------------------
4. Folder Structure
------------------------------------------------------------

ProjectFolder/
├── mainArray.c
├── main.c
├── MylibArray/
│   ├── myLibArray.h
│   └── myLibArray.c
└── README.txt

------------------------------------------------------------
5. Notes
------------------------------------------------------------

- Make sure MylibArray functions are properly declared and defined.
- Feel free to extend the project with more number or array operations.
- Always validate user input to avoid unexpected behavior.

============================================================
