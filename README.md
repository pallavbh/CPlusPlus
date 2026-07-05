# 📘 C++ Programming Repository

A comprehensive collection of C++ programs and learning materials from the second semester coursework. This repository documents the progression through fundamental and intermediate C++ concepts.

## � Repository Structure
- `Class and Objective/` — object-oriented programming examples and class-based concepts- `Constructor and Destructor/` — constructor and destructor examples- `Function/` — function-specific examples, including overloading and inline functions
- `Lab Work/` — lab exercise scenarios for practical learning
- `Others/` — miscellaneous small programs and utility examples

## �📂 Programs Included

### Class and Objective - OOP Concepts

| Program | Description |
|------|-------------|
| accessingClashMember.cpp | Demonstrates access to class members and basic class usage |
| accessSpecifierPrivate.cpp | Shows how private members are accessed only within the class |
| accessSpecifierProtcted.cpp | Explains protected access in inheritance-related scenarios |
| accessSpecifierPublic.cpp | Demonstrates public members that are accessible from outside the class |
| arrayofObject.cpp | Example of working with arrays of class objects |
| exampleThisPointer.cpp | Example program using the `this` pointer |
| functionInsideTheClass.cpp | Member function defined inside the class body |
| functionOutsideTheClass.cpp | Member function declared inside the class and defined outside |
| nestingofMemberFunction.cpp | Example of one member function calling another |
| nestingofMemberFunction2.cpp | Additional nested member function example |
| passingObjectToFunctionPassByValue.cpp | Demonstrates passing objects to functions by value |
| passingObjectToFunctionPassByConstReference.cpp | Demonstrates passing objects to functions by const reference |
| staticDataMember.cpp | Example of static data members in a class |
| staticDataMember2.cpp | Another example of static data member usage |
| staticDataMemberCw.cpp | Coursework-style example on static data members |
| staticMemberFunction.cpp | Example of static member functions |
| thisPointer.cpp | Simple demonstration of the `this` pointer |
| friendClass.cpp | Demonstrates how friend classes access private members |
| friendFunction.cpp | Demonstrates friend functions and access control |

### Function - Function Concepts

| Program | Description |
|---------|-------------|
| defaultArgument.cpp | Functions with default parameter values - parameters have fallback values if not provided |
| functionOverloading.cpp | Multiple functions with the same name but different parameters |
| InlineFunction.cpp | Inline functions for optimization |
| inlinefunction2.cpp | Additional examples and use cases of inline functions |
| Q1.cpp | Function practice question/exercise |

### Constructor and Destructor - Object Lifecycle Management

This folder contains examples related to constructors and destructors, which are special member functions that manage object creation and destruction.

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
| ternaryOperator.cpp | Demonstrates conditional ternary operator (`condition ? true_value : false_value`) |
| bitWiseOperator.cpp | Bitwise operations including AND, OR, XOR, NOT, left shift, and right shift |
| manipulator.cpp | Output stream manipulators (`setw`, `setprecision`, `setfill`, etc.) for formatted output |
| ClassTypeToBasicType.cpp | Type conversion between class types and basic data types |
| primenumberchecking.cpp | Algorithm to check if a number is prime or composite |
| functionThatTakesTwoInputs.cpp | Practical example of functions accepting multiple parameters |

> Note: Some folders also contain compiled `.exe` files generated during local testing; source `.cpp` files are listed above.

## 🧠 Concepts Covered

- **Basic I/O** - Input/output operations using `cin` and `cout`
- **Functions** - Definition, overloading, default arguments, and inline functions
- **Classes & Objects** - Member functions, scope resolution operator, static members, nested functions, constructors, destructors, and OOP fundamentals
- **Object Passing** - Pass by value vs. pass by const reference
- **Access Control** - Private, public, and protected access specifiers; friend classes and functions
- **Operators** - Arithmetic, bitwise, ternary, and logical operators
- **The `this` Pointer** - Using the this pointer to reference object instances
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
