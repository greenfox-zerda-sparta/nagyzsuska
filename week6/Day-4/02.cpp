#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  //create an integer vector with the size of 5 and print all elements of it
  vector<int> v(5);
  unsigned int x = v.size();
  for (unsigned int i = 0; i < x; i++) {
    v[i] = i+1;
    cout << v[i] << endl;
  }
  return 0;
}