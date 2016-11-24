#include <iostream>
#include <string>
#include <vector>

using namespace std;


void increase_the_element(vector<vector<int>>& v, unsigned int index, int number) {
  v[index].push_back(number);
}

void increase_the_elements(vector<vector<int>>& v, unsigned int index) {
  for (int i = 0; i < v.size(); i++)
  v[index][i] += 1;
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
  increase_the_element(v, 2, 0);
  increase_the_elements(v, 1);
  print_vector(v);
  
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)
  //add_vector(v);
  //print_vector(v);
  return 0;
}