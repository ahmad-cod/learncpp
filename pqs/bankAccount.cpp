#include <iostream>
#include <limits>
using namespace std;

class BankAccount {
private:
  double balance;
  
public:
  int accountNumber;
  void deposit (double amount);
  void withdraw (double amount);
  double getBalance();
};

void BankAccount::deposit(double amount)
{
  balance += amount;
}

void BankAccount::withdraw (double amount)
{
  balance -= amount;
}

double BankAccount::getBalance()
{
  return balance;
}

int main()
{
  cout << "Welcome to ANA bank.\n";
  BankAccount userAcct;
  cout << "Please enter an account number for your account. \n";
  while (!(cin >> userAcct.accountNumber))
  {
    cout << "Account number must be an integer \nPlease enter numbers: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  userAcct.deposit(1000000);
  cout << "Balance after deposit: " << userAcct.getBalance() << '\n';
  userAcct.withdraw(200000);
  cout << "New Balance after withdrawal: " << userAcct.getBalance() << '\n';

  return 0;
}