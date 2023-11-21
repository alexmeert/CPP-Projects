#include <iostream>
#include <string>

using namespace std;

string swapCase (const string &n)
{
  string copy = n; //copy of user's string
  int length;
  length = copy.length(); //finds the length of the string which is bounds for the for loop
  for(int i = 0; i < length; i++)
  {
    if(islower(copy[i]))
    {
      copy[i] = toupper(copy[i]);
    }
    else if(isupper(copy[i]))
    {
      copy[i] = tolower(copy[i]);
    }
  }
  return copy;
}

int main()
{
  //make a copy of n
  //use .length() function
  //make a for loop
  //check each character one by one using if statements (is lower and to lower functions)
  //use getline to print the altered string

  string userString;
  cout << "Enter a string: ";
  getline(cin, userString);
  cout << swapCase(userString);
}
