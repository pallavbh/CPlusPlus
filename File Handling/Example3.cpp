#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("Alphabet.txt", ios::in | ios::out);

    file.seekg(4, ios::beg);
    //  Jump the READ pointer to byte index 4
    // the 5th character, 0-indexed

    file.seekg(0, ios::beg);
    // -> Jump the WRITE pointer back to the start

    file.seekg(-1, ios::cur);

    file.seekg(-2, ios::end);

    file.close();

    return 0;
}

/* 

    Incomplete Program
    Example for seekg() and seekp()

*/