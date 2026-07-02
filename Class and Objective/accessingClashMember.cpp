#include<iostream>
using namespace std;

// A simple class representing a Dog with a name and breed.
class Dog{
    public:
        string name;   // Dog's name
        string breed;  // Dog's breed

        // Member function to print the dog's details.
        void display(){
            cout << "Dog Name: " << name << endl;
            cout << "Breed: " << breed << endl;
        }
};

int main(){
    Dog dog1;                   // Create a Dog object
    dog1.name = "Buddy";       // Set the name field
    dog1.breed = "Golden Retriever"; // Set the breed field

    dog1.display();             // Display the dog's details

    return 0;
}