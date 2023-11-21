#include "Fish.h"

Fish::Fish()
{
  setWaterType("Fresh Water");
}

Fish::Fish(const std::string & _waterType)
{
  setWaterType(_waterType);
}

Fish::Fish(const std::string & _waterType, double _weight, int _age, const std::string & _diet) : Animal(_weight, _age, _diet)
{
  setWaterType(_waterType);
}

~Fish()
{
  std::cout << "Destructor of Fish Class" << std::endl;
}


std::string Fish::getWaterType() const
{
  return waterType;
}

void Fish::setWaterType(const std::string & _waterType)
{
  waterType = _waterType;
}

//overriding NOT redefining
void Fish::toString() const
{
  std::cout << "toString() of Fish Class" << std::endl;
}

bool Fish::operator != (Fish & fish2)
{
  if(waterType == fish2.getWaterType() && getWeight() == fish2.getWeight())
  return false;
  else
  return true;
}
