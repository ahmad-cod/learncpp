#include "io.h"
#include <iostream>


int readNumber()
{
  std::cout << "Enter an integer to add: " << '\n';
  int num{};
  std::cin >> num;

  return num;
}

void writeAnswer(int sum)
{
  std::cout << "The answer is " << sum << '\n';
}