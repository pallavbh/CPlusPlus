#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile;
    outFile.open("student.txt");

    if (!outFile)
    {
        cout << "Error opening file";
        return 1;
    }

    outFile << "Roll no: 101" << endl;
    outFile << "Name: Pallav Bhattarai" << endl;
    outFile << "Marks: 87" << endl;

    outFile.close();

    ifstream inFile;

    inFile.open("student.txt", ios::in);
    if (!inFile)
    {
        cout << "Error opening file for reading";
        return 1;
    }

    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}