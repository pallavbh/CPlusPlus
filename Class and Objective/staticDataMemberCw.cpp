/*
    Problem Statement
        1. Needed a Program that will output the total number of student(object) recorded
        2. Also demonstrate the difference with normal Data Member
*/

#include <iostream>

using namespace std;
 
class student{
    public:
    int normalCount = 0;
    static int staticCount;

    student(){
        normalCount++;
        staticCount++;
    }
};

int student :: staticCount = 0;

int main(){
    student s1;
    student s2;
    student s3;

    cout << "--- Comparison: Normal vs Static ---" << endl;
    
    // Demonstrating that each object has its OWN normalCount
    cout << "s1.normalCount: " << s1.normalCount << endl;
    cout << "s2.normalCount: " << s2.normalCount << endl;
    cout << "s3.normalCount: " << s3.normalCount << endl;
    
    // Demonstrating that all objects access the SAME staticCount
    cout << "\nTotal (via s1): " << s1.staticCount << endl;
    cout << "Total (via s2): " << s2.staticCount << endl;
    cout << "Total (via s3): " << s3.staticCount << endl;

    return 0;

}