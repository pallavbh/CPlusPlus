#include <iostream>
using namespace std;

class Animal
{
public:
    // 'virtual' allows for Dynamic Polymorphism (Runtime Binding)
    // 'public' is required so the method can be accessed outside the class
    virtual void speak()
    {
        cout << "Animal makes a sound" << endl;
    }

    // It is best practice to make the destructor 'virtual'
    // when using inheritance to ensure derived destructors are called.
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    // 'override' makes the code clearer and helps the compiler
    // check that you are correctly overriding a base class function
    void speak() override
    {
        cout << "Woof! Woof!" << endl;
    }
};

int main()
{
    // Create a pointer of the base class type (Animal)
    Animal *ptr;

    // Create an object of the derived class (Dog)
    Dog myDog;

    // Point the base class pointer to the derived class object
    ptr = &myDog;

    // Because speak() is virtual, C++ looks at the actual object type (Dog)
    // instead of the pointer type (Animal) at runtime.
    ptr->speak();

    return 0;
}