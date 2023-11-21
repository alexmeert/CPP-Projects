#include <iostream>
#include <string>

using namespace std;

int main()
{
  string userString;
  int i;
  cout << "Please enter a string: ";
  getline(cin, userString, '\n');
  int length;
  length = userString.length();
  for(i=0; i <= length; i++)
  {
    if(i%2 != 0)
    {
      cout << userString[i] << " ";
    }
  }
  cout << endl;
}
