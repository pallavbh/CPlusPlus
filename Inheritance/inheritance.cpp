#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Animal animal;
    Dog dog;
    animal.speak();
    dog.speak();

    return 0;
}