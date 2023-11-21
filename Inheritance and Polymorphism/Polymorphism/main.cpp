#include <iostream>

using namespace std;

class A
{
protected:
  int i;

public:

  A()
  {
    i = 1;
  }
  
  virtual void toString() const = 0; //pure virtual function

};



class B : public A //class B is a child of class A
{
  //class B already has member i and a toString function

public:

  void toString() const
  {
    cout << "toString() of class B" << endl;
  }

};



class C : public B //class C is a child of class B
{
public:

  void toString() const
  {
    cout << "toString() of class C" << endl;
  }

};


void display(const A & myC) //if dynamic binding was not enabled, the object named c would act like an A object, but
                            //because dynamic binding is enabled it acts like a C object
{

  myC.toString();

}



int main()
{
  C c;

  B b;

  display(c);
  display(b);
}
