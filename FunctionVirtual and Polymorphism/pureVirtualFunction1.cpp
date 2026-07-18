#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Circle" << endl;
    }
};

int main()
{
    Shape *p = new Circle;
    p->draw();

    return 0;
}