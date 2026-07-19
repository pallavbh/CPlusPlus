#include <iostream>
using namespace std;

class Vehicle
{
public:
    void vehicle()
    {
        cout << "Vehicle" << endl;
    }
};
class Car : public Vehicle
{
public:
    void car()
    {
        cout << "Car" << endl;
    }
};

int main()
{
    Car c1;
    c1.vehicle();
    c1.car();

    return 0;
}