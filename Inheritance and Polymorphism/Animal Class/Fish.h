#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal
{
private:
  std::string waterType;

public:

  Fish();

  Fish(const std::string & _waterType);

  Fish(const std::string & _waterType, double _weight, int _age, const std::string & _diet) : Animal(_weight, _age, _diet);

  ~Fish();

  std::string getWaterType() const;

  void setWaterType(const std::string & _waterType);

  //overriding NOT redefining
  void toString() const;

  bool operator != (Fish & fish2);

};

#endif
