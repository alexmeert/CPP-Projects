#include <iostream>

using namespace std;

class Numbers
{
private:
int num1, num2;

public:

Numbers()
{
  num1 = 0;
  num2 = 0;
}

Numbers(int _num1, int _num2)
{
  num1 = _num1;
  num2 = _num2;
}

void setNum1(int _num1)
{
  num1 = _num1;
}

void setNum2(int _num2)
{
  num2 = _num2;
}

int getNum1() const
{
  return num1;
}

int getNum2() const
{
  return num2;
}

int addNumbers() const //function is constant b/c it doesn't change any of the members
{
  return num1+num2;
}


};


int main()
{
  Numbers set1(4, 2);
  Numbers set2(3, 1);

  cout << set1.addNumbers() << endl;
  cout << set2.addNumbers() << endl;
}
