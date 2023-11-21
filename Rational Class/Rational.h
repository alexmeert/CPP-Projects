#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
private:
  int numerator, denominator;

public:
  Rational();
  Rational(int _num, int _den);

  int getNumerator() const;
  int getDenominator() const;

  void setNumerator(int _num);
  void setDenominator(int _den);

  double doubleValue() const; //constant because it does not change the value of numerator or getDenominator

  Rational operator + (const Rational & second) const; //making this a constant member method means that it will not change any of the preexisting objects

  Rational addition(const Rational & second) const;

  bool operator < (const Rational & second) const;
};

#endif
