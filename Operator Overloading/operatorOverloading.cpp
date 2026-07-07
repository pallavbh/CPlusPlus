#include <iostream>
using namespace std; // Importing all standard library names

class Point {
public:
    int x, y;

    // Overloading the '+' operator
    // This function belongs to the class and adds another Point to 'this'
    Point operator+(const Point& other) const {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
};

int main() {
    Point p1 = {10, 20};
    Point p2 = {5, 5};

    // Because of operator overloading, we can add objects like integers
    Point p3 = p1 + p2;

    cout << "Resulting Point: (" << p3.x << ", " << p3.y << ")" << endl;

    return 0;
}