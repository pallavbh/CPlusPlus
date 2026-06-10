#include <iostream>

using namespace std;

class Distance{
    int meter;
    public:
    Distance(int m){
        meter = m;
    }
    //Conversion operatr
    operator int(){
        return meter;
    }
};

int main()
{
    Distance d1(150);
    int x;
    // Class object converted into int
    x= d1;
    cout<< "Distance in meter: "<< x << endl;
    return 0;   
}