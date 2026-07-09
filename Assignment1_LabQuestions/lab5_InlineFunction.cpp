/* 
                    Lab 5 (Inline Function):
Write a program that uses an inline function isEven(int) to check if a number is even. In main(), ask the user for a number
and use the inline function to print whether it is even or odd. Also, create a non-inline function that performs the same
task (but is not inlined). Discuss the potential performance difference by comparing a function call in a 
loop (e.g., 1 million iterations) with a macro and the inline function.
 */

 #include <iostream>
#include <ctime>

using namespace std;

// Inline function: Suggests the compiler replace the call with the code body
inline bool isEven(int n) {
    return (n % 2 == 0);
}

// Regular function: Standard function call overhead applies
bool isEvenRegular(int n) {
    return (n % 2 == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Demonstration
    if (isEven(num))
        cout << num << " is Even." << endl;
    else
        cout << num << " is Odd." << endl;

    // Performance comparison setup
    const int iterations = 100000000; // 100 million for measurable difference
    clock_t start, end;

    // Test Regular Function
    start = clock();
    for(int i = 0; i < iterations; i++) {
        isEvenRegular(i);
    }
    end = clock();
    cout << "Regular function time: " << (double)(end - start) / CLOCKS_PER_SEC << "s" << endl;

    // Test Inline Function
    start = clock();
    for(int i = 0; i < iterations; i++) {
        isEven(i);
    }
    end = clock();
    cout << "Inline function time: " << (double)(end - start) / CLOCKS_PER_SEC << "s" << endl;

    return 0;
}