#include<iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(const string& name, int age){
            this -> name = name;
            this -> age = age;
        }
        void displayInfo(){
            cout << "Name: " << this -> name << endl;
            cout << "Age: "  << this -> age << endl;
        }
        void updateAge(int newAge){
            this -> age = newAge;
        }
};
int main(){
    Person person("Kapil", 19);
    person.displayInfo();
    person.updateAge(20);
    cout << "After updating age: " << endl;
    person.displayInfo();
    return 0;
}