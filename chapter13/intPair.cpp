#include <iostream>

// Create a struct called IntPair that holds two integers. 
// Add a member function named print that prints the value of the two integers.

// Provide the definition for IntPair and the print() member function here
struct IntPair
{
  int x;
  int y;

  void print()
  {
    std::cout << x << ", " << y << '\n';
  }
};


int main()
{
	IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();

	return 0;
}