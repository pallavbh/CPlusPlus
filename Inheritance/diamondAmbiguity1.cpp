#include <iostream>
#include <string>
using namespace std;

// Base class representing a generic person
class Person
{
protected:
    string name;
    int personID;

public:
    Person() : name("unknown"), personID(0)
    {
        cout << "Person Constructor called" << endl;
    }
    void introduce()
    {
        cout << "I am " << name << " with ID: " << personID << endl;
    }
    void setDetails(string n, int id)
    {
        name = n;
        personID = id;
    }
};

// Teacher class using virtual inheritance to avoid the diamond problem
class Teacher : virtual public Person
{
protected:
    string staffID, department;

public:
    Teacher() : staffID("T000"), department("General")
    {
        cout << "teacher constructor called" << endl;
    }
    void teach()
    {
        cout << staffID << " is teaching in " << department << endl;
    }
    void setTeacherDetails(string sid, string dept)
    {
        staffID = sid;
        department = dept;
    }
};

// Researcher class using virtual inheritance
class Researcher : virtual public Person
{
protected:
    string projectID, reasearchArea;

public:
    Researcher() : projectID("R000"), reasearchArea("General")
    {
        cout << "Researcher constructor called" << endl;
    }
    void research()
    {
        cout << projectID << " is researching in " << reasearchArea << endl;
    }
    void setResearcherDetails(string pid, string area)
    {
        projectID = pid;
        reasearchArea = area;
    }
};

// Professor inherits from both Teacher and Researcher (multiple inheritance)
class Professor : public Teacher, public Researcher
{
private:
    string professorID;
    int experience;

public:
    Professor() : professorID("P000"), experience(0)
    {
        cout << "Professor constructor called" << endl;
    }
    void displayInfo()
    {
        introduce();
        cout << name << endl;
        teach();
        research();
    }
    void setProfessorDetails(string pid, int exp)
    {
        professorID = pid;
        experience = exp;
    }
    void setPersonDetails(string n, int id)
    {
        setDetails(n, id);
    }
};

int main()
{
    // Create a professor object and demonstrate functionality
    cout << "--- Creating Professor Object ---" << endl;
    Professor prof;
    
    cout << "\n--- Setting Details ---" << endl;
    prof.setPersonDetails("Dr. John", 101);
    prof.setTeacherDetails("T105", "Computer Science");
    prof.setResearcherDetails("R404", "Artificial Intelligence");
    prof.setProfessorDetails("P999", 15);

    cout << "\n--- Displaying Information ---" << endl;
    prof.displayInfo();

    return 0;
}