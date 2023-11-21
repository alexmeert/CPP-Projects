#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159

using namespace std;

int main()
{
  cout<< fixed << setprecision(2);
  cout << "Enter the length of one side of the hexagon: ";
  float side;
  cin >> side;
  float numerator = 6*(pow(side,2));
  float denominator = 4*(tan(PI/6));
  float area = numerator/denominator;
  cout << "The area of the hexagon is " << area << endl;
}
