/*
Lab 2 (new & delete):
Write a program that defines a Student struct with name and rollNumber.
In main(), dynamically allocate an array of Student objects based on a user-provided number.
Prompt the user to enter the data for each student and then display it.
Ensure proper deallocation of memory.
*/

#include <iostream>
#include <string>
#include <limits> // Required for clearing the input buffer

using namespace std;

// Define the Student structure
struct Student {
    string name;
    int rollNumber;
};

int main() {
    int n;

    // Prompt for number of students with input validation
    cout << "Enter the number of students: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear(); // Clear the error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    // Clear the buffer after reading the integer 'n'
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Dynamically allocate an array of Student objects
    Student* students = new Student[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        
        cout << "Name: ";
        getline(cin, students[i].name);
        
        cout << "Roll Number: ";
        while (!(cin >> students[i].rollNumber)) {
            cout << "Invalid input. Please enter a numeric Roll Number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        // Clear the newline left by cin >> rollNumber
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Display the student data
    cout << "\n--- Student List ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << students[i].name 
             << " (Roll No: " << students[i].rollNumber << ")" << endl;
    }

    // Proper deallocation of memory
    delete[] students;
    students = nullptr; // Safety best practice

    return 0;
}