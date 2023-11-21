#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n*factorial(n-1);
  }
}

int main()
{
    int fact;
    cout << "What factorial do you need? ";
    cin >> fact;
    cout << fact << " factorial is " << factorial(fact) <<endl;
}
