/* 
Lab 19 (Copy Constructor): 
Create a class Array that dynamically allocates an integer array. Implement a default constructor, parameterized 
constructor (takes size), copy constructor (deep copy), and destructor. In main(), demonstrate the creation of one array, copying it to
 another array, and modifying the first array to prove that the copy is independent.
  */

#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int size;

public:
    // Default Constructor
    Array() : data(nullptr), size(0) {}

    // Parameterized Constructor
    Array(int s) : size(s) {
        data = new int[size];
        for (int i = 0; i < size; ++i) data[i] = 0; // Initialize
    }

    // Copy Constructor (Deep Copy)
    Array(const Array &other) : size(other.size) {
        data = new int[size]; // Allocate new memory
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i]; // Copy the actual values
        }
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    void set(int index, int value) { if (index < size) data[index] = value; }
    void print() const {
        for (int i = 0; i < size; ++i) cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Array arr1(3);
    arr1.set(0, 10);
    arr1.set(1, 20);
    arr1.set(2, 30);

    Array arr2 = arr1; // Uses the Copy Constructor

    cout << "Original Array (arr1): "; arr1.print();
    cout << "Copied Array (arr2):   "; arr2.print();

    // Modify arr1 to prove arr2 remains independent
    arr1.set(0, 999);
    cout << "\nAfter modifying arr1[0] to 999:" << endl;
    cout << "Original Array (arr1): "; arr1.print();
    cout << "Copied Array (arr2):   "; arr2.print();

    return 0;
}