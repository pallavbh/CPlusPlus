#include <iostream>
using namespace std;

// A simple class representing a rectangle with width and height.
class Rectangle{
    private:
        int width;
        int height;
    public:
        // Constructor initializes width and height.
        Rectangle(int w, int h) : width(w), height(h){}

        // Declare displayArea as a friend so it can access private members.
        friend void displayArea(Rectangle r);
};

// Friend function definition. It can access Rectangle's private members directly.
void displayArea(Rectangle r){
    int area = r.width * r.height;
    cout << "Area of Rectangle is: " << area << endl;
}

int main(){
    // Create a Rectangle object with width 5 and height 10.
    Rectangle rect(5, 10);

    // Call the friend function to display the rectangle's area.
    displayArea(rect);

    return 0;
}