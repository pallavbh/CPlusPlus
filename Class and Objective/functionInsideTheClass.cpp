#include <iostream>
using namespace std;

class Circle {
    private:
    //Data Members
    float rad;

    public:
    //Member Function
    void getRadius(){
        cout << "Enter the radius of the circle: ";
        cin >> rad;
    }
    void calc_area(){
        float a;
        a = 3.14 * rad * rad;
        cout << "The area of the circle is: " << a << endl;
    }
};

int main(){
    Circle c;
    c.getRadius();
    c.calc_area();
    return 0;
}