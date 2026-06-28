#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string species;

public:
    void setSpecies(string s) {
        species = s;
    }
};

class Dog : public Animal {
public:
    void showSpecies() {
        // Accessing the 'protected' member from the base class
        cout << "Species: " << species << endl;
    }
};

int main() {
    Dog myDog;

    // Using the inherited method to set the species
    myDog.setSpecies("Canine");

    // Displaying the species
    myDog.showSpecies();

    return 0;
}