#include "Card.h"

std::vector<std::string> Card::faceNames = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
std::vector<std::string> Card::suitNames = {"Hearts", "Diamonds", "Clubs", "Spades"};

Card::Card(int _face, int _suit)
{
  face = _face;
  suit = _suit;
}

std::string Card::getFace() const
{
  return faceNames.at(face);
}

std::string Card::getSuit() const
{
  return suitNames.at(suit);
}

std::string Card::toString() const
{
  return faceNames.at(face) + " of " + suitNames.at(suit);
}
