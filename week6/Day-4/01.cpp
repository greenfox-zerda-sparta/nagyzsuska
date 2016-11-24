#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  //create an integer vector with the size of 5 and print the 3rd element of it
  vector<int> v(5);
  unsigned int x = v.size();
  for (unsigned int i = 0; i < x; i++) {
    v[i] = i;
  }
  cout << v[2] << endl;
  return 0;
}