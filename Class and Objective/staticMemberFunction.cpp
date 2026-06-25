/*

#include <iostream>
using namespace std;

class MathUtils {
    public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main(){
    int result = MathUtils::add(5, 3);

    cout<< "Result: " << result << endl;
    
    return 0;
} */

#include <iostream>
using namespace std;

class MyClass {
    public:
    static int staticValue;

    static int getStaticValue(){
        return staticValue;
    }
};

int MyClass:: staticValue = 10;

int main(){
    int value = MyClass :: getStaticValue();
    cout << "Value of static Data Member" << endl;
    cout << "Static Value: " << value << endl;
    
    return 0;
}