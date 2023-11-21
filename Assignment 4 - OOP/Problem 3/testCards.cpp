#include "DeckOfCards.h"
#include "DeckOfCards.cpp"
#include "Card.h"
#include "Card.cpp"
#include <iostream>

using namespace std;

int main()
{
  DeckOfCards myDeckOfCards;

  while(myDeckOfCards.moreCards())
  {
    std::cout << myDeckOfCards.dealCard().toString() << std::endl;
  }

  myDeckOfCards.shuffle();

  std::cout << "**********AFTER SHUFFLING**********" << std::endl;

  while(myDeckOfCards.moreCards())
  {
    std::cout << myDeckOfCards.dealCard().toString() << std::endl;
  }
}
