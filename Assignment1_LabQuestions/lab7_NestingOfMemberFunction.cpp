/* 
Lab 7 (Nesting of Member Functions):
Create a class Temperature with private data members for celsius.
Implement a public member function display() that, in turn, calls a private member 
function toFahrenheit() to convert and display the temperature in Fahrenheit.
The display() function should show both Celsius and Fahrenheit.
 */

#include <iostream>

using namespace std;

class Temperature {
private:
    double celsius;

    // Private member function to perform the conversion
    // This is hidden from the user, reflecting "information hiding"
    double toFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

public:
    // Constructor to initialize the temperature
    Temperature(double c) : celsius(c) {}

    // Public member function that nests the call to the private function
    void display() {
        double f = toFahrenheit(); // Nesting: calling private member from public
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
        cout << "Temperature in Fahrenheit: " << f << " F" << endl;
    }
};

int main() {
    // Create a Temperature object with 25 degrees Celsius
    Temperature temp(25.0);

    // Call the public display function
    temp.display();

    return 0;
}