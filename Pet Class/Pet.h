#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>

class Pet
{
private:
  std::string name;
  std::string favoriteTreat;
  std::string animalType;
  int age;


public:

  Pet(std::string _name, std::string _favoriteTreat, std::string _animalType, int age);

  void setName(std::string _name);

  void setFavoriteTreat(std::string _favoriteTreat);

  void setAnimalType(std::string _animalType);

  void setAge(int _age);

  std::string getName() const;

  std::string getFavoriteTreat() const;

  std::string getAnimalType() const;

  int getAge();

  void printInfo();
};

#endif
