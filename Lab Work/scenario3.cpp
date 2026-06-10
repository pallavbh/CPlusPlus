#include <iostream>
using namespace std;

// Function Overloading
float calculateAverage(float s1, float s2)
{
    return (s1 + s2) / 2;
}

float calculateAverage(float s1, float s2, float s3)
{
    return (s1 + s2 + s3) / 3;
}

float calculateAverage(float s1, float s2, float s3, float s4, float s5)
{
    return (s1 + s2 + s3 + s4 + s5) / 5;
}

// Inline Function
inline bool isPass(float average)
{
    return average >= 40;
}

int main()
{
    float avg1 = calculateAverage(50, 60);
    float avg2 = calculateAverage(50, 60, 70);
    float avg3 = calculateAverage(50, 60, 70, 80, 90);

    cout << "Average of 2 subjects = " << avg1;
    cout << " | Status: " << (isPass(avg1) ? "Pass" : "Fail") << endl;

    cout << "Average of 3 subjects = " << avg2;
    cout << " | Status: " << (isPass(avg2) ? "Pass" : "Fail") << endl;

    cout << "Average of 5 subjects = " << avg3;
    cout << " | Status: " << (isPass(avg3) ? "Pass" : "Fail") << endl;

    return 0;
}