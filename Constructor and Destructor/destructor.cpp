#include <iostream>
#include <string>
using namespace std;

class Demo {
private:
    string name;

public:
    // Constructor: Called when the object is created
    Demo(string n) {
        name = n;
        cout << "Constructor called for: " << name << endl;
    }

    // Destructor: Called when the object is destroyed
    // Note: The '~' symbol denotes a destructor
    ~Demo() {
        cout << "Destructor called for: " << name << endl;
    }
};

int main() {
    cout << "--- Starting scope block ---" << endl;
    
    {
        // Creating an object inside a limited scope
        Demo obj1("Object 1");
        Demo obj2("Object 2");
        
        cout << "Working within the block..." << endl;
    } 
    // obj1 and obj2 go out of scope here; destructors are called automatically.

    cout << "--- Back in main, after block ---" << endl;

    return 0;
}