/* 
Lab 15 (Copy Constructor & Deep Copy):
Extend the previous MyString class. Add a proper copy constructor that performs a deep copy. Also, add a function
append(const MyString &other) that concatenates another MyString object to the current one (remember to reallocate memory).
Write a main() function to demonstrate these functionalities and the deep copy.
 */

#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
    char* str;

public:
    // 1. Constructor
    MyString(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // 2. Deep Copy Constructor (Prevents the crash/double-free)
    MyString(const MyString &other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // 3. Destructor
    ~MyString() {
        delete[] str;
    }

    // 4. Append function (Deep Copy logic)
    void append(const char* suffix) {
        char* newStr = new char[strlen(str) + strlen(suffix) + 1];
        strcpy(newStr, str);
        strcat(newStr, suffix);
        
        delete[] str; // Free old memory
        str = newStr; // Point to new, larger memory
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2 = s1; // Calls Copy Constructor

    s1.append(" World");
    
    cout << "s1: "; s1.display(); // Prints: Hello World
    cout << "s2: "; s2.display(); // Prints: Hello (Remains unchanged)

    return 0;
}