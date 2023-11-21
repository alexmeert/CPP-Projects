#include <iostream>

using namespace std;

int main()
{
  int x = 4;
  int *pX = &x;
  int y = *pX;

  cout << "x: " << x << endl;
  cout << "*pX: " << pX << endl;
  cout << "y: " << y << endl;

}
