#include <iostream>

// get a number from the user, and return if it's prime or not

// get number from the user
// check if number is one of 2, 3, 5, or 7, if it is, print it's prime
// else print it's not a prime

int getNumber()
{
  std::cout << "Please enter a number between 0 - 10: \n";
  int x{};
  std::cin >> x;

  // if (x > 10)
  //   std::cout <<

  return x;
}

bool isPrime(int x)
{
  // if (x == 2)
  //   return true;
  // else if (x == 3)
  //   return true;
  // else if (x == 5)
  //   return true;
  // else if (x == 7)
  //   return true;
  // return false;

  return x == 2 || x == 3 || x == 5 || x == 7;
}

void printAnswer(bool value)
{
  if (value)
    std::cout << "The digit is prime \n";
  else
    std::cout << "The digit is not prime \n";
}

int main()
{
  int x{ getNumber() };

  if ( (x > 10) || (x < 0) ) {
    std::cout << "Number must be between 0 - 10 \n";
    x = getNumber();
  }
    
  printAnswer(isPrime(x));
  return 0;
}