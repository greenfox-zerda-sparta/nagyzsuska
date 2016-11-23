#include <iostream>
#include <string>

using namespace std;


template <class T>
void sort_and_print(T* arr, T length) {
  int i, j;
  T temp;

  for (i = 0; i < length - 1; i++)
    for (j = i + 1; j < length; j++)
      if (arr[j] > arr[i])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
   for (int i = 0; i < length; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  // create a function template that takes an array and sort it in a descending order
  int arr[] = { 1, 2, 3, 4, 5 };
  sort_and_print(arr, 5);
  return 0;
}