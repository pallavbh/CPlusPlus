#include <iostream>

// Use the standard namespace for convenience with cout
using namespace std;

// Simple Complex number class demonstrating operator overloading
class Complex {
    private:
        int real, imag; // real and imaginary parts
    public:
        // Constructor with default arguments (allows Complex(), Complex(r), Complex(r,i))
        Complex (int r = 0, int i = 0 ) {
            real = r;
            imag = i;
        }

        // Overload the '+' operator to add two Complex numbers
        Complex operator + (Complex const& obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        // Print the complex number in a readable form
        void print() {
            // Format: real + iimag
            cout << real << " + i" << imag << endl;
        }
};

int main(){
    // Create two Complex objects
    Complex c1(10, 5), c2(2, 4);
    // Use overloaded + operator to add c1 and c2
    Complex c3 = c1 + c2;
    // Output the result
    c3.print();

    return 0;
}