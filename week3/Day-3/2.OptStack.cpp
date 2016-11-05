//============================================================================
// Name        : new.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

struct Stack {
  int size;
  int arr_length;
  double* arr;
};

int optimal_size(int size) {
  int i = 0;
  int optimal = 0;
  while (i <= size) {
    if (2 * size <= pow(2, i)) {
      optimal = pow(2, i);
      break;
    } else {
      i++;
    }
  }
  return optimal;
}

Stack* stack_construct(double input[], int size) {
  Stack* stack = new Stack;
  stack->size = size;
  stack->arr_length = optimal_size(size);
  stack->arr = new double[stack->arr_length];
  for (int i = 0; i < stack->size; i++) {
    stack->arr[i] = input[i];
  }
  return stack;
}
void stack_push(Stack& stack, double value) {
  stack.size++;
  stack.arr[stack.size - 1] = value;
  if (stack.size == stack.arr_length * 0.8) {
    stack.arr_length = optimal_size(stack.size);
    double* new_arr = new double[stack.arr_length];
    for (int i = 0; i < stack.size; i++) {
      new_arr[i] = stack.arr[i];
    }
    delete[] stack.arr;
    stack.arr = new_arr;
  }
}

double stack_pop(Stack& stack) {
  stack.size--;
  return stack.arr[stack.size];
}

int main() {
  double input[] = { 1.5, 2.2, 3.4 };
  Stack* stack = stack_construct(input, 3);
  cout << stack->size << endl << stack->arr[1] << endl;
  stack_push(*stack, 4.5);
  cout << stack->size << endl << stack->arr[3] << endl;
  cout << stack_pop(*stack);
  delete[] stack->arr;
  delete stack;
  return 0;
}
