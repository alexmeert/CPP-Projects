#include <iostream>

using namespace std;

int main()
{
  int num, sum = 0, mod;
  cout << "Enter an integer from 0 to 1000000: ";
  cin >> num;
  while (num > 0)
  {
    mod = num%10;
    sum = sum + mod;
    num = num/10;
  }
  cout << "The sum of the digits is " << sum << "." << endl;
}
