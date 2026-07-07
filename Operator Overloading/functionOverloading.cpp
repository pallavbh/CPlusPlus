#include <iostream>
using namespace std;

// Version 1: Function to calculate area of a square (takes one integer)
int calculateArea(int side) {
    return side * side;
}

// Version 2: Function to calculate area of a rectangle (takes two integers)
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    // The compiler chooses the first function because we passed one argument
    cout << "Area of square (side 5): " << calculateArea(5) << endl;

    // The compiler chooses the second function because we passed two arguments
    cout << "Area of rectangle (length 5, width 10): " << calculateArea(5, 10) << endl;

    return 0;
}