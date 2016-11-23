#include <iostream>
#include <string>

using namespace std;

template <class T>
T print_the_first_element(T* arr) {
  return (arr[0] + arr[3]);
}

int main() {
  // create a function template that takes 3 long array 
  // and add the 1st element of it to the third
  int arr[] = { 1, 2, 3, 4, 5 };
  cout << print_the_first_element(arr) << endl;
  return 0;
}