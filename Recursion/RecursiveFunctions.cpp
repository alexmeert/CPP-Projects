#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 1)
    return 1;
  else
    return n*factorial(n-1);
}

int main()
{
  cout << "What factorial do you need? ";
  int x;
  cin >> x;
  cout << x <<" factorial is " << factorial(x) << endl;
}
