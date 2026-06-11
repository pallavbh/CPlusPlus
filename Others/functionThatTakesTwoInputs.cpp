#include <iostream>

using namespace std;

int productTwo(int num1, int num2){
    return num1 * num2;
}
int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int product = productTwo(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    return 0;
}