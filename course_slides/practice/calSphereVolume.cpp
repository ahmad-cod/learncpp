#include <iostream>
using namespace std;

float vol(float);
float PI = 3.14;

int main()
{
  float radius;
  cout << "Please enter the radius of the sphere: \n";
  cin >> radius;

  cout << "The volume of the sphere is: " << vol(radius) << endl;
}

float vol(float radius)
{
  return (4 / 3 * PI * radius * radius * radius);
}