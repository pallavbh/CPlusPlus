#include <iostream>
using namespace std;
class Mercedes {
 public:
 // Static data member to count the number of Mercedes models
    static int modelCount;
// Constructor to increment the model count whenever a new Mercedes object is created
    Mercedes() {
        modelCount++;
    }
};
// Initialize the static data member outside the class definition
// Static data members must be defined and initialized outside the class definition
// Must be done exactly once in the program
int Mercedes::modelCount = 0;

int main() {
    // Create multiple Mercedes objects to demonstrate the use of the static data member
    Mercedes m1; // This will increment the modelCount to 1
    Mercedes m2; // This will increment the modelCount to 2
    Mercedes m3; // This will increment the modelCount to 3

    cout << "Total number of Mercedes models: " << Mercedes::modelCount << endl;

    return 0;
}