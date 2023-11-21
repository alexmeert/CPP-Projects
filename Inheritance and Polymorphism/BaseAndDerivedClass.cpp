#include <iostream>

class A
{
protected:
  int x;

public:
  A()
  {
    x = 1;
    std::cout << "I am the no-argument constructor of A class" << std::endl;
  }

  A(int _x)
  {
    x = _x;
    std::cout << "I am the user-defined constructor of A class" << std::endl;
  }

  ~A()
  {
    std::cout << "I am the destructor of A class" << std::endl;
  }

};


class B : public A
{
private:
  int y;

public:
  B() : A(5)
  {
    y = 2;
    //x = 5; //since x is protected, you can still access the variable x
    std::cout << "I am the no-argument constructor of B class" << std::endl;
  }

  ~B()
  {
    std::cout << "I am the destructor of B class" << std::endl;
  }

};



int main()
{
  B b;
}
