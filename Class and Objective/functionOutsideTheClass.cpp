#include <iostream>
using namespace std;
class Circle {
    private:
    //Data Members
    float rad;

    public:
    //Member Function
    void setRadius(float r);
    void calc_area();
};
// Scope Resource Operator (::) is used to define the member function outside the class
void Circle::setRadius(float r){
    rad = r;
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
    c.setRadius(r);
    c.calc_area();
    return 0;
}
