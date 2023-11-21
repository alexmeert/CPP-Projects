#include "MySet.h"
#include <iostream>

using namespace std;


MySet::MySet(unsigned int integer) //user-defined constructor
{
  range = integer;
  size = integer + 1;
  set = new bool[size]; //store on the heap
  for(int i = 0; i < size; i++)
  {
    set[i] = false;
  }
}


MySet::MySet(const MySet & newInteger) //copy constructor
{
  range = newInteger.range;
  size = newInteger.size;
  set = new bool[size];
  for(int i = 0; i < size; i++)
  {
    set[i] = newInteger.set[i];
  }
}


MySet::~MySet()
{
  delete[] set;
}


void MySet::insertElement(int k)
{
  if (k >= 0 && k <= range)
  {
    set[k] = true;
  }
  else
  {
    cout << "Warning! " << k << " is out of the range!" << endl;
  }
}


void MySet::deleteElement(int m)
{
  if (m >= 0 && m <= range)
  {
    set[m] = false;
  }
  else
  {
      cout << "Warning! " << m << " is out of the range!" << endl;
  }
}


void MySet::printSet() const
{
  bool first = true;
  cout << "{";
  for (int i = 0; i < size; i++)
  {
    if (set[i])
    {
      if (!first)
      {
        cout << ", ";
      }
      cout << i;
      first = false;
    }
  }
    cout << "}";
}


bool MySet::isEqualTo(const MySet& newInteger) const  // To check if the sets are equal to each other
{
  if (range != newInteger.range)
  {
    return false;
  }
  for (int i = 0; i < size; i++)
  {
    if (set[i] != newInteger.set[i])
    {
      return false;
    }
  }
  return true;
}
