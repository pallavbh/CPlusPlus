// Program demonstrating passing objects by value to functions
// When objects are passed by value, a copy is created using the copy constructor
#include <iostream>
using namespace std;

// Rectangle class with private data members and public methods
class Rectangle {
    private:
    int width;
    int height;

    public:
        // Parameterized constructor with default arguments
        Rectangle (int w = 0, int h = 0) : width(w), height (h){
            cout << "Constructor called" << endl;
        }

        // Copy constructor - called when an object is passed by value or copied
        Rectangle (const Rectangle& other) {
            width = other.width;
            height = other.height;
            cout << "Copy constructor called" << endl;
        }
        
        // Returns the area of the rectangle
        int area () const{
            return width * height;
        }
        
        // Setter method to modify the width
        void setWidth (int w) {
            width = w;
        }
};

// Function that takes a Rectangle object by value
// The copy constructor is called here to create a copy of the object
// Any modifications to 'r' do not affect the original object passed in
void modifyRectangleByValue(Rectangle r) {
    r.setWidth(20);  // Modify the copy, not the original
    cout << "Area inside function: " << r.area() << endl;
}

int main(){
    // Create a Rectangle object with width=5 and height=10
    // Constructor is called here
    Rectangle rect (5, 10);
    cout << "Original area: " << rect.area() << endl;

    // Pass rect by value to the function
    // Copy constructor is called to create a copy for the function
    modifyRectangleByValue(rect);

    // The original area remains unchanged because modifications were made to the copy
    cout << "Original area after function: " << rect.area() << endl;

    return 0;
}