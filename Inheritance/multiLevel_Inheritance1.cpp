#include <iostream>
using namespace std;

class Grandparents
{
public:
    void car()
    {
        cout << "Grandparents own a car." << endl;
    }
};

class Parent : public Grandparents
{
public:
    void house()
    {
        cout << "Parent owns a house." << endl;
    }
};

class Child : public Parent
{
public:
    void laptop()
    {
        cout << "Child owns a laptop." << endl;
    }
};

int main()
{
    Child c;
    c.laptop();
    c.house();
    c.car();

    return 0;
}