/* 
Lab 17 (Returning Objects by Value vs Reference):
Write a class Counter with an int value. Implement member functions increment() (returns by value), 
incrementByRef() (returns by reference), and incrementByPtr() (returns by pointer). In main(), demonstrate the difference in 
chaining: c.increment().increment() vs c.incrementByRef().incrementByRef(). Explain why one works and the other doesn't.
 */

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    // Returns by Value: Creates a temporary copy
    Counter increment() {
        value++;
        return *this; 
    }

    // Returns by Reference: Returns the original object
    Counter& incrementByRef() {
        value++;
        return *this;
    }

    // Returns by Pointer: Returns the address of the object
    Counter* incrementByPtr() {
        value++;
        return this;
    }

    void display() const { cout << "Value: " << value << endl; }
};

int main() {
    Counter c1, c2;

    cout << "Chaining by Reference:" << endl;
    c2.incrementByRef().incrementByRef();
    c2.display(); // Output: 2

    cout << "\nChaining by Value (Attempt):" << endl;
    c1.increment().increment();
    c1.display(); // Output: 1 (Only incremented once)

    return 0;
}

/* 
Why the Difference?
1. Increment by Reference (Counter&)
When you return by reference, the function returns the original object (*this).

Result: Every call in the chain acts upon the exact same memory address.

Chaining: c2.incrementByRef() returns a reference to c2. The second .incrementByRef() 
is then called on that same c2. This is why chaining works as expected.

2. Increment by Value (Counter)
When you return by value, the function creates a 
temporary copy of the object to return to the caller.

Result: The first increment() modifies the original object but returns a new, temporary copy.

Chaining: The second increment() is actually called on that temporary copy, not the 
original object (c1). The temporary copy is destroyed at the end of the statement, and the 
original c1 remains unchanged by the second call.
 */