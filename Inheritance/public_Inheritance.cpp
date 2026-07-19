#include <iostream>
using namespace std;

// Demonstrates public inheritance in C++: public members of the base
// class remain public in the derived class when using `public` inheritance.

// Base class `Animal` with a public member function `speak()`.
class Animal
{
public:
    // Prints a simple message identifying the object as an animal.
    void speak()
    {
        cout << "This is an animal" << endl;
    }
};

// Derived class `Dog` inherits publicly from `Animal`.
// Because the inheritance is public, `Animal::speak()` remains public
// and can be called on a `Dog` instance.
class Dog : public Animal
{
    // No additional members are needed for this example; Dog
    // implicitly has access to `speak()`.
};

int main()
{
    // Create a Dog object and call the inherited `speak()` method.
    Dog dog;
    dog.speak();
    return 0;
}
/*
The 5 Archetypes of Inheritance
Single
Multilevel
Multiple
Hierarchical
Hybrid
 */