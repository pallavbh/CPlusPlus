#include <iostream>
#include <stdexcept>
using namespace std;

int getELement(int arr[], int size, int idx)
{
    if (size == 0)
        throw invalid_argument("Empty array");
    if (idx < 0 || idx >= size)
        throw out_of_range("Index out of bounds");
    return arr[idx];
}

int main()
{
    int marks[5] = {90, 85, 78, 92, 60};
    int index = 7;
    // int index = 4;

    try
    {
        int result = getELement(marks, 5, index);
        cout << result << endl;
    }
    catch (const out_of_range &e)
    {
        cout << e.what() << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}