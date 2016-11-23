#include <iostream>
#include <string>
using namespace std;

template <class T, class P>
  double sum_of_elements(T* arr, P length) {
    double sum = 0.0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }

 template<>
 double sum_of_elements<char, int>(char* arr, int length) {
    double sum = 0.0;
    for (int i = 0; i < length; i++) {
      sum += arr[i] - 'a' + 1;
    }
    return sum;
  }

int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  // Create a template specialization for string types, that it returns the sum of the string's first characters position in the alphabet
  //Sum<int> 
  int arr[] = { 1, 2, 3, 4, 5 };
  cout << sum_of_elements(arr, 5) << endl;
  char arr2[] = { 'a', 'b', 'c', 'd', 'e' };
  char c = 'a';
  cout << (int)c << endl;
  cout << sum_of_elements(arr2, 5) << endl;
  return 0;
}