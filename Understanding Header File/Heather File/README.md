# Understanding Header Files in C

Header files are essential building blocks in C programming. They provide pre-built functions and utilities that make coding easier and more efficient. Below are the key header files I'm studying:

---

## 01 - `<stdio.h>` - Standard Input/Output
Used for basic input/output operations:
- **printf()** - Prints output to the user
- **scanf()** - Takes input from the user
- **fgets()** - String input function (better than scanf for strings)
- **getchar()** - Removes the buffer of the new line
- **sizeof()** - Measures the size of arrays or pointers
- **FILE** - Creates files from scratch

---

## 02 - `<bool.h>` - Boolean Values
Used to determine true or false (1/0 binary switch):
- **bool** - Declares boolean variables (isTrue = 1 or true)
- Commonly used in conditional statements
- Example use case: Asking if a user is online or not

---

## 03 - `<string.h>` - String Operations
Used for string manipulation and processing:
- **strcpn()** - Selects a specific character in a string
- **strlen()** - Measures the string length
- **strcpy()** - Copies strings

---

## 04 - `<math.h>` - Mathematical Functions
Used to implement mathematical concepts in coding:
- **sqrt()** - Square root function
- **pow()** - Power function (raises x to a power)
- **round(), ceil(), floor()** - Rounding functions
- **fabs()** - Absolute value for floating-point numbers
- **log(), log10()** - Logarithmic functions
- **sin(), cos(), tan()** - Trigonometric functions (requires angles in RADIANS)

---

## 05 - `<ctype.h>` - Character Classification
Provides functions for classifying and modifying characters:
- **tolower()** - Returns a lowercase version of a character
- **toupper()** - Returns an uppercase version of a character
- **isxdigit()** - Checks if a character is a hexadecimal digit

---

## 06 - `<stdlib.h>` - Standard Library
Provides general-purpose functions including:
- **Memory Management** - malloc(), calloc(), realloc(), free() for dynamic memory allocation
- **Random Numbers** - rand(), srand() for pseudo-random number generation
- **Sorting** - qsort() for sorting arrays

---

## 07 - `<time.h>` - Date and Time Operations
Provides functions for manipulating date and time:
- **time()** - Retrieves current time since Unix epoch (January 1, 1970)
- **localtime()** - Converts time into local time components (hours, minutes, seconds, day, month, year)
- **asctime()** - Converts time into human-readable string format "Day Mon Date HH:MM:SS YYYY"

---
