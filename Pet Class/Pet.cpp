#include "Pet.h"

Pet::Pet(std::string _name, std::string _favoriteTreat, std::string _animalType, int _age)
{
  name = _name;
  favoriteTreat = _favoriteTreat;
  animalType = _animalType;
  age = _age;
}

void Pet::setName(std::string _name)
{
  name = _name;
}

void Pet::setFavoriteTreat(std::string _favoriteTreat)
{
  favoriteTreat = _favoriteTreat;
}

void Pet::setAnimalType(std::string _animalType)
{
  animalType = _animalType;
}

void Pet::setAge(int _age)
{
  age = _age;
}

std::string Pet::getName() const
{
  return name;
}

std::string Pet::getFavoriteTreat() const
{
  return favoriteTreat;
}

std::string Pet::getAnimalType() const
{
  return animalType;
}

int Pet::getAge()
{
 return age;
}

void Pet::printInfo()
{
  std::cout << "- Pet Info -" << std::endl;
  std::cout << "Name:\t\t" << name << std::endl;
  std::cout << "Age:\t\t" << age << std::endl;
  std::cout << "Animal Type:\t" << animalType << std::endl;
  std::cout << "Favorite Treat:\t" << favoriteTreat << std::endl << std::endl;
}
