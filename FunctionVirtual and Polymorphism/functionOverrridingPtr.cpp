#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Display from Base class" << endl;
    }
};
class Derived : public Base
{
public:
    void display() override
    {
        cout << "Display from derived class" << endl;
    }
};
int main()
{
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display();
    return 0;
}