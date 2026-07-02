#include <iostream>
using namespace std;

// BankAccount demonstrates the private access specifier in a class.
class BankAccount{
    private:
        double balance;  // Private data member: cannot be accessed directly outside the class
    public:
        // Constructor initializes the account balance.
        BankAccount(double initialBalance){
            balance = initialBalance;
        }

        // Public member function used to access the private balance.
        double getBalance(){
            return balance;
        }
};

int main(){
    BankAccount account(100000.00);  // Create an account with an initial balance
    cout << "Balance: $ " << account.getBalance() << endl;  // Print the balance via public method
    return 0;
}