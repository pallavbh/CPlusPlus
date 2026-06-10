#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5) << endl; // expands to 5*5
    cout << square(6 + 1) << endl; // expands to (6+1)*(6+1)

    return 0;
}