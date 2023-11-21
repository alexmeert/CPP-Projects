#include "MySet.h"
#include "MySet.cpp"

#include <iostream>

using namespace std;

int main()
{

  // Create a first MySet object with the range of numbers [0; 20]
  MySet set1(20);

  // Insert 13, 7, 20, 21
  set1.insertElement(13);
  set1.insertElement(7);
  set1.insertElement(20);
  set1.insertElement(21);

  // Call printSet function from the created object
  cout << "Set 1: ";
  set1.printSet();
  cout << endl;

  // Delete 22 and 13
  set1.deleteElement(22);
  set1.deleteElement(13);

  // Call printSet function from the created object
  cout << "Set 1: ";
  set1.printSet();
  cout << endl;

  // Create a second MySet object with the range [0; 100]
  MySet set2(100);

  // Call printSet function from the second object
  cout << "Set 2: ";
  set2.printSet();
  cout << endl;

  // Create a third MySet object with the copy constructor using the first object
  MySet set3(set1);

  // Check if third object is equal to first using isEqualTo function
  cout << "Set 1 is equal to Set 3: " << boolalpha << set1.isEqualTo(set3) << endl; //boolalpha prints 'true' or 'false' instead of 1 or 0

}
