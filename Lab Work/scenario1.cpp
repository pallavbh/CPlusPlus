/*
================================================================================
SCENARIO 1: SMART CALCULATOR
================================================================================

PROBLEM STATEMENT:
Develop a calculator program that can perform addition on different types of inputs.

REQUIREMENTS:
1. Create overloaded functions named add() for:
   - Two integers
   - Two floating-point numbers
   - Three integers
2. Create an inline function square() that returns the square of a number
3. Display the result of each operation

CONCEPTS NEEDED TO IMPLEMENT:
- Function Overloading
- Inline Functions
- Basic Arithmetic Operations

================================================================================
*/

// Scenario 1: Smart Calculator
#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

//Inline Function
inline int square(int n)
{
    return n * n;
}

int main()
{
    cout << "Addition of two numbers: " << add(10, 20) << endl;
    cout << "Addition of two floating-point numbers: " << add(3.5f, 4.5f) << endl;
    cout << "Addition of three numbers: " << add(10, 20, 30) << endl;
    cout << "Square of a number: " << square(5) << endl;
    return 0;

}