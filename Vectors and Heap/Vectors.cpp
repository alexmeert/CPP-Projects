#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<int> intVector;

  intVector.push_back(4);
  intVector.push_back(2);
  intVector.push_back(3);
  intVector.shrink_to_fit();
  intVector.pop_back();

  cout << intVector.size() << endl;
  cout << intVector.capacity() << endl;


}
