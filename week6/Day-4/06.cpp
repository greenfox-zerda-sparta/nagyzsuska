#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void something(vector<double>& v) {
  unsigned int new_max_index = v.size() - 2;
  v[rand() % new_max_index] = v[v.size()-1];
  v.pop_back();
}

int main() {
  vector<double> v(30, 1.5);
  for (unsigned int i = 0; i < 20; i++) {
    something(v);
  }
  for (unsigned int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }
  //create a vector of doubles with the size of 30, with every element equal of 1.5
  //create functions that takes this vector, pick the last element of it and adding its value to
  //an other item from the vector(this item place is random) and remove the last element at the end
  //run this function 20 times, then print every element of the vector 

  return 0;
}