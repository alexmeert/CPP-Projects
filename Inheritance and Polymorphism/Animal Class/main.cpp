#include "Animal.h"
#include "Animal.cpp"
#include "Fish.h"
#include "Fish.cpp"

void display(Animal & obj)
{
  obj.toString();
}

int main()
{

  Fish fish1;

  display(fish1);
}
