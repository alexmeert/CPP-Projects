#include <iostream>

using namespace std;

int evenCount(int n)
{
  while (n != 0)
  {
    if (n%2 == 0)
    {
      return 1 + evenCount(n/10);
    }
    else
    {
      return evenCount(n/10);
    }
  }
}

int main()
{
  int userValue;
  cout << "Please enter a number: ";
  cin >> userValue;
  cout << "There are " << evenCount(userValue) << " even numbers in " << userValue << endl;
}
