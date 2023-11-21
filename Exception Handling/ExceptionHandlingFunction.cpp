#include <iostream>

using namespace std;

double getArea(double radius)
{
  if (radius < 0)
    throw invalid_argument("Radius cannot be negative");

  return radius * radius * 3.1415;
}

int main()
{

  try
  {
    double area = getArea(-2);
    cout << "The area is: " << area << endl;
  }
  catch(invalid_argument & ex) //invalid_argument type is an object so you pass by reference
  {
    cout << ex.what() << endl; //what() function tells you the prompt
  }

cout << "Execution of the program continues" << endl; //exception handling allows the program to continue without a runtime error

}
