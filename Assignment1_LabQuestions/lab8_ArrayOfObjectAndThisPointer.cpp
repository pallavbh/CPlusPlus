/* 
Lab 8 (Array of Objects & this pointer):
Create a class Employee with data members id, name, and salary.
Write a member function setData() that uses the this pointer to assign values.
In main(), create an array of Employee objects, take input for 5 employees,
and then write a function (or a member function) to find and display the
employee with the highest salary.
 */

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;

public:
    // Using 'this' pointer to assign values
    void setData(int id, string name, double salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    double getSalary() const {
        return salary;
    }

    void display() const {
        cout << "ID: " << id << " | Name: " << name << " | Salary: $" << salary << endl;
    }
};

// Function to find the employee with the highest salary
void findHighestSalary(Employee employees[], int size) {
    int highestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (employees[i].getSalary() > employees[highestIndex].getSalary()) {
            highestIndex = i;
        }
    }

    cout << "\n--- Employee with Highest Salary ---" << endl;
    employees[highestIndex].display();
}

int main() {
    const int N = 5;
    Employee staff[N];

    // Input data for 5 employees
    for (int i = 0; i < N; i++) {
        int id;
        string name;
        double salary;
        
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "ID: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Salary: "; cin >> salary;
        
        staff[i].setData(id, name, salary);
    }

    // Call function to find and display the highest salary
    findHighestSalary(staff, N);

    return 0;
}