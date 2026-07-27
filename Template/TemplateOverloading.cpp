#include <iostream>

using namespace std;

template <typename T>
T maxOf(T a, T b)
{
    cout << "[template 2-arg] ";
    return (a > b) ? a : b;
}

template <typename T>
T maxOf(T a, T b, T c)
{
    cout << "[template 3-arg] ";
    return maxOf(maxOf(a, b), c);
}

int maxOf(int a, int b)
{
    cout << "[non-template int] ";
    return (a > b) ? a : b;
}

int main()
{
    cout << maxOf(2.5, 8.5) << endl;
    cout << maxOf(5, 8, 88) << endl;
    cout << maxOf(5, 9) << endl;

    return 0;
}