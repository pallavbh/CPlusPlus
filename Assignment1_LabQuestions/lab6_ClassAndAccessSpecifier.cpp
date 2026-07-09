/* 
Lab 6 (Class & Access Specifiers):
Design a class BankAccount with private data members: accountNumber, holderName, balance.
Provide public member functions:
a.	deposit(double amount).
b.	withdraw(double amount) (should not allow withdrawal if balance is insufficient).
c.	display() to print account details. Write a program to create a BankAccount object,
    perform a few transactions, and display the final balance.
 */

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    // Encapsulated data members
    long accountNumber;
    string holderName;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(long accNum, string name, double initialBalance) {
        accountNumber = accNum;
        holderName = name;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance! Transaction failed." << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    // Function to display account details
    void display() const {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name:    " << holderName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount(123456789, "John Doe", 1000.0);

    // Perform transactions
    myAccount.display();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(2000.0); // Attempting to withdraw more than balance

    // Show final state
    myAccount.display();

    return 0;
}