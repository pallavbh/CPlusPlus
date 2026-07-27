#include <iostream>

using namespace std;

template <typename T1, typename T2>
void describe(T1 label, T2 value)
{
    cout << label << ": " << value << endl;
}

template <typename T>
T maxOf(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    describe("Oreo", "Biscut");
    describe("Price", 25);
    describe("Pass", true);


    cout << "Maxium: " << maxOf(8, 9);

    return 0;
}
