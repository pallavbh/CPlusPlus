# 📘 C++ Programming Repository

This repository contains C++ practice programs organized by topic. Each folder focuses on a specific concept such as classes, inheritance, functions, templates, operator overloading, and exception handling.

## 📁 Folder Overview

| Folder | What it contains |
|---|---|
| [Assignment1_LabQuestions](Assignment1_LabQuestions/README.md) | Lab exercises for arrays, pointers, constructors, destructors, and friends |
| [Class and Objective](Class%20and%20Objective/README.md) | Basic OOP concepts like classes, objects, access specifiers, and the this pointer |
| [Constructor and Destructor](Constructor%20and%20Destructor/README.md) | Examples showing how constructors and destructors work |
| [Exception Handling](Exception%20Handling/README.md) | Programs demonstrating exception handling, `try`/`catch`, and multiple catch blocks |
| [Function](Function/README.md) | Programs on function overloading, default arguments, and inline functions |
| [File Handling](File%20Handling/README.md) | Examples using file streams, text files, and reading/writing file data |
| [FunctionVirtual and Polymorphism](FunctionVirtual%20and%20Polymorphism/README.md) | Virtual functions and polymorphism examples |
| [Inheritance](Inheritance/README.md) | Examples of single, multilevel, multiple, and hierarchical inheritance |
| [Lab Work](Lab%20Work/README.md) | Practical lab exercises and scenario-based programs |
| [Operator Overloading](Operator%20Overloading/README.md) | Programs demonstrating operator overloading techniques |
| [Others](Others/README.md) | Miscellaneous small C++ practice files |
| [Template](Template/README.md) | Basic examples of C++ templates and generic programming |

## 🧠 Concepts Covered

- Basic I/O - Input/output operations using `cin` and `cout`
- Functions - Definition, overloading, default arguments, and inline functions
- Classes & Objects - Member functions, scope resolution operator, static members, nested functions, constructors, destructors, and OOP fundamentals
- Object Passing - Pass by value vs. pass by const reference
- Access Control - Private, public, and protected access specifiers; friend classes and functions
- Inheritance - Single, multilevel, and public inheritance examples
- Operators - Arithmetic, bitwise, ternary, and logical operators
- The `this` Pointer - Using the `this` pointer to reference object instances
- Type Conversion - Converting between different data types and class types
- Algorithms - Prime checking and other computational problems
- Formatting - Output stream manipulators for formatted display
- Exception Handling - Using `try`, `catch`, `throw`, and standard exception classes

## 🛠️ How to Compile & Run

Make sure you have a C++ compiler installed (for example, `g++` via MinGW on Windows or GCC on Linux/macOS).

```bash
g++ filename.cpp -o filename
./filename
```

Replace filename.cpp with any program filename you want to run.

> On Windows, you can also open these files in VS Code and run them using the Code Runner extension or the built-in terminal.

### Using g++ (MinGW/WSL)
- Compile single file: g++ -std=c++17 -O2 -Wall -o program "path/to/file.cpp"
- Run: ./program

### Using MSVC (Developer Command Prompt)
- Compile: cl /EHsc "path\to\file.cpp"
- Run: program.exe

## 📝 Notes

- Each folder has its own README with a table of files and descriptions (linked above).
- Programs are for learning and may include comments and simple examples.
- Remove system-specific calls (e.g., system("pause")) when porting between OSes.
- Source files are preferred; compiled executables may be present from local tests.

## 👨‍💻 Author

- Pallav Bhattarai  
- BCA-IT  
- 2nd Semester  
- CITE (College of Information Technology and Engineering)  
- Purbanchal University

> "The journey of a thousand programs begins with a single Hello World!."