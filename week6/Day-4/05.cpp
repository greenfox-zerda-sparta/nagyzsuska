#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  //create a vector of integers with the size of 10, fill them with random numbers
  //create a vector of doubles and reserve place for 10 items
  //push and item to the end of the vector with the double places
  //print which vectors size is higher (and why?)
  
  vector<int> v_int (10);
  unsigned int x = v_int.capacity();
  for (unsigned int i = 0; i < x; i++) {
    v_int.push_back(rand() % 100);
  }

  vector<double> v_double;
  v_double.reserve(10);
  v_double.push_back(1.2);
  
  cout << (v_int.size() > v_double.size() ? "v_int" : "v_double");
  return 0;
}