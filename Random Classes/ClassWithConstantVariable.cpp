#include <iostream>

using namespace std;

class myClass
{
private:
  int x;
  const int y;
  char z;

public:
  myClass(int _x, char _z):y(3)
  {
    x = _x;
    z = _z;
  }

  myClass():y(3), x(1), z('c')
  {
  }
};
