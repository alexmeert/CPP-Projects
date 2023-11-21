#include <iostream>
#include <string>

using namespace std;

void count(const string &s)
{
  int i;
  int count[256] = {0}; //initializing an array of all possible characters that can be entered

  for(i = 0; s[i] != '\0'; i++) //iterating through the array and adding to the counter when a character is encountered
  {
    count[s[i]]++; //adding to the counter of each individual character
  }

  for(i = 97; i < 256; i++) // prevents printing a null character by limiting the bounds
  {
    if(count[i] != 0) //requires the index to have at least one occurance to print out the number of occurances of each character in the string
    {
      cout << char(i) << ": " << count[i] << " times" << endl; //prints out the occurances of each character in alphabetical order because we are
    }                                                         // iterating a-z
  }
}

int main()
{
  string userString;
  int j;
  cout << "Please enter a string: ";
  getline(cin, userString, '\n');
  int length = userString.length();
  for(j = 0; j < length; j++)
  {
    userString[j] = tolower(userString[j]); //changes the string to all lowercase so that all letters are in the same category
  }
  count(userString);
}
