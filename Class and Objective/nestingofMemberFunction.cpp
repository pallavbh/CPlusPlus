#include <iostream>
using namespace std;

// Demonstrates one member function calling another within the same class.
class c1 {
    int s = 2; // Private member variable

public:
    // This function is called by m2(). It uses the class member s.
    void m1() {
        cout << "Value from m1: " << s << endl;
    }

    // Main member function called from main().
    void m2() {
        m1(); // Nested member function call
        cout << "Value from m2: " << s << endl;
    }
};

int main() {
    c1 obj;
    // Call the outer member function, which in turn calls m1().
    obj.m2(); 
    
    return 0;
}