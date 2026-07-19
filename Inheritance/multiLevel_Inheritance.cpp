#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    void animal()
    { 
        cout << "I am a Public Animal." << endl;
    }

protected:
    void animalProtected() 
    { 
        cout << "I am a Protected Animal member." << endl; 
    }
};

// Level 1: Inheritance (Public)
class Landanimal : public Animal
{
public:
    void landanimal()
    {
        cout << "I am a LandAnimal." << endl;
        animalProtected();
    }
};

// Level 2: Inheritance (Protected)

class Dog : protected Landanimal
{
public:
    void showDog()
    {
        cout << "I am a Dog." << endl;

        animal();
        landanimal();
    }
};

int main()
{
    Dog d1;

    d1.showDog();

    return 0;
}
