#include <iostream>
#include <exception>
using namespace std;

class InsufficientFunds : public exception
{
    double shortfall;

public:
    InsufficientFunds(double amt) : shortfall(amt) {}
    
    const char *what() const noexcept override
    {
        return "Insufficient funds for withdrawal";
    }
    
    double getShortfall() const { return shortfall; }
};

class Account
{
    double balance;

public:
    Account(double b) : balance(b) {}
    
    void withdraw(double amt)
    {
        if (amt > balance)
            throw InsufficientFunds(amt - balance);
        balance -= amt;
    }
};

int main()
{
    try
    {
        Account acc(100.0);
        acc.withdraw(150.0);
    }
    catch (InsufficientFunds &e)
    {
        cout << e.what() << " by " << e.getShortfall() << endl;
    }
    return 0;
}