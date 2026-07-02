#include<iostream>
using namespace std;

// Student class with public members accessible outside the class.
class Student{
    public:
        string name;  // Student's name
        int rollNo;   // Student's roll number

        // Display the student's information.
        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
        }
};

int main(){
    Student s1;  // Create a Student object

    s1.name = "Pallav";  // Assign public member values directly
    s1.rollNo = 12;
    s1.display();         // Print student details
    return 0;
}