/* 
Lab 25 (Singleton Pattern with Static Members): 
Implement a Logger class that logs messages to a file. The class should use the Singleton design pattern:
a.	Make the constructor private.
b.	Have a static data member instance (a pointer to the single Logger object).
c.	Have a static member function getInstance() that returns the single instance.
d.	Have a member function log(const string &message) to write to the file. In main(), get the logger instance 
from multiple parts (e.g., in different functions) and log messages. Verify that the same file handle is used.
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Logger {
private:
    ofstream logFile;
    static Logger* instance; // Static pointer for the single instance

    // Private constructor prevents external instantiation
    Logger() {
        logFile.open("log.txt", ios::out | ios::app);
        cout << "Logger: File opened." << endl;
    }

public:
    // Delete copy constructor and assignment operator to prevent duplicates
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    // Static function to get the instance
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = new Logger();
        }
        return instance;
    }

    void log(const string &message) {
        if (logFile.is_open()) {
            logFile << message << endl;
        }
    }

    // Destructor to close the file
    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
            cout << "Logger: File closed." << endl;
        }
    }
};

// Initialize static member
Logger* Logger::instance = nullptr;

// Helper functions to demonstrate global access
void task1() {
    Logger::getInstance()->log("Task 1: Logging from function 1.");
}

void task2() {
    Logger::getInstance()->log("Task 2: Logging from function 2.");
}

int main() {
    task1();
    task2();

    cout << "Check 'log.txt' to see logs from different functions using the same instance." << endl;

    return 0;
}