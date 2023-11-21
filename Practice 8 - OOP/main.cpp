#include <iostream>
#include <string>

using namespace std;

class LivingThing
{
public:

  LivingThing()
  {
    cout << "This is the constructor of Living Thing class" << endl;
  }

  virtual void toString()
  {
    cout << "Called the toString() function of Living Thing Class" << endl;
  }

};

class Animal : public LivingThing
{
  public:

  Animal()
  {
    cout << "This is the constructor of Animal class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Animal Class" << endl;
  }
};

class Fish : public Animal
{
  public:

  Fish()
  {
    cout << "This is the constructor of Fish class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Fish Class" << endl;
  }
};

class Sardine : public Fish
{
  public:

  Sardine()
  {
    cout << "This is the constructor of Sardine class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Sardine class" << endl;
  }
};

class Bass : public Fish
{
  public:

  Bass()
  {
    cout << "This is the constructor of Bass class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Bass class" << endl;
  }
};

class Mammal : public Animal
{
  public:

  Mammal()
  {
    cout << "This is the constructor of Mammal class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Mammal Class" << endl;
  }
};

class Cat : public Mammal
{
  public:

  Cat()
  {
    cout << "This is the constructor of Cat class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Cat class" << endl;
  }
};

class Tiger : public Cat
{
  public:

  Tiger()
  {
    cout << "This is the constructor of Tiger class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Tiger Class" << endl;
  }
};

class Lion : public Cat
{
  public:

  Lion()
  {
    cout << "This is the constructor of Lion class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Lion class" << endl;
  }
};

class Plant : public LivingThing
{
  public:

  Plant()
  {
    cout << "This is the constructor of Plant class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Plant class" << endl;
  }
};

class Tree : public Plant
{
  public:

  Tree()
  {
    cout << "This is the constructor of Tree class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Tree class" << endl;
  }
};

class Chestnut : public Tree
{
  public:

  Chestnut()
  {
    cout << "This is the constructor of Chestnut class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Chestnut class" << endl;
  }
};

class Cherry : public Tree
{
  public:

  Cherry()
  {
    cout << "This is the constructor of Cherry class" << endl;
  }

  void toString()
  {
    cout << "Called the toString() function of Cherry class" << endl;
  }
};


  void display(LivingThing & obj)
  {
    obj.toString();
  }

  int main()
  {
    Sardine sardine;
    Bass bass;
    Tiger tiger;
    Lion lion;
    Chestnut chestnut;
    Cherry cherry;
    Tree tree;
    tree.toString();
    display(sardine);
    display(tiger);
    display(tree);
  }
