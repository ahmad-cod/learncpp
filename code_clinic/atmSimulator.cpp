#include <iostream>
using namespace std;

void deposit (double &balance, double amount);
void withdraw (double &balance, double amount);

int main()
{
  double balance = 0;
  deposit(balance, 5000);
  withdraw(balance, 2000);
}

void deposit (double &balance, double amount)
{
  balance += amount;
  cout << "Deposited: " << amount << '\n';
}

void withdraw (double &balance, double amount)
{
  if (amount <= balance) {
    balance -= amount;
    cout << "Withdrawn: " << amount << '\n';
  } else {
    cout << "Insufficient balance " << endl;
  }
}

