#include <iostream>
using namespace std;

// Circle class with member functions declared inside the class
// and defined outside using the scope resolution operator.
class Circle {
    private:
    // Data member for storing circle radius
    float rad;

    public:
    // Function declarations
    void setRadius(float r);
    void calc_area();
};

// Scope resolution operator (::) defines member functions outside the class body.
void Circle::setRadius(float r){
    rad = r;  // Assign the parameter to the class member
}

void Circle::calc_area(){
    float a;
    a = 3.14 * rad * rad;
    cout << "The area of the circle is: " << a << endl;
}

int main(){
    Circle c;
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    c.setRadius(r); // Set the circle radius using the member function
    c.calc_area();  // Calculate and print the area
    return 0;
}
