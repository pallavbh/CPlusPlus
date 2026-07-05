#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n, int r) : name(n), rollNo(r) {}

    // Method to display student details
    void display() const {
        cout << "Name: " << name << ", Roll: " << rollNo << endl;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for roll number
    int getRollNo() const {
        return rollNo;
    }
};

// Optimized: Passed by const reference (&) to avoid creating a copy
void printStudent(const Student& s) {
    s.display();
    cout << "Name from const ref: " << s.getName() << endl;
}

int main() {
    // Creating an instance of Student
    Student student("Pallav", 100);

    // Calling the function
    printStudent(student);

    return 0;
}