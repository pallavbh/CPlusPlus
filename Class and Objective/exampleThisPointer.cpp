#include <iostream>
using namespace std;

class A {
    int a;

public:
    void setData(int a) {
        this-> a = a;
    }

    void getData() {
        cout << "The value of a = " << a << endl;
    }
};

int main() {
    // Create an object of class A
    A obj;

    // Set the value of a using the member function
    obj.setData(10);

    // Display the value of a
    obj.getData();

    return 0;
}