#include "Pet.h"
#include "Pet.cpp"

using namespace std;

int main()
{

  Pet pet1("Maggie", "Plastic", "Dog", 1);

  Pet pet2("Lucy", "Chewy", "Dog", 7);

  pet1.printInfo();

  pet2.printInfo();
}
