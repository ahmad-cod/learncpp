#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

struct Student {
  int studentID;
  string name;
  int age;
  float grade;
};

void printFloat(float x) {
  cout << fixed << setprecision(2) << x;
}

int main()
{
  Student myStudents[3];

  cout << "Program to accept details of 3 students then display the details \n";
  for (int i {0}; i < 3; i++) {
    cout << "Enter details for student " << i + 1 << ".\n";
    cout << "ID: ";
    while (!(cin >> myStudents[i].studentID)) {
      cout << "Invalid input. \nPlease enter an integer: ";
      cin.clear(); //clear error flags
      // discard bad input
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Name: ";
    cin >> myStudents[i].name;
    cout << "Age: ";
    cin >> myStudents[i].age;
    cout << "Grade: ";
    cin >> myStudents[i].grade;
  }

  cout << endl;
  cout << "Here is the details of the list of students entered \n\n";
  cout << "ID " << setw(20) << "Name " << setw(10) << "Age " << setw(10) << "Grade \n";
  for (int i = 0; i < 3; i++) {
    cout << setw(3) << setfill('0') << myStudents[i].studentID << '.' <<  setfill(' ') << setw(20) << myStudents[i].name << setw(10) << myStudents[i].age << setw(10);
    printFloat(myStudents[i].grade);
    cout << '\n';
  }
}