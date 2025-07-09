#include <iostream>
using namespace std;

int doubleNumber(int num)
{
  return num * 2;
}

int main() 
{
  cout << "Enter an integer " << '\n';

  int num {};
  cin >> num;

  cout << doubleNumber(num) << '\n';

  return 0;
}