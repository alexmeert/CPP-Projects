#include <iostream>
#include <iomanip>
#include "MyInteger.h"
#include "MyInteger.cpp"

int main()
{
  std::cout << "The average of integers is: " << MyInteger::getAverageOfIntegers() << std::endl;
  std::cout << "isOdd(3) = " << MyInteger::isOdd(3) << std::endl;

  MyInteger i1(9323), i2(147), i3(9323);
  std::cout << "i1.isEven() = " << i1.isEven() << std::endl;
  std::cout << "i3.equals(843) = " << i3.equals(843) << std::endl;
  std::cout << "i1.equals(i3) = " << i1.equals(i3) << std::endl;
  std::cout << "averageOfIntegers = " << std::fixed << std::setprecision(2) << MyInteger::getAverageOfIntegers() << std::endl;
}
