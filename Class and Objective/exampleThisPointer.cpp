#include <iostream>
using namespace std;

// Demonstrates the use of the "this" pointer to distinguish member variables.
class A {
    int a;  // Member variable

public:
    void setData(int a) {
        // Use this->a to refer to the class member variable, not the parameter
        this->a = a;
    }

    void getData() {
        cout << "The value of a = " << a << endl;
    }
};

int main() {
    // Create an object of class A
    A obj;

    // Set the member variable using the setter method
    obj.setData(10);

    // Display the stored value
    obj.getData();

    return 0;
}