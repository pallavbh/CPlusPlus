/* 
Lab 10 (Returning Objects):
For the Complex class created above, write a member function add(const Complex &c)
that returns a new Complex object (the sum).
 Demonstrate chaining of operations, e.g., c1.add(c2).add(c3).
  */

#include <iostream>

using namespace std;

class Complex {
public:
    int real;
    int imag;

    // Constructor
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    /**
     * Member function to add a Complex object to the current one.
     * Returns a new Complex object by value to allow method chaining.
     */
    Complex add(const Complex &c) const {
        // Create a temporary object containing the sum
        Complex result;
        result.real = this->real + c.real;
        result.imag = this->imag + c.imag;
        return result;
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3(5, 6);

    cout << "Original Complex numbers:" << endl;
    c1.display();
    c2.display();
    c3.display();

    // Chaining operations: (c1 + c2) + c3
    // The first call returns a temporary object, and the second call 
    // operates on that returned temporary.
    Complex result = c1.add(c2).add(c3);

    cout << "\nResult of chaining c1.add(c2).add(c3):" << endl;
    result.display();

    return 0;
}