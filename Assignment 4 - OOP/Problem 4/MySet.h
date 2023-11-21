#ifndef MYSET_H
#define MYSET_H

class MySet
{
private:
  unsigned int range;
  int size;
  bool* set;

public:

  MySet(unsigned int integer); //user-defined constructor

  MySet(const MySet & newInteger); //copy constructor

  ~MySet(); //deconstructor

  void insertElement(int k);

  void deleteElement(int m);

  void printSet() const;

  bool isEqualTo(const MySet& newInteger) const;
};

#endif
