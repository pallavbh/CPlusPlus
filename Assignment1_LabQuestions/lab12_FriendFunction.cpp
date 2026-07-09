/* 
Lab 12 (Friend Function):
Create two classes Manager and Worker.
Both have private data members for salary. Write a friend function compareSalary(const Manager &m, const Worker &w)
 that compares their salaries and prints who earns more (or if they are equal).
  */

#include <iostream>

using namespace std;

// Forward declaration is required so the Worker class knows Manager exists
class Worker;

class Manager {
private:
    double salary;

public:
    Manager(double s) : salary(s) {}

    // Declare the friend function
    friend void compareSalary(const Manager &m, const Worker &w);
};

class Worker {
private:
    double salary;

public:
    Worker(double s) : salary(s) {}

    // Declare the same friend function
    friend void compareSalary(const Manager &m, const Worker &w);
};

// Definition of the friend function
// It can access private members of both Manager and Worker
void compareSalary(const Manager &m, const Worker &w) {
    if (m.salary > w.salary) {
        cout << "Manager earns more than Worker." << endl;
    } else if (w.salary > m.salary) {
        cout << "Worker earns more than Manager." << endl;
    } else {
        cout << "Manager and Worker earn the same salary." << endl;
    }
}

int main() {
    Manager mgr(75000.0);
    Worker wrk(60000.0);

    // Call the friend function
    compareSalary(mgr, wrk);

    return 0;
}  