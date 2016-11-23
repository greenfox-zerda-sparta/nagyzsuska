
#include "MyStack.h"

MyStack::MyStack() {
}

MyStack::~MyStack() {
}

void MyStack::Push(int x) throw (MyErrorMessages) {
  if (m_top == m_index-1) {
    throw STACK_IS_FULL;
  }
  m_stack[++m_top] = x;
}

void MyStack::Pop() throw (MyErrorMessages) {
  if (m_top == -1) {
    throw STACK_IS_EMPTY;
  }
  m_top--;
}

std::string MyStack::interpretException(MyErrorMessages x) {
  if (x == STACK_IS_FULL) {
    return "Stack is full.";
  }
  if (x == STACK_IS_EMPTY) {
    return "Stack is empty.";
  }
}