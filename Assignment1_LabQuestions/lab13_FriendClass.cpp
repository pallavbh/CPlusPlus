/* 
Lab 13 (Friend Class):
Design a class DataStorage with private data members (int secret). Create a friend class DataProcessor
that can access and modify the secret value in DataStorage. Demonstrate this by creating objects of both
classes and having DataProcessor manipulate the data.
 */

#include <iostream>

using namespace std;

class DataStorage {
private:
    int secret;

public:
    DataStorage(int s) : secret(s) {}

    // Granting friend status to DataProcessor
    // DataProcessor can now access private members of DataStorage
    friend class DataProcessor;

    void display() const {
        cout << "Current secret value: " << secret << endl;
    }
};

class DataProcessor {
public:
    // Function to modify the private 'secret' member of DataStorage
    void encrypt(DataStorage &ds, int key) {
        ds.secret += key;
    }

    // Function to view the private 'secret' member of DataStorage
    void reset(DataStorage &ds) {
        ds.secret = 0;
    }
};

int main() {
    DataStorage myData(100);
    DataProcessor myProcessor;

    cout << "Original data:" << endl;
    myData.display();

    // DataProcessor manipulates the private data of DataStorage
    myProcessor.encrypt(myData, 50);
    cout << "\nAfter encryption (adding 50):" << endl;
    myData.display();

    myProcessor.reset(myData);
    cout << "\nAfter reset:" << endl;
    myData.display();

    return 0;
} 