#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_vector(vector<vector<int>>& v) {
  v.push_back(vector<int>(5, 0));
  
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
  //create a vector of vector of integers, yeah a vector that holds vectors of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector at the begining
  //create a function that will add a new vector of integers to the end of our outer vector
  //printVector(v);
  add_vector(v);
  print_vector(v);
  return 0;
}