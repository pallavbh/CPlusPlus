#include<iostream>
using namespace std;

class Dog{
    public:
        string name;
        string breed;

        void display(){
            cout << "Dog Name: " << name << endl;
            cout << "Breed: " << breed << endl;
        }
};

int main(){
    Dog dog1;
    dog1.name = "Buddy";
    dog1.breed = "Golden Retriever";

    dog1.display();

    return 0;
}