#include <iostream>
using namespace std;

// Counter class demonstrates unary operator overloading for ++
class Counter {
    private:
        int value; // internal counter value
    public:
        // Constructor with optional initial value (default 0)
        Counter(int v = 0) : value(v) {}

        // Prefix increment: ++c
        // Increment the internal value, then return the updated object.
        Counter operator++() {
            ++value;
            return *this;
        }
        
        // Postfix increment: c++
        // The int parameter distinguishes postfix from prefix syntax.
        // Returns the original state, then increments the counter.
        Counter operator++(int) {
            Counter temp = *this;
            ++value;
            return temp;
        }

        // Print the current counter value
        void display() {
            cout << "value: " << value << endl;
        }
};

int main() {
    Counter c(5); // start counter at 5

    cout << "Original: ";
    c.display();

    // Prefix increment example
    Counter c1 = ++c; // c is incremented before assignment
    cout << "After prefix ++: ";
    c.display();
    cout << "Returned object: ";
    c1.display();

    // Postfix increment example
    Counter c2 = c++; // c is incremented after assignment
    cout << "After postfix ++: ";
    c.display();
    cout << "Returned object: ";
    c2.display();
    
    return 0;
}