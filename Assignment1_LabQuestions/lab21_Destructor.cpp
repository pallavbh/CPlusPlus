/* 
Lab 21 (Destructor - Resource Management):
 Write a class FileHandler that has a FILE* pointer. The constructor should open a file (provided as a string) in 
 write mode, and the destructor should close the file. In main(), create an object of FileHandler and write a few 
 lines to the file. Ensure the file is properly closed when the object goes out of scope.
  */

#include <iostream>
#include <cstdio> // Required for FILE* operations
#include <string>

using namespace std;

class FileHandler {
private:
    FILE* filePtr;

public:
    // Constructor: Opens the file in write mode
    FileHandler(const string& filename) {
        filePtr = fopen(filename.c_str(), "w");
        if (filePtr == nullptr) {
            cout << "Error: Could not open file." << endl;
        } else {
            cout << "File opened successfully." << endl;
        }
    }

    // Destructor: Ensures the file is closed
    ~FileHandler() {
        if (filePtr != nullptr) {
            fclose(filePtr);
            cout << "File closed successfully by destructor." << endl;
        }
    }

    // Function to write to the file
    void writeToFile(const string& text) {
        if (filePtr != nullptr) {
            fprintf(filePtr, "%s\n", text.c_str());
        }
    }
};

int main() {
    {
        // Scope block to demonstrate automatic destruction
        FileHandler myFile("lab21_output.txt");
        myFile.writeToFile("Hello, this is line 1.");
        myFile.writeToFile("This is line 2, written automatically.");
        
        cout << "Writing complete, object about to go out of scope." << endl;
    } 
    // myFile's destructor is called automatically here

    cout << "Program finished." << endl;
    return 0;
}