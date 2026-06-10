// What are inline functions? Write C++ program demonstrating function overloading and default arguments.

#include <iostream>
using namespace std;

// Function Overloading
int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

// Function with Default Arguments
int multiply(int a, int b = 1)
{
    return a * b;
}

int main()
{
    // Function Overloading
    cout << "Addition of two integers: " << add(10, 20) << endl;
    cout << "Addition of two floating-point numbers: " << add(10.5f, 20.5f) << endl;

    // Default Arguments
    cout << "Multiplication with one argument: " << multiply(5) << endl;
    cout << "Multiplication with two arguments: " << multiply(5, 4) << endl;

    return 0;
}