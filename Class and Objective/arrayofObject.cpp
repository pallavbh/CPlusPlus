#include <iostream>
using namespace std;

class student {
    char name[20];
    int age;
public:
    void getdata() {
        cout << "Enter the name of the student: " << endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
    }
    void putdata() {
        cout << "The name of the student is: " << name << endl;
        cout << "The age of the student is: " << age << endl;
    }
};

int main() {
    student s[10];
    int n;
    
    cout << "Enter the number of students: " << endl;
    cin >> n;

    // Input loop
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        s[i].getdata();
    }

    // Output loop
    cout << "\nDisplaying student details:" << endl;
    for (int i = 0; i < n; i++) {
        s[i].putdata();
    }

    return 0;
}