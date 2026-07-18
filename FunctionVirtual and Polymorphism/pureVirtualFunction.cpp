/* 
class Base
{
public:
    virtual void pureVirtualFunction = 0; // Pure Virtual Function Body
};
*/
#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void draw() const = 0; 

    virtual ~Shape() {} // Good practice: virtual destructor
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    // Shape s; // Error: Cannot instantiate abstract class

    Shape* myShapes[] = { new Circle(), new Square() };

    for (Shape* s : myShapes) {
        s->draw(); // Polymorphism in action
    }

    // Clean up
    for (Shape* s : myShapes) {
        delete s;
    }

    return 0;
}