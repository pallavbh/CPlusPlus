/* 
Lab 14 (String Class - Basics):
Create a class MyString that has a char* data member to hold a C-style string. Implement the following member functions:
a.	A constructor that takes a const char* and allocates memory.
b.	A destructor to free the memory.
c.	A member function display() to print the string.
d.	Do not implement the copy constructor or assignment operator yet. In main(), create a 
MyString object and pass it by value to a function. You should observe the program crash or double free. Explain why this 
happens. (This is a lead-in to the next lab).
 */

#include <iostream>
#include <cstring> // Required for strlen and strcpy

using namespace std;

class MyString {
private:
    char* str;

public:
    // Constructor: Allocates memory and copies the C-string
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
        cout << "Constructor called for: " << str << endl;
    }

    // Destructor: Frees the allocated memory
    ~MyString() {
        cout << "Destructor called for: " << str << endl;
        delete[] str;
    }

    void display() const {
        cout << "String content: " << str << endl;
    }
};

// Function that receives MyString by value
void passByValue(MyString s) {
    cout << "Inside function, receiving object by value..." << endl;
    s.display();
}

int main() {
    MyString obj("Hello C++");
    
    cout << "\nPassing object to function..." << endl;
    passByValue(obj);
    
    cout << "\nBack in main, program will now attempt to exit..." << endl;
    return 0;
}

/* 
Technical Analysis: Causes of Memory Corruption in MyString
The program crashes due to a violation of memory management principles when handling objects that own heap-allocated resources. The
 failure follows a predictable sequence caused by the shallow copy behavior of the default copy constructor.

1. The Default Copy Mechanism (Shallow Copy)
In C++, if a class does not explicitly define a copy constructor, the compiler provides a default one. This
 default constructor performs a member-wise shallow copy. For a class containing a raw pointer (char* str), this means
  only the memory address stored in the pointer is copied, not the data it points to. Consequently, both the original
   object and the copy end up referencing the exact same location on the heap.

2. Premature Deallocation
When an object is passed by value to a function, a temporary copy is created. Upon the function's
 termination, this local object goes out of scope, triggering its destructor. The destructor executes delete[] str, 
 deallocating the heap memory associated with that pointer.

3. Dangling Pointer and Invalid Access
Following the function's termination, the original object remains in main. However, because its str member pointed to the
 same memory that was just released, it now holds a dangling pointer. The pointer refers to a memory address that is no
  longer reserved for the program.

4. The Double Free Error
When the program terminates, the original object's destructor is invoked. It attempts to call delete[] on the
 same memory address that was already freed during the function call. The C++ runtime detects this attempt to deallocate 
 memory that is no longer valid or has already been returned to the system, resulting in a double free error. This is a 
 critical security and stability violation, forcing the operating system to terminate the process immediately.

Proposed Solution: Implementing Deep Copy
To resolve this, the class must adhere to the Rule of Three, which dictates that if a class requires a custom
 destructor, it must also explicitly define:

A Copy Constructor: To perform a "deep copy" by allocating new memory and copying the source string's contents,
 ensuring each object owns its unique heap resource.

A Copy Assignment Operator: To handle memory cleanup and reallocation when an existing object is assigned to another.
 */