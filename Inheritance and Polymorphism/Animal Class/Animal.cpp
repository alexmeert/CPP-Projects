#include "Animal.h"

Animal::Animal()
{
  setWeight(1);
  setAge(0);
  diet = "Herbivore";
}

Animal::Animal(double _weight, int _age, const std::string & _diet)
{
  setWeight(_weight);
  setAge(_age);
  diet = _diet;
}

Animal::~Animal()
{
  std::cout << "Destructor of Class Animal" << std::endl;
}

double Animal::getWeight() const
{
  return weight;
}

int Animal::getAge() const
{
  return age;
}

void Animal::setWeight(double _weight)
{
  if(_weight > 0)
  weight = _weight;
}

void Animal::setAge(int _age)
{
  if (age > 0)
  age = _age;
}

void Animal::toString() const
{
  std::cout << "toString() function of Animal class" << std::endl;
}
