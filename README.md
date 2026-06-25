# 📘 C++ Programming Repository

A comprehensive collection of C++ programs and learning materials from the second semester coursework. This repository documents the progression through fundamental and intermediate C++ concepts.

## 📂 Programs Included

### Class and Objective - OOP Concepts

| Program | Description |
|---------|-------------|
| accessingClashMember.cpp | Example showing how to access class members and navigate nested class relationships |
| functionInsideTheClass.cpp | Member functions defined within the class definition (inline definition) |
| functionOutsideTheClass.cpp | Member functions declared in the class and defined outside using scope resolution operator |
| nestingofMemberFunction.cpp | Nested member function calls and one member invoking another |
| nestingofMemberFunction2.cpp | Additional nested member function examples |
| staticDataMember.cpp | Static member variables in classes - shared across all instances |
| staticDataMember2.cpp | Additional examples of static member variables and usage |
| staticDataMemberCw.cpp | Coursework example demonstrating static member variables |
| staticMemberFunction.cpp | Static member function examples and usage |

### Function - Function Concepts

| Program | Description |
|---------|-------------|
| defaultArgument.cpp | Functions with default parameter values - parameters have fallback values if not provided |
| functionOverloading.cpp | Multiple functions with the same name but different parameters |
| InlineFunction.cpp | Inline functions for optimization |
| inlinefunction2.cpp | Additional examples and use cases of inline functions |
| Q1.cpp | Function practice question/exercise |

### Lab Work - Practical Exercises

| Program | Description |
|---------|-------------|
| scenario1.cpp | Lab exercise scenario 1 |
| scenario2.cpp | Lab exercise scenario 2 |
| scenario3.cpp | Lab exercise scenario 3 |

### Others - Miscellaneous Programs

| Program | Description |
|---------|-------------|
| hello.cpp | Classic "Hello, World!" program |
| integerFromUser.cpp | Basic user input handling - reading integers from the console |
| productOfTwoNUm.cpp | Simple program that multiplies two numbers |
| calculator.cpp | Basic calculator program with arithmetic operations |
| celciustofarenhiet.cpp | Temperature conversion utility - convert Celsius to Fahrenheit |
| ternaryOperator.cpp | Demonstrates conditional ternary operator (condition ? true_value : false_value) |
| bitWiseOperator.cpp | Bitwise operations including AND, OR, XOR, NOT, left shift, and right shift |
| manipulator.cpp | Output stream manipulators (setw, setprecision, setfill, etc.) for formatted output |
| ClassTypeToBasicType.cpp | Type conversion between class types and basic data types |
| primenumberchecking.cpp | Algorithm to check if a number is prime or composite |
| functionThatTakesTwoInputs.cpp | Practical example of functions accepting multiple parameters |

> Note: Some folders also contain compiled `.exe` files generated during local testing.

## 🧠 Concepts Covered

- **Basic I/O** - Input/output operations using `cin` and `cout`
- **Functions** - Definition, overloading, default arguments, and inline functions
- **Classes & Objects** - Member functions, scope resolution operator, static members, nested functions, and OOP fundamentals
- **Operators** - Arithmetic, bitwise, ternary, and logical operators
- **Type Conversion** - Converting between different data types and class types
- **Algorithms** - Prime checking and other computational problems
- **Formatting** - Output stream manipulators for formatted display

## 🛠️ How to Compile & Run

Make sure you have a C++ compiler installed (e.g., **g++** via MinGW on Windows or GCC on Linux/macOS).

```bash
g++ filename.cpp -o filename
./filename
```

Replace `filename.cpp` with any program filename you want to run.

> **On Windows**, you can also open these files in **VS Code** and run them using the Code Runner extension or the built-in terminal.

### Using g++ (MinGW/WSL):
- Compile single file: `g++ -std=c++17 -O2 -Wall -o program "path/to/file.cpp"`
- Run: `./program`

### Using MSVC (Developer Command Prompt):
- Compile: `cl /EHsc "path\to\file.cpp"`
- Run: `program.exe`

## 📝 Notes

- All files are part of the second semester curriculum
- Programs are designed for learning purposes and beginner-level practice
- Comments and documentation are included where applicable
- Files can be compiled on Windows, Linux, and macOS with a compatible C++ compiler
- Default arguments must be specified from right to left in function definitions
- Overloaded functions must differ in the number or type of their parameters
- `system("pause")` may be used in some programs; remove it on Linux/macOS systems

## 👨‍💻 Author

- **Pallav Bhattarai**
- **BCA-IT**
- **2nd Semester**
- **CITE** (College of Information Technology and Engineering)
- **Purbanchal University**

> "The journey of a thousand programs begins with a single Hello World."
