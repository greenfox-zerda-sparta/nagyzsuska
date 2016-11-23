#include <iostream>
#include <string>

using namespace std;

template <class T>
class Simple {
private:
  T m_first, m_second;
public:
  T get_first() {
    return m_first;
  }
  T get_second() {
    return m_second;
  }
  void set_first(T m_first) {
    m_first = first;
  }
  void set_second(T m_second) {
    m_second = second;
  }
};



int main() {
  //Create a simple class template which contains 2 item and has both a get and a set method for these!
  return 0;
}