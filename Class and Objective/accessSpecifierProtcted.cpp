#include <iostream>
#include <string>
using namespace std;

// Animal class demonstrates protected access specifier.
class Animal {
protected:
    string species;  // Protected member accessible by derived classes

public:
    // Public setter to initialize the protected species member.
    void setSpecies(string s) {
        species = s;
    }
};

// Dog inherits from Animal and can access protected members.
class Dog : public Animal {
public:
    void showSpecies() {
        // Accessing the protected member from the base class
        cout << "Species: " << species << endl;
    }
};

int main() {
    Dog myDog;

    // Set species via inherited public method
    myDog.setSpecies("Canine");

    // Display the inherited protected member through a derived class method
    myDog.showSpecies();

    return 0;
}