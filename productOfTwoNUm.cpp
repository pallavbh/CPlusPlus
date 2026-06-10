// WAP that takes two integers from the user and prints their sum.

#include <iostream>

using namespace std;

int main(){
    int num1, num2, Total;

    // Taking input from the user    
    cout<< "Enter the first number: ";
    cin>> num1;

    cout<< "Enter the second number: ";
    cin>> num2;

    //Displaying the total of the two numbers
    Total = num1 + num2;
    
    cout<< "The total of "<< num1 <<" and "<< num2 <<" is: "<< Total;
    
    return 0;
}