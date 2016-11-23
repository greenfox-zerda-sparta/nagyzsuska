#include <iostream>
#include <string>
using namespace std;

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error. 
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
int stack[5];
int top = -1;
void Push(int x) throw (int) {
  if (top == 4) {
    throw 999;
  }
  stack[++top] = x;
}

void Pop() throw (int) {
  if (top == -1) {
    throw 777;
  }
  top--;
}

string interpretException(int exception) {
  if (exception == 999) {
    return "Stack is full.";
  }
  if (exception == 777) {
    return "Stack is empty.";
  }
}

int main() {
  try {
    Push(2);
    Push(5);
    Push(10);
    Push(5);
    Push(10);
    Push(12);
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
    Pop();
  }
  catch (int x) {
   cout << interpretException(x);
  }
  return 0;
}
// Illustrate in the main function both when it works fine and when exceptions occur.