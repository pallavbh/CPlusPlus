//Employee Salary Manaagement

#include <iostream>
using namespace std;

// Function Overloading
double calculateSalary(double basicSalary)
{
    return basicSalary;
}

double calculateSalary(double basicSalary, double bonus)
{
    return basicSalary + bonus;
}

double calculateSalary(double basicSalary, double bonus, double overtime)
{
    return basicSalary + bonus + overtime;
}

// Inline Function
inline double taxDeduction(double grossSalary)
{
    return grossSalary * 0.10;
}

int main()
{
    double gross1 = calculateSalary(30000);
    double gross2 = calculateSalary(30000, 5000);
    double gross3 = calculateSalary(30000, 5000, 2000);

    cout << "Full-time Employee:" << endl;
    cout << "Gross Salary = " << gross1 << endl;
    cout << "Net Salary = " << gross1 - taxDeduction(gross1) << endl;

    cout << "\nEmployee with Bonus:" << endl;
    cout << "Gross Salary = " << gross2 << endl;
    cout << "Net Salary = " << gross2 - taxDeduction(gross2) << endl;

    cout << "\nEmployee with Bonus and Overtime:" << endl;
    cout << "Gross Salary = " << gross3 << endl;
    cout << "Net Salary = " << gross3 - taxDeduction(gross3) << endl;

    return 0;
}