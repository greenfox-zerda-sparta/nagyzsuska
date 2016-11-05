//============================================================================
// Name        : Stack.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Stack {
  int size;
  double* value;
};

Stack* stack_construct(double input[], int size) {
  Stack* stack = new Stack;
  stack->size = size;
  stack->value = new double[stack->size];
  for (int i = 0; i < stack->size; i++) {
    stack->value[i] = input[i];
  }
  return stack;
}

void stack_push(Stack& stack, double value) {
  stack.size++;
  double* temp = new double[stack.size];
  for (int i = 0; i < stack.size; i++) {
    temp[i] = stack.value[i];
  }
  temp[stack.size-1] = value;
  delete[] stack.value;
  stack.value = temp;
}

double stack_pop(Stack& stack) {
  double value = stack.value[stack.size-1];
  stack.size--;
  double* temp = new double[stack.size];
  for (int i = 0; i < stack.size; i++) {
    temp[i] = stack.value[i];
  }
  delete[] stack.value;
  stack.value = temp;
  return value;
}

bool isEmpty (Stack& stack) {
  return (stack.size == 0);
}

int main() {
  double input[] = {1.5, 2.2, 3.4};
  Stack* stack = stack_construct(input, 3);
  cout << stack->size <<endl << stack->value[0] << endl; // << stack->arr[1] << endl << stack->arr[2] << endl;
  stack_push(*stack, 4.5);
  cout << stack->size <<endl << stack->value[3] << endl;
  cout << stack_pop(*stack);
  delete[] stack->value;
  delete stack;
  return 0;
}
