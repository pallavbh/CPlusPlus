/* 
Lab 3 (const & enum):
Define an enum class called Color with values RED, GREEN, and BLUE.
Write a class Shape that has a private Color member.
Provide a constructor to initialize it and a const member function getColor() that returns the color.
In main(), create a Shape object and display its color.
 */

#include <iostream>

using namespace std;

// Define an enum class for colors
enum class Color {
    RED,
    GREEN,
    BLUE
};

class Shape {
private:
    Color color;

public:
    // Constructor to initialize the shape color
    Shape(Color c) : color(c) {}

    // Const member function to get the color
    // It is marked const because it does not modify the object's state
    Color getColor() const {
        return color;
    }
};

int main() {
    // Create a Shape object with the color RED
    Shape myShape(Color::RED);

    // Retrieve the color using the const member function
    Color c = myShape.getColor();

    // Display the color
    cout << "The shape's color is: ";
    
    // Switch case to handle enum class values
    switch (c) {
        case Color::RED:
            cout << "RED" << endl;
            break;
        case Color::GREEN:
            cout << "GREEN" << endl;
            break;
        case Color::BLUE:
            cout << "BLUE" << endl;
            break;
    }

    return 0;
}