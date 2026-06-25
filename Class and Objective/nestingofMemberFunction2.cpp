// #include<iostream>
// using namespace std;

// class Dog{
//     public:
//     char color[50];
//     char breed[50];

//     void Color(){
//         cout<<color;

//     }
//     void Breed(){
//         cout<<breed;
//     }

// };
// int main(){
//     Dog d1;
//     d1.color = "white" ;
//     Color(color);
//     d1.breed = "idk";
//     Breed(breed);
//     return 0; 

// }

#include <iostream>
#include <cstring> // Required for strcpy
using namespace std;

class Dog {
public:
    char color[50];
    char breed[50];

    void printColor() {
        cout << "Color: " << color << endl;
    }
    void printBreed() {
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    Dog d1;
    
    // Use strcpy to copy strings into character arrays
    strcpy(d1.color, "white");
    strcpy(d1.breed, "Labrador");

    // Call methods using the object d1
    d1.printColor();
    d1.printBreed();

    return 0;
}