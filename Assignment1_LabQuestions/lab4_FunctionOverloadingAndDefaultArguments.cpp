/* 
Lab 4 (Function Overloading & Default Arguments):
Create a class MathOperations. Overload a function multiply to handle:
    a.	Two integers.
    b.	Three integers.
    c.	A double and an integer (where the integer is a multiplier). Add default arguments to one of the functions 
    (e.g., for the three-integer version, set the third integer to 1 by default). Demonstrate all functions in main().
 */

#include <iostream>

using namespace std;

class MathOperations {
public:
    // This single function now handles both 'a' and 'b' from your prompt
    // by using the default argument for the third integer.
    int multiply(int a, int b, int c = 1) {
        return a * b * c;
    }

    // Overload for a double and an integer
    double multiply(double a, int b) {
        return a * b;
    }
};

int main() {
    MathOperations math;

    // Now, there is no ambiguity:
    cout << "Two integers (5 * 4): " << math.multiply(5, 4) << endl;
    cout << "Three integers (2 * 3 * 4): " << math.multiply(2, 3, 4) << endl;
    cout << "Double and integer (2.5 * 3): " << math.multiply(2.5, 3) << endl;

    return 0;
}