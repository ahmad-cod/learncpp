#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 18; j++) {
      cout << '$';
    }
    cout << '\n';
  }

  cout << '\n';

  int numberEntered;
  long product = 1;
  int count = 0;

  cout << "Enter numbers to multiply (enter -2 to stop): \n";
  do {
    cout << "Enter number: ";
    cin >> numberEntered;

    if (numberEntered == -2) break;
    
    product *= numberEntered;
    count++;

  } while (numberEntered != -2);

  if (count > 0)
    cout << "\nThe Product of all the numbers you entered is " << product << '\n';
  else
    cout << "No valid number was entered \n";
  cout << "You entered a total number of " << count << '\n';
}