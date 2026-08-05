#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    // Create and populate file with alphabet string
    file.open("alphabet.txt", ios::out);
    if (!file)
    {
        cerr << "Error creating file!" << endl;
        return 1;
    }
    string content = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    file << content;
    file.close();

    // Reopen file for reading and writing
    file.open("alphabet.txt", ios::in | ios::out);
    if (!file)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "original content: ABCDEFGHIJKLMNOPQRSTUVWXYZ" << endl;
    cout << "Index POsition: 0 1 2 3 4 5 6 7 8 9 ..." << endl
         << endl;

    // 1. Demonstrate seekg(offset, beg) for absolute positioning from start
    cout << "1. fileseeking(4, ios::beg);" << endl;
    file.seekg(4, ios::beg);
    char ch;
    file.get(ch);
    cout << "character at index 4:" << ch << "(should be'E')" << endl;
    cout << "Read pointer now at position:" << file.tellg() << endl
         << endl;

    // 2. Demonstrate seekp(offset, beg) to reset the write pointer
    cout << "2. file.seekg(0, ios::beg);" << endl;
    file.seekp(0, ios::beg);
    cout << "Write pointer position: " << file.tellp() << "(should be 0)" << endl
         << endl;

    // 3. Demonstrate relative seekg using ios::cur (moving backward)
    cout << "3. file.seekg(-1, ios::cur);" << endl;
    cout << " current read position before: " << file.tellg() << endl;
    file.seekg(-1, ios::cur);
    cout << "current read position after: " << file.tellg() << "(should be 4)" << endl;
    file.get(ch);
    cout << "character now at position 4: " << ch << "(should be 'E' again)" << endl
         << endl;

    // 4. Demonstrate relative seekg using ios::end to read near EOF
    cout << "4. file.seekg(-2, ios::end);" << endl;
    file.seekg(-2, ios::end);
    cout << "current read position: " << file.tellg() << "(should be 24, since 26-2=24)" << endl;
    file.get(ch);
    cout << "character now at 2 bytes before EOF: " << ch << "(should be 'Y')" << endl;
    cout << "read pointer now at: " << file.tellg() << "(position 25, which is 'z')" << endl;
    file.get(ch);
    cout << "next character is: " << ch << "(should be 'Z')" << endl
         << endl;

    // 5. Modify file content in-place using seekp and display result
    cout << "5. MODIFING the file:" << endl;
    file.seekp(5, ios::beg);
    file.put('X');
    cout << "Repalced character at index 5 with 'X'" << endl;

    file.seekg(0, ios::beg);
    string modifiedContent;
    file >> modifiedContent;
    cout << "modified content: " << modifiedContent << endl;
    file.close();

    // Clean up-delete the file
    // remove("alphabet.txt");

    return 0;
}