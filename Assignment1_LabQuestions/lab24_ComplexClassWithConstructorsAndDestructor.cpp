/* 
Lab 24 (Complex Class with Constructors & Destructor):
 Design a Complex class that uses dynamic memory for its real and imag parts (use int*). Implement a default
  constructor, a parameterized constructor, a copy constructor, and a destructor. Write a function to display a complex
   number. In main(), demonstrate all constructors and the destructor's effect.
    */

#include <iostream>
using namespace std;

class Complex {
private:
    int* real;
    int* imag;

public:
    // Default Constructor: Initializes with 0
    Complex() {
        real = new int(0);
        imag = new int(0);
        cout << "Default constructor called." << endl;
    }

    // Parameterized Constructor
    Complex(int r, int i) {
        real = new int(r);
        imag = new int(i);
        cout << "Parameterized constructor called." << endl;
    }

    // Copy Constructor: Performs Deep Copy
    Complex(const Complex &other) {
        real = new int(*other.real);
        imag = new int(*other.imag);
        cout << "Copy constructor called (Deep Copy)." << endl;
    }

    // Destructor: Frees dynamically allocated memory
    ~Complex() {
        delete real;
        delete imag;
        cout << "Destructor called: Memory freed." << endl;
    }

    void display() const {
        cout << *real << " + " << *imag << "i" << endl;
    }
};

int main() {
    cout << "--- Creating c1 (Default) ---" << endl;
    Complex c1;

    cout << "\n--- Creating c2 (Parameterized) ---" << endl;
    Complex c2(5, 10);

    cout << "\n--- Creating c3 (Copy of c2) ---" << endl;
    Complex c3 = c2;

    cout << "\nDisplaying values:" << endl;
    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();
    cout << "c3: "; c3.display();

    cout << "\n--- End of main: Destructors will be called now ---" << endl;
    return 0;
}