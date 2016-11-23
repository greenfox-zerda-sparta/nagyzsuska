#ifndef MYSTACK_H_
#define MYSTACK_H_

#include <string>

const int m_index = 5;

class MyStack {
private:
  int m_top = -1;
  int m_stack[m_index];
public:
  MyStack();
  ~MyStack();
  enum MyErrorMessages {
    STACK_IS_FULL,
    STACK_IS_EMPTY
  };
  void Push(int x);
  void Pop();
  std::string interpretException(MyErrorMessages x);
};

#endif /* MYSTACK_H_ */