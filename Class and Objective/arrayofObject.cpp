#include <iostream>
using namespace std;

// Simple student class with name and age fields.
class student {
    char name[20];
    int age;
public:
    // Read student data from standard input.
    void getdata() {
        cout << "Enter the name of the student: " << endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
    }

    // Print the student data.
    void putdata() {
        cout << "The name of the student is: " << name << endl;
        cout << "The age of the student is: " << age << endl;
    }
};

int main() {
    student s[10]; // Array of 10 student objects
    int n;
    
    cout << "Enter the number of students: " << endl;
    cin >> n;

    // Read data for each student in the array.
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        s[i].getdata();
    }

    // Display data for each student.
    cout << "\nDisplaying student details:" << endl;
    for (int i = 0; i < n; i++) {
        s[i].putdata();
    }

    return 0;
}