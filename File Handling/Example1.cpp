
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("data.txt");
    fout << "Hello, FIle";
    fout.close();
}