#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        int rollNo;

        void display(){
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
        }
};

int main(){
    Student s1;

    s1.name = "Pallav";
    s1.rollNo = 12;
    s1.display();
    return 0;
}