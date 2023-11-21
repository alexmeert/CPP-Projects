#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal : public Animal
{
private:
  std::string furColor;

public:
  Mammal();
  Mammal(const std::string _furColor);

  Mammal(const std::string _furColor, double _weight, int _age, const std::string & _diet);

  std::string getFurColor() const;

  void setFurColor(const std::string _furColor);

  void toString() const;


};

#endif
