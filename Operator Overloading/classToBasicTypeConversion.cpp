#include <iostream>

using namespace std;

class Fraction{

    private:
        int num, den;
    
    public:
        Fraction (int n, int d) : num(n), den(d){}

    operator float() const{
        return static_cast<float> (num) / den;
    }
};

int main(){
    Fraction f(3, 4);

    float val =f;

    cout << "Value: " << val << endl;

    return 0;
}