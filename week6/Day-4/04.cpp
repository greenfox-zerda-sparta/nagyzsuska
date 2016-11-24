#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_character(vector<char>& v) {
  char c;
  cout << "Add a character: ";
  cin >> c;
  v.push_back(c);
}

int main() {

  vector<char> v;
  //create a vector of chars with the size of zero;
  //write a function where the user can add characters to the end of this vector
  
  add_character(v);
  add_character(v);
  add_character(v);
  cout << v[0] << endl;
  cout << v.capacity() << endl;

  return 0;
}