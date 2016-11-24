#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increase_an_element_by_1(vector<vector<int>>& v, unsigned int index1, unsigned int index2) {
  v[index1][index2] += 1;
}

void print_vector(vector<vector<int>>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    for (unsigned int j = 0; j < v[i].size(); j++) {
      cout << v[i][j];
    }
    cout << endl;
  }
}

int main() {

  vector<vector<int>> v(5, vector<int>(5, 0));
  increase_an_element_by_1(v, 2, 3);
  print_vector(v);
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase a specific element of an inner vector by 1

  return 0;
}