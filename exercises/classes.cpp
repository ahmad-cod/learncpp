#include <iostream>
using namespace std;

class Student
{
    public:
    string firstName;
    string lastName;
    int level;
    float CGPA;

    void setFirstName(string fName)
    {
        firstName = fName;
    }
    void setLastName(string lName)
    {
        lastName = lName;
    }
    void setLevel(int lev)
    {
        level = lev;
    }
    void setCGPA(float cgpa)
    {
        CGPA = cgpa;
    }
    /* Accessor Functions */
    string getFirstName() {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    int getLevel()
    {
        return level;
    }
    float getCGPA()
    {
        return CGPA;
    }
};

void display(Student s)
{
    cout << "Student Details: \n";
    cout << "Name: " << s.getFirstName() << " " << s.getLastName();
    cout << "Level: " << s.getLevel();
    cout << "CGPA: " << s.getCGPA();
}

int main()
{
    Student aroyehun;
    aroyehun.setFirstName("Ahmad");
    aroyehun.setLastName("Aroyehun");
    aroyehun.setLevel(300);
    aroyehun.setCGPA(5.0);
    display(aroyehun);
    return 0;
}