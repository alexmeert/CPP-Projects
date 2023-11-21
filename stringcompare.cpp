#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  cout << "Please enter a name: " << endl;
  cin >> name;
  string name2 = "Alex";
  string name3 = "Alex";

  if (name == name2 && name == name3)
  {
    cout << boolalpha(1) << endl;
  }
  else
  {
    cout << boolaplpha(0) << endl;
  }


}
