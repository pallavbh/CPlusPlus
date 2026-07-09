/* 
Lab 16 (Friend Function for Operator Overloading - optional intro):
For the Complex class, declare a friend function operator+(const Complex &c1, const Complex &c2) that overloads
the + operator (this introduces friend for operator overloading). In main(), demonstrate that c1 + c2 works.
 */

#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Declaring the operator+ as a friend function
    friend Complex operator+(const Complex &c1, const Complex &c2);

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Defining the friend function outside the class
Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);

    // Demonstration of c1 + c2
    Complex sum = c1 + c2;

    cout << "Complex 1: "; c1.display();
    cout << "Complex 2: "; c2.display();
    cout << "Sum:       "; sum.display();

    return 0;
}