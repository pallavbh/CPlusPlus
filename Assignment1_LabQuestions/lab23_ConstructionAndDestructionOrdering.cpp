/* 
Lab 23 (Constructor & Destructor Ordering):
 Create a base class Base and a derived class Derived. Each class should have a constructor that prints a message and a
  destructor that prints a message. In main(), create an object of Derived and observe the order of constructor and
   destructor calls. Explain the output.
    */

#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base constructor called" << endl; }
    ~Base() { cout << "Base destructor called" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived constructor called" << endl; }
    ~Derived() { cout << "Derived destructor called" << endl; }
};

int main() {
    cout << "Creating Derived object..." << endl;
    {
        Derived d;
    } // Object goes out of scope here
    cout << "Object destroyed." << endl;
    return 0;
}

/* 

Explanation
1. Constructor Order (Top-Down)
The Base constructor is always called first. This is because the derived 
class depends on the base class’s members and logic. C++ ensures that the base 
portion of the object is fully constructed before the derived portion starts its initialization.

2. Destructor Order (Bottom-Up)
The Derived destructor is always called first. The object is destroyed in
 the reverse order of its creation. Since the derived class is "added on top" 
 of the base class, it must be torn down first. Once the derived part is cleaned up, the base 
 part can be safely destroyed.

This predictable order ensures that derived classes can safely access base class resources
 during construction and that base class resources remain available until the derived class is 
 finished with them during destruction.
*/