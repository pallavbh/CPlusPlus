/* 
Lab 9 (Passing Objects by Reference):
Define a class Complex with integer data members real and imag.
Write a global function addComplex(const Complex &c1, const Complex &c2) 
that takes two Complex objects by const reference and returns a Complex object.
In main(), create two Complex numbers, add them, and display the result.
 */

#include <iostream>

using namespace std;

class Complex {
public:
    int real;
    int imag;

    // Constructor to initialize real and imaginary parts
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

/**
 * Global function to add two Complex objects.
 * We use 'const Complex &' to pass objects by reference, 
 * which avoids copying the data while ensuring it cannot be changed.
 */
Complex addComplex(const Complex &c1, const Complex &c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    // Creating two Complex objects
    Complex num1(3, 4);
    Complex num2(1, 2);

    // Adding the two objects
    Complex sum = addComplex(num1, num2);

    // Displaying the results
    cout << "Complex 1: "; num1.display();
    cout << "Complex 2: "; num2.display();
    cout << "Sum:       "; sum.display();

    return 0;
}