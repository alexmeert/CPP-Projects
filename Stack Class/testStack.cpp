#include <iostream>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

int main()
{
  Stack<char> stack;

  stack.push(4);
  stack.push(1);
  stack.push(2);
  stack.push(3);

  cout << stack.getCapacity() << endl;

  stack.push(5);
  cout << stack.getCapacity() << endl;

  Stack<> stack1;

  stack1.push(4);
  stack1.push(1);
  stack1.push(2);
  stack1.push(3);

  cout << stack1.getCapacity() << endl;

  stack.push(5);
  cout << stack.getCapacity() << endl;
}
