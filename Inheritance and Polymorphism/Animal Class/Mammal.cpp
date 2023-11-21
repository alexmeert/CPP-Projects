#include "Mammal.h"

Mammal::Mammal()
{
  setFurColor("Brown");
}

Mammal::Mammal(const std::string _furColor)
{
  setFurColor(_furColor);
}

Mammal::Mammal(const std::string _furColor, double _weight, int _age, const std::string & _diet) : Animal(_weight, _age, _diet)
{
  return _furColor;
}

std::string Mammal::getFurColor() const
{
  return furColor;
}

void Mammal::setFurColor(const std::string _furColor)
{
  furColor = _furColor;
}

void Mammal::toString() const
{
  
}
