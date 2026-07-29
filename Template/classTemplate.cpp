#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Box {
    private:
    T item;
    public:
    Box(T val) : item(val){}
    T get() { return item; }
};
int main() {
    // Integer Box
    Box<int> b1(100);
    cout << "Integer: " << b1.get() << endl;

    // Double Box
    Box<double> b2(45.67);
    cout << "Double: " << b2.get() << endl;

    // Character Box
    Box<char> b3('A');
    cout << "Character: " << b3.get() << endl;

    // String Box
    Box<string> b4("Hello, World!");
    cout << "String: " << b4.get() << endl;

    return 0;
}