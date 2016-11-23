#include <iostream>
#include <string>
#include "MyStack.h"
using namespace std;

// Duplicate the Stack class from the previous exercies.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for te two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.


int main() {
  MyStack stack;
  try {
    stack.Push(2);
    stack.Push(5);
    stack.Push(10);
    stack.Push(5);
    stack.Push(10);
    stack.Push(12);
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();
    stack.Pop();

  }
  catch (MyStack::MyErrorMessages x) {
    cout << stack.interpretException(x);
  }
  
  return 0;
}