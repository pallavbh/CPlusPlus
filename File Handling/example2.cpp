#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("marks.txt");
    if (!fout)
    {
        cout << "Could not open file for writing." << endl;
        return 1;
    }
    fout << "Pallav 99" << endl;
    fout << "Unish 99" << endl;
    fout.close();

    ifstream fin;
    fin.open("marks.txt", ios::in);
    string name;
    int score;
    while (fin >> name >> score)
    {
        cout << name << " scored " << score << endl;
    }
    fin.close();

    return 0;
}