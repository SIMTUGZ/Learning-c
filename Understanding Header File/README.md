# Learning C Programming 📚

Welcome to my C programming learning journey! This repository documents my progress and understanding of the C language as I learn it through college and self-study. Here, you'll find explanations, examples, and notes on fundamental C concepts.

---

## 📖 Contents

### Understanding Header Files

Header files are essential building blocks in C programming. They provide pre-built functions and utilities that make coding easier and more efficient. Below are the key header files I'm studying:

#### **1. `<stdio.h>` - Standard Input/Output**
- **Purpose**: Handles input and output operations
- **Key Functions**:
  - `printf()` - Displays output to the console
  - `scanf()` - Reads input from the user
  - `fgets()` - Reads strings from input (safer than scanf for strings)
  - `getchar()` - Reads a single character (useful for clearing input buffers)
  - `FILE` - Functions for file creation and manipulation

#### **2. `<bool.h>` - Boolean Values**
- **Purpose**: Enables true/false logic (1/0 binary values)
- **Usage**: Commonly used in conditional statements
- **Example**: Checking if a user is online or offline
- **Value**: `bool` = `true` (1) or `false` (0)

#### **3. `<string.h>` - String Manipulation**
- **Purpose**: Provides functions to work with strings
- **Key Functions**:
  - `strcpy()` - Copies one string to another
  - `strlen()` - Measures the length of a string
  - `strcspn()` - Selects specific characters within a string
  - Other useful string manipulation functions

#### **4. `<math.h>` - Mathematical Operations**
- **Purpose**: Performs complex mathematical calculations
- **Key Functions**:
  - **Square Root & Power**: `sqrt()`, `pow()`
  - **Rounding**: `round()`, `ceil()`, `floor()`
  - **Absolute Value**: `fabs()` (for floating-point), `abs()` (for integers)
  - **Logarithms**: `log()` (natural), `log10()` (base-10)
  - **Trigonometry**: `sin()`, `cos()`, `tan()` *(Note: angles must be in radians)*

#### **5. `<stdlib.h>` - Standard Library**
- **Purpose**: General-purpose functions for dynamic memory and system operations
- **Key Functions**:
  - **Memory Management**: `malloc()`, `calloc()`, `realloc()`, `free()`
  - **Random Numbers**: `rand()`, `srand()`
  - **Sorting**: `qsort()`
  - **Data Conversion**: Various conversion utilities

---

## 🎯 Learning Progress

I'm continuously expanding my knowledge of C as I progress through my college coursework and personal projects. Each header file section includes:
- Clear explanations of what each function does
- When and why to use them
- Practical examples (coming soon!)

---

## 💡 Tips for Learning C

1. **Practice regularly** - Write small programs using each function
2. **Read error messages** - They help you debug and learn
3. **Use header files correctly** - Including the right header prevents compilation errors
4. **Start simple** - Master basics before moving to complex concepts

---

## 🚀 Next Steps

- [ ] Add practical code examples for each header file
- [ ] Create sample programs demonstrating header file usage
- [ ] Document more advanced header files
- [ ] Build small projects combining multiple header files

---

**Last Updated**: 2026-06-17  
**Status**: 🔄 Ongoing Learning
