#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increase_an_element_by_1(vector<vector<int>>& v, unsigned int index1, unsigned int index2) {
  v[index1][index2] += 1;
}

void put_an_element(vector<vector<int>>& v, int number) {
  for (unsigned int i = 0; i < v.size(); i++) {
    v[i].push_back(number);
  }
}

void increase_the_elements(vector<vector<int>>& v, unsigned int index) {
  for (unsigned int i = 0; i < v.size(); i++) {
    if (v[index][i] == 0) {
      v[index][i] += 1;
    }
  }
}

void reverse_verticaly(vector<vector<int>>& v) {
  for (unsigned int k = 0; k < v.size(); k++) {
    for (unsigned int i = 0; i < v.size(); i++) {
      for (unsigned int j = i + 1; j < v.size()+1; j++) {
        int temp = v[k][i];
        v[k][i] = v[k][j];
        v[k][j] = temp;
      }
    }
  }
}

void reverse_horisontaly(vector<vector<int>>& v) {
  unsigned int k = v.size() - 1;
  for (unsigned int i = 0; i < v.size() / 2; i++) {
    v[i].swap(v[k]);
    k--;
  }
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

  vector<vector<int>> v(4, vector<int>(4, 0));
  for (int i = 0; i < v.size(); i++) {
    increase_an_element_by_1(v, i, i);
  }
  increase_the_elements(v, 0);
  put_an_element(v, 1);
  print_vector(v);
  cout << endl;
  reverse_verticaly(v);
  print_vector(v);
  cout << endl;
  reverse_horisontaly(v);
  print_vector(v);
  //reverse_horisontaly(v);
  //print_vector(v);
  //Create a 2 dimensional vector with matrix!
  // 1 0 0 0
  // 0 1 0 0
  // 0 0 1 0
  // 0 0 0 1
  // Extend it to the following format:
  // 1 1 1 1 1
  // 0 1 0 0 1
  // 0 0 1 0 1
  // 0 0 0 1 1
  // 0 0 0 0 1
  // Mirror it horizontaly!
  // Mirror it verticaly!
  return 0;
}