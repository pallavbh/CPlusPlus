#include <iostream>
using namespace std;

class Printer
{
public:
    void print()
    {
        cout << "Printing... " << endl;
    }
};

class Scanner
{
public:
    void scan()
    {
        cout << "Scanning... " << endl;
    }
};

class AllInOne : public Printer, public Scanner
{
public:
    void doEverything()
    {
        print();
        scan();
    }
};

int main()
{
    AllInOne a;
    a.print();
    a.scan();
    a.doEverything();
    
    return 0;
}