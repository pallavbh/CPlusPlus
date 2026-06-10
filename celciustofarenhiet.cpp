// farenhiet to celcius converter
#include <iostream>

using namespace std;

int main(){
    float a,b;

    cout<< "Enter Farenhiet: ";
    cin>> a;
    b = (a - 32) * 5/9;
    cout<< "The Celcius is: " << b << endl;
    system("pause");
    return 0;

}