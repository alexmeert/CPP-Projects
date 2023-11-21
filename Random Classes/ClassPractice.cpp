#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
  int id;
  double balance, annualInterestRate;

  Account()
  {
    id = 0;
    balance = 0;
    annualInterestRate = 0;
  }

  Account(int _id, double _balance, double _annualInterestRate)
  {
    id = _id;
    balance = _balance;
    annualInterestRate = _annualInterestRate;
  }

  void display()
  {
    cout << "ID: " << id << endl;
    cout << "Balance: " << balance << endl;
    cout << "Annual Interest Rate: " << annualInterestRate << endl << endl;
  }

  double getMonthlyInterestRate()
  {
    return annualInterestRate / 12;
  }

  void withdraw(double amount)
  {

    balance = balance - amount;
  }

  void deposit(double amount)
  {
    balance = balance + amount;
  }
};


int main()
{
  Account acct1;
  acct1.display();

  Account acct2(2003, 500.53, 0.05);
  acct2.display();
  acct2.getMonthlyInterestRate();
  acct2.withdraw(54.34);
  acct2.deposit(346.69);
  acct2.display();
}
