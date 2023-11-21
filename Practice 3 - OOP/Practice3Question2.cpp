#include <iostream>

using namespace std;

int main()
{
  int* p;
  int num = 5;
  p = &num;

  cout << "The value of the number is " << num << endl;
  cout << "The value of the number is " << *p << endl;
  cout << "The address of the number is " << &num << endl;
  cout << "The address of the number is " << p << endl;
  cout << "The value of the pointer is " << p << endl;
  cout << "The address of the pointer is " << &p << endl;
}
