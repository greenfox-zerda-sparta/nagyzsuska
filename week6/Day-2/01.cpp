#include <iostream>
#include <string>

using namespace std;

template <class T>
T print_the_first_element(T* arr) {
  return arr[0];
}

int main() {
  // create a function template the takes in a fix long array and prints the 1st element of it
  int arr[] = { 1, 2, 3, 4, 5 };
  cout << print_the_first_element(arr) << endl;
  return 0;
}
