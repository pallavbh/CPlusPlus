#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    num1 = 99;
    

    num2 = (num1 == 10) ? 100 : 200;
    cout << "num2: " << num2 << endl;
    num2 = (num1 == 99) ? 100 : 200;
    cout << "num2: " << num2 << endl;
    return 0;
}