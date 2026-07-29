#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>

class keyvalue
{
private:
    T1 key;
    T2 value;

public:
    keyvalue(T1 k, T2 v) : key(k), value(v) {}

    void show()
    {
        cout << key << " -> " << value << endl;
    }
};

int main()
{
    keyvalue<string, int> age("Rita", 22);
    keyvalue<int, double> price(101, 49.5);

    age.show();
    price.show();

    return 0;
}