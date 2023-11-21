// header file contains prototypes
//includes ifndef
#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger
{
private:
  int value;
  static double averageOfIntegers;
  static int numberOfObjects, sumOfIntegers;

public:

  MyInteger(int _value);

  int getValue() const;

  bool isEven() const;

  static bool isOdd(int value);

  bool equals(int _value) const;

  bool equals(MyInteger &value) const;

  static double getAverageOfIntegers();
};

#endif
