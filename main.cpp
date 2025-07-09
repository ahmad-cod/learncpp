#include <iostream>

// forward declaration of the getInteger function
int getInteger();
int add(int x, int y);

int main()
{
  using namespace std;
  cout << "Using Namespace std. \n";
	int x{ getInteger() };
	int y{ getInteger() };

	cout << x << " + " << y << " is " << add(x, y) << '\n';
	return 0;
}