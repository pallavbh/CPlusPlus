#include <iostream>
using namespace std;

class Teacher
{
public:
    void teach()
    {
        cout << "Teaching general subject" << endl;
    }
};

class Musician
{
public:
    void teach()
    {
        cout << "Teaching music" << endl;
    }
};
class MusicTeacher : public Teacher, public Musician
{
    // No specific teach ()
};

int main()
{
    MusicTeacher mt;
    mt.Teacher :: teach();
    mt.Musician :: teach(); 
    
    return 0;

}