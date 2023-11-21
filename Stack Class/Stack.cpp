#include "Stack.h"

template<typename T> //add this before every function and constructor
Stack<T>::Stack() //we have to add <T> before the binary scope
{
  numOfElements = 0;
  capacity = 4;
  new T[capacity]; //new space on the heap
  elements = new T[capacity];
}

template<typename T>
Stack<T>::~Stack() //destructor
{
  delete [] elements; //ask why we need []
}

template<typename T>
Stack<T>::Stack(const Stack & stack) //copy constructor, we need to make a deep copy because we have stuff on the heap
{
  numOfElements = stack.numOfElements;
  capacity = stack.getCapacity();
  elements = new T[capacity]; //creating a new array that is empty

  for(int i = 0; i < numOfElements; i++) //for loop copies the data from the first space into the new, empty space we just made
    elements[i] = stack.elements[i];
}

template<typename T>
int Stack<T>::getNumOfElements() const
{
  return numOfElements;
}

template<typename T>
int Stack<T>::getCapacity() const
{
  return capacity;
}

template<typename T>
bool Stack<T>::isEmpty() const
{
  return numOfElements == 0; //returns true if the number of elements is 0
}

template<typename T>
void Stack<T>::push(T data)
{
  ensureCapacity(); //check if it's full
  elements[numOfElements++] = data; //put the data in elements[numOfElements], then increment the numOfElements
}

template<typename T>
T Stack<T>::pop()
{
  return elements[--numOfElements]; //first decrement, then return
}

template<typename T>
T Stack<T>::peek() const
{
  return elements[numOfElements-1];
}

template<typename T>
void Stack<T>::ensureCapacity()
{
  if(numOfElements == capacity) //checks if its full
  {
    T * old = elements;
    capacity = capacity*2;
    elements = new T[capacity];
    for(int i = 0; i < numOfElements; i++)
      elements[i] = old[i];

    delete [] old;
  }
}


template class Stack<int>;
template class Stack<char>;
