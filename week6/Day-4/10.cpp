#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

void print_vector(const vector<int>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}

int main() {
  unsigned int count_of_divisors = 2;
  for (unsigned int i = 2; i <= 2400 / 2; i++) {
    if (2400 % i == 0) {
      count_of_divisors++;
    }
  }
  cout << count_of_divisors << endl;
  
  vector<int> v;
  v.reserve(count_of_divisors);
  for (unsigned int i = 0; i < v.capacity(); i++) {
    v.push_back(rand() % 2400);
    cout << v[i] << endl;
  }
  
  sort(v.begin(), v.end());
  print_vector(v);

  //find how much integer divisor 2400 has
  //create a vector of doubles, reserve place for the divisors of 2400
  //fill this places with random numbers from 0 to 2400
  //sort them in ascending order

  return 0;
}