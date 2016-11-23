#include <iostream>
#include <string>

using namespace std;

template <class T>
void print_the_first_element(T* arr, T length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  // create a function template which takes in an array, and the size of it
  // print all the elements of the array
  int arr[] = { 1, 2, 3, 4, 5 };
  print_the_first_element(arr, 5);
  return 0;
}