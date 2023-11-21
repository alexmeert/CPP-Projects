#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  cout << fixed << setprecision(2);
  int userInteger;
  cout << "Please enter an integer to see whether or not it is divisible by 4: ";
  cin >> userInteger;
  if(userInteger < 0)
    {
      cout << "The program doesn't accept negative numbers, sorry.";
    }
  else
    {
      if (userInteger <= 100)
      {
        int divide;
        int remainder;
        remainder = userInteger%4;
        divide = userInteger/4;
        if(remainder == 0)
          {
            cout << "The given number (" << userInteger << ") is divisible by 4" << endl;
            cout << "Quotient: " << divide << " and Remainder: " << remainder << endl;
          }
        else if (remainder != 0)
          {
            cout << "The given number (" << userInteger << ") is not divisible by 4" << endl;
            cout << "Quotient: " << divide << " and Remainder: " << remainder << endl;
          }
      }
      else if(userInteger > 100)
      {
        cout << "The entered integer is greater than 100 and the square root of the number is " << sqrt(userInteger) << endl;
      }
    }
}
