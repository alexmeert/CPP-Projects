#include <iostream>

using namespace std;


int main()
{
  int num1, num2;

  cout << "Enter two integers: ";
  cin >> num1 >> num2;

  try
  {
    if(num2 == 0) //if this condition is met you will throw an exception
      throw num1;

    int result = num1/num2;
    cout << "the result is " << result << endl;

  }

  catch(int ex)
  {
    cout << "Exception: " << ex << " cannot be divided by zero" << endl;
  }

  cout << "Execution of the program continues" << endl; //exception handling allows the program to continue without a runtime error

}
