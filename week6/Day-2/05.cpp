#include <iostream>
#include <string>

using namespace std;

template <class T1, class T2>

void which_is_stored_in_more_bytes2(T1 a, T2 b) {
  cout << (sizeof(a) > sizeof(b) ? a : b) << endl;
}



int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then
  int a = 5;
  double b = 6.5;
  char c = 'z';
  char* s = "miez";
  cout << sizeof(a) << endl;
  cout << sizeof(b) << endl;
  cout << sizeof(c) << endl;
  cout << sizeof(s) << endl;
  which_is_stored_in_more_bytes2(a, b);
  which_is_stored_in_more_bytes2(c, b);

  return 0;
}