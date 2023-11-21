#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
private:

  double weight;
  int age;

protected:

  std::string diet;

public:

  Animal();

  Animal(double _weight, int _age, const std::string _diet);

  ~Animal();

  double getWeight() const;
  int getAge() const;

  void setWeight(double _weight);
  void setAge(int _age);

  virtual void toString() const; //Animal class is now abstract
};

#endif
