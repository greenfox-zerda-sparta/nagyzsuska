#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  //Create a vector of integers
  //reserve place for 10 element, then fill those place with random numbers between 0 and 10
  vector<int> v;
  v.reserve(10);
  cout << v.capacity() << endl;
  unsigned int x = v.capacity();
  for (unsigned int i = 0; i < x; i++) {
    v.push_back(rand() % 10);
    cout << v[i] << endl;
  }

  return 0;
}