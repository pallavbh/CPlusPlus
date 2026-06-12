#include <iostream>
using namespace std;
class student {
    public:
    int normalCOunt = 0;
    static int staticCount;
    student() {
        normalCOunt++;
        staticCount++;
    }
};

int student::staticCount = 0;

int main() {
    student s1;
    student s2;
    student s3;

    cout << "Normal Count for s1: " << s1.normalCOunt << endl; // Output: 1
    cout << "Normal Count for s2: " << s2.normalCOunt << endl; // Output: 1
    cout << "Normal Count for s3: " << s3.normalCOunt << endl; // Output: 1

    cout << "Static Count: " << student::staticCount << endl; // Output: 3

    return 0;
}