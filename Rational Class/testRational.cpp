#include <iostream>
#include "Rational.h"
#include "Rational.cpp"

using namespace std;

int main()
{

  Rational r1(4,2);
  cout << "Numerator of r1: " << r1.getNumerator() << endl << "Denominator of r1: " << r1.getDenominator() << endl << endl;

  Rational r2(5,3);
  cout << "Numerator of r2: " << r2.getNumerator() << endl << "Denominator of r2: " << r2.getDenominator() << endl << endl;

  Rational r3 = r1 + r2; //Rational r3 = r1.addition(r2);
  cout << "Numerator of r3: " << r3.getNumerator() << endl << "Denominator of r3: " << r3.getDenominator() << endl << endl;


  bool result1, result2;

  result1 = r1 < r2;
  result2 = r2 < r1;

  cout << result1 << " and " << result2 << endl; //result 1 should be 0 and reuslt 2 should be 1
}
