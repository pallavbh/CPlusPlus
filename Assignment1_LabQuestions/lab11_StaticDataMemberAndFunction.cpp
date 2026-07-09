/* 
Lab 11 (Static Data Member & Function):
Write a class Product with name and serialNumber.
Use a static data member counter to automatically generate a unique serial number for each Product object created.
Write a static member function getTotalProducts() that returns the total number of Product objects created.
Test your class in main() by creating multiple objects and displaying their serial numbers and the total count.
 */

#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    int serialNumber;
    
    // Static data member to keep track of count
    static int counter;

public:
    // Constructor
    Product(string n) {
        name = n;
        // Increment static counter and assign it as the serial number
        counter++;
        serialNumber = counter;
    }

    // Static member function to get the total count
    static int getTotalProducts() {
        return counter;
    }

    void display() const {
        cout << "Product: " << name << " | Serial Number: " << serialNumber << endl;
    }
};

// Initialize static data member outside the class
int Product::counter = 0;

int main() {
    // Create multiple Product objects
    Product p1("Laptop");
    Product p2("Smartphone");
    Product p3("Headphones");

    // Display individual product details
    p1.display();
    p2.display();
    p3.display();

    // Display total count using the static member function
    cout << "\nTotal Products Created: " << Product::getTotalProducts() << endl;

    return 0;
}