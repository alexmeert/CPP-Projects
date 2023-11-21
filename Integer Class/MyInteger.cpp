#include <iostream>
#include "MyInteger.h"


  double MyInteger::averageOfIntegers = 0;
  int MyInteger::numberOfObjects = 0;
  int MyInteger::sumOfIntegers = 0;


  MyInteger::MyInteger(int _value)
  {
    value = _value;

    sumOfIntegers += value;
    numberOfObjects++;

    averageOfIntegers = (double) sumOfIntegers/numberOfObjects;
  }

  int MyInteger::getValue() const
  {
    return value;
  }

  bool MyInteger::isEven() const
  {
    if (value%2 == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool MyInteger::isOdd(int value)
  {
    if (value%2 != 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool MyInteger::equals(int _value) const
  {
    if(_value == value)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  bool MyInteger::equals(MyInteger &myInt) const
  {
    if(myInt.getValue() == value)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  double MyInteger::getAverageOfIntegers()
  {
    return averageOfIntegers;
  }
