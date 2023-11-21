#include <iostream>
#include "Circle2D.h"
#include "Circle2D.cpp"

using namespace std;

int main()
{
  Circle2D* pCir1 = new Circle2D(2, 2, 5.5);
  Circle2D cir2(-6, -3, 1.5);

  cout << Circle2D::getNumberOfCircles() << endl;

  Circle2D cir3(cir2);

  cout << cir3.getNumberOfCircles() << endl;

  cout << pCir1->overlaps(cir2) << endl;

  cout << cir3.overlaps(cir2) << endl;

  delete pCir1;

  cout << Circle2D::getNumberOfCircles();

}
