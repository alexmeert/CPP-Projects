#include <iostream>

using namespace std;

int whatIsThis (const int b[], int p);

int main()
{
  const int SIZE = 10;
  int x;
  int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  x = whatIsThis(a, SIZE);
  cout << x;
}

int whatIsThis(const int b[], int p)
{
  if (p == 1)
  {
    return b[0];
  }
  else
  {
    return b[p-1] + whatIsThis(b, p-1);
  }
}
