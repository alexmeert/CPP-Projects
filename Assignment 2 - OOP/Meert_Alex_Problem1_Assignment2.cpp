#include <iostream>

using namespace std;

int main()
{
  long *lPtr;
  long value1 = 20000;
  long value2;
  lPtr = &value1;
  cout << *lPtr << endl;
  value2 = *lPtr;
  cout << value2 << endl;
  cout << &value1 << endl;
  cout << lPtr << endl;
}
