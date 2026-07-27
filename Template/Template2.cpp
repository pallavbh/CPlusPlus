#include <iostream>
using namespace std;

template <typename T>
void swapValue(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 8;
    int y = 9;
    cout << "Before Swap: " << "X: " << x << " & " << "Y: " << y << endl;
    swapValue(x, y);
    cout << "After Swap: " << "X: " << x << " & " << "Y: " << y << endl;

    return 0;
}