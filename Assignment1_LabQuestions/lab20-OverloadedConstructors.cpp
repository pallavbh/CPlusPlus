/* 
Lab 20 (Overloaded Constructors): 
    Define a class Time with data members for hours, minutes, and seconds. Provide three constructors:
a.	Default: sets to 00:00:00.
b.	Parameterized: takes hours, minutes, and seconds.
c.	Single integer: takes total seconds and converts it to hours, minutes, seconds. Write a display() function to 
show the time in HH:MM:SS format.
 */


#include <iostream>
#include <iomanip> // Used for formatting output (HH:MM:SS)
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    // a. Default Constructor: sets to 00:00:00
    Time() : hours(0), minutes(0), seconds(0) {}

    // b. Parameterized Constructor: takes hours, minutes, and seconds
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    // c. Single Integer Constructor: converts total seconds
    Time(long totalSeconds) {
        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    // Display function in HH:MM:SS format
    void display() const {
        cout << setfill('0') << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }
};

int main() {
    Time t1;              // Default
    Time t2(2, 30, 45);   // Parameterized
    Time t3(3665);        // Single Integer (1 hour, 1 minute, 5 seconds)

    cout << "Default Time: "; t1.display();
    cout << "Set Time:     "; t2.display();
    cout << "Seconds Time: "; t3.display();

    return 0;
}