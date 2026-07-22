#include <iostream>
using namespace std;
class Base
{
public:
    int id;
    void show()
    {
        cout << "Base :: show()" << endl;
    }
};
class Left : virtual public Base { };
class Right : virtual public Base { };
class Derived : public Left, public Right { };

int main()
{
    Derived d;
     d.id;
     d.show();
    return 0;
}