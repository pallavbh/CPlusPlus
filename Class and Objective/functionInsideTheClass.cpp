#include <iostream>
using namespace std;

// Circle class with methods defined inside the class body.
class Circle {
    private:
    // Data member to store the radius of the circle.
    float rad;

    public:
    // Member function to read the radius from the user.
    void getRadius(){
        cout << "Enter the radius of the circle: ";
        cin >> rad;
    }

    // Member function to calculate and display the circle's area.
    void calc_area(){
        float a;
        a = 3.14 * rad * rad;
        cout << "The area of the circle is: " << a << endl;
    }
};

int main(){
    Circle c;      // Create a Circle object
    c.getRadius(); // Read radius from the user
    c.calc_area(); // Calculate and display area
    return 0;
}