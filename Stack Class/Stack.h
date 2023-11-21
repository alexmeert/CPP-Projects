#ifndef STACK_H
#define STACK_H

template<typename T = int>

class Stack
{
private:
  T *elements; //pointer of type T
  int capacity, numOfElements; //when the capacity is = to the numOfElements, the stack is full

  void ensureCapacity(); // if the stack is full, it doubles the capacity. Under private because we don't want to give the user access

public:
  Stack();  //constructor
  ~Stack(); //destructor
  Stack(const Stack & stack); //copy constructor since we need a deep copy

  int getNumOfElements() const;
  int getCapacity() const;

  //we dont need set functions in this case because they will be automatically set

  bool isEmpty() const; //to check if the stack is empty, since we can't use the pop function if the stack is empty

  void push(T data);

  T pop(); //type T because we don't have a known type

  T peek() const;

};
#endif
