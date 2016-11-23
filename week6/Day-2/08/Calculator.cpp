#include <iostream>
#include <string>
#include "Calculator.h"

using namespace std;

template <class T, class P>
Simple<T, P>::Simple(T first, P second) {
  m_first = first;
  m_second = second;
}

/*template <class T, class P>
bool Simple<T, P>::has_only_digit() {
  bool has_only_digits = true;
  for (size_t n = 0; n < T.length(); n++)
  {
    if (!isdigit(T[n]))
    {
      has_only_digits = false;
      break;
    }
  }
  if (!has_only_digits) {
    std::cerr << "The first item is not a number";
  }
  return has_only_digits;
}*/


template <class T, class P>
  T Simple<T,P>::get_first() {
    return m_first;
  }
  
template <class T, class P>
  P Simple<T, P>::get_second() {
    return m_second;
  }

template <class T, class P>
void Simple<T, P>::set_first_and_second(T m_first, P m_second) {
  m_first = first;
  m_second = second;
}

template <class T, class P>
double Simple<T, P>::add() {
  return m_first + m_second;
}

template <class T, class P>
double Simple<T, P>::subtract() {
  return m_first - m_second;
}

template <class T, class P>
double Simple<T, P>::multiply() {
  return m_first * m_second;
}

template <class T, class P>
double Simple<T, P>::divide() throw (char*){
  if (m_second == 0 || m_second == 0.0) {
    throw "Divide by zero error";
  } else {
    return m_first / m_second;
  }
}