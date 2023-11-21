#include <iostream>
#include "Rational.h"

Rational::Rational()
{
  numerator = 0;
  denominator = 1;
}
Rational::Rational(int _num, int _den)
{
  numerator = _num;
  denominator = _den;
}

int Rational::getNumerator() const
{
  return numerator;
}
int Rational::getDenominator() const
{
  return denominator;
}

void Rational::setNumerator(int _num)
{
  numerator = _num;
}
void Rational::setDenominator(int _den)
{
  if(_den = 0)
    denominator = 1;
  else
    denominator = _den;
}

double Rational::doubleValue() const
{
  return numerator/(double)denominator;
}

Rational Rational::operator + (const Rational & second) const
{
  return addition(second);
}

Rational Rational::addition(const Rational & second) const
{
  int n, d;

  if(denominator == second.denominator) //check if the denominator is the same
  {
    n = numerator + second.numerator; //if they are, add the numerators
    d = denominator; //keep the denominator the same
  }
  else
  {
    n = (numerator * second.denominator) + (denominator * second.numerator); //if they aren't multiply across
    d = denominator * second.denominator; //multiply the denominator
  }
  return Rational(n,d); //return the new object with the new numerator "n" and the new denominator "d"
}

bool Rational::operator < (const Rational & second) const
{
  return doubleValue() < second.doubleValue(); //returns true if the second double value is greater than the first
}
