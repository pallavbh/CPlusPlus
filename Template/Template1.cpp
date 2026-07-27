#include <iostream>

using namespace std;

// Generic add function using a template type T
template <typename T>
T add(T a, T b)
{
    return a + b;
}
template <typename T>
T multiply(T a, T b, T c)
{
    return a * b * c;
}

int main()
{
    cout << "Sum of Int + Int: " << add(2, 3) << endl;
    cout << "Sum of Float + Float: " << add(4.5, 9.5) << endl;
    cout << "Multiplication of int * int: " << multiply(5, 9, 9) << endl;
    return 0;
}