#include <iostream>
using namespace std;

class c1 {
    int s = 2; // Private member variable

public:
    // This function will be called by m2() (The nested call)
    void m1() {
        cout << "Value from m1: " << s << endl;
    }

    // This is the primary function being called from main()
    void m2() {
        m1(); // Nested member function call
        cout << "Value from m2: " << s << endl;
    }
};

int main() {
    c1 obj;
    // Triggering the nested function structure
    obj.m2(); 
    
    return 0;
}