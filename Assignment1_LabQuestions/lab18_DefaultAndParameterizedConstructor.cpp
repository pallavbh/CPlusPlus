/* 
Lab 18 (Default & Parameterized Constructors):
 Write a class Circle with a private data member radius. Provide a default constructor (sets radius to 0),
  a parameterized constructor (sets radius to a given value), and a member function area() to calculate the area. Create objects
   using both constructors and display their areas.
    */

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    // Default constructor: Sets radius to 0
    Circle() : radius(0) {}

    // Parameterized constructor: Sets radius to a given value
    Circle(double r) : radius(r) {}

    // Member function to calculate area
    double area() const {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Create object using the default constructor
    Circle c1;
    
    // Create object using the parameterized constructor
    Circle c2(5.0);

    cout << "Area of Circle 1 (default): " << c1.area() << endl;
    cout << "Area of Circle 2 (radius 5): " << c2.area() << endl;

    return 0;
}