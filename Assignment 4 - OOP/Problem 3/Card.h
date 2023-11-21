#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>
#include <vector>

class Card
{
private:
  int face, suit;

  static std::vector<std::string> faceNames;
  static std::vector<std::string> suitNames;

public:
  Card(int _face, int _suit);

  std::string getFace() const;
  std::string getSuit() const;

  std::string toString() const;
};

#endif
