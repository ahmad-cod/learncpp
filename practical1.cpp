// allow users to enter numbers 
// and perform mathematical operations on it

#include <iostream>
using namespace std;

int add(int x, int y)
{
  return x + y;
}

int multiply(int x, int y)
{
  return x * y;
}

float calculateCost(int price)
{
  float tax { 0.005 };
  // int cost{};

  return price * (1 + tax / 100);
}

void printResult(int x, int y, int result, string outputType)
{
  string operatorType{};
  // string 
  if (outputType == "sum")
  {
    cout << "Wow! The sum of " << x << " + " << y << " = " << result << '\n';
  }
}

int main()
{
  cout << "Enter price of the item: \n";
  int price{};
  cin >> price;
  // cout << "Enter first integer: \n";

  // int x{};
  // cin >> x;

  // cout << "Enter second integer: \n";
  
  // int y{};
  // cin >> y;

  // printResult(x, y, add(x, y), "sum");
  cout << "The cost of the product is: " << calculateCost(price) << '\n';
  // cout << "The product of " << x << " * " << y << " = " << multiply(x, y) << '\n';
}