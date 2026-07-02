#include <iostream>
using namespace std;

class BankAccount{
    private:
        double balance;  //Private Data Member
    public:
        BankAccount(double initialBalance){  //Constructor
            balance = initialBalance;
        }
            double getBalance(){    // Public function to access private data
                return balance;
            }
};

int main(){
    BankAccount account(100000.00);
    cout << "Balance: $ " << account.getBalance() << endl;
    return 0;
}