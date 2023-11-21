#include "DeckOfCards.h"
#include <ctime>

DeckOfCards::DeckOfCards()
{
  currentCard = 0;
  for(int i = 0; i < 4; i++)
  {
    for(int j = 0; j < 13; j++)
    {
      deck.push_back(Card(j, i));
    }
  }
}

void DeckOfCards::shuffle()
{
  srand(time(NULL));

  Card tempCard = Card(0, 0);

  int index;

  for(int i = 0; i < 52; i++)
  {
    index = rand() % 52;

    tempCard = deck.at(i);
    deck.at(i) = deck.at(index);
    deck.at(index) = tempCard;
  }
  currentCard = 0;
}

Card DeckOfCards::dealCard()
{
  return deck.at(currentCard++);
}

bool DeckOfCards::moreCards() const
{
  return currentCard < 52;
}
