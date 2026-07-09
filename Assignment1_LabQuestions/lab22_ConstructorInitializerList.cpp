/* 
Lab 22 (Constructor Initializer List):
 Write a class Point with const int x and const int y. Since these are const, they must be initialized in a constructor
  initializer list. Write a program that creates a Point object and displays its coordinates.
   */

#include <iostream>
using namespace std;

class Point {
private:
    const int x;
    const int y;

public:
    // Using an initializer list to set constant members
    Point(int xVal, int yVal) : x(xVal), y(yVal) {
        // The body of the constructor remains empty, 
        // as the constants are already set by the initializer list.
    }

    void display() const {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Creating a Point object
    Point p1(10, 20);

    p1.display();

    return 0;
}