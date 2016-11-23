#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
#include <string>

using namespace std;

template <class T, class P>
class Simple {
private:
  T m_first;
  P m_second;
public:
  /*string get_first_and_second() {
    return toString.m_first + toString.m_second;
  }*/
  Simple(T first, P second);
  T get_first();
  P get_second();
  void set_first_and_second(T m_first, P m_second);
  double add();
  double subtract();
  double multiply();
  double divide();
};

#endif /* CALCULATOR_H_ */