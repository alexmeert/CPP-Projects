#include <iostream>

using namespace std;

int quotient(int num1, int num2)
{

  if(num2 == 0)
  throw runtime_error("Divisor cannot be zero");

  return num1/num2;

}


int main()
{
  int num1 = 4;
  int num2 = 0h;

  try
  {
    quotient(num1, num2);
  }
  catch(runtime_error & ex)
  {
    cout << "Exception: " << ex.what() << endl;
  }


  try
  {
    for(int i = 0; i < 100; i++)
    {
      new int[70000000];
      cout << i << endl;
    }
  }

  catch(bad_alloc & ex)
  {
    cout << "Exception: " << ex.what() << endl;
  }

}
