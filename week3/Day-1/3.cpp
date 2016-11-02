//============================================================================
// Name        : 03.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {

  int *pointer = nullptr;
  int count;
  cout << "Add a count: " << endl;
  cin >> count;
  pointer = new int[count];
  int num;
  for(int counter = 0; counter < count; counter++){
    cout << "Enter the " << counter+1 << ". number: ";
    cin >> num;
    *(pointer+counter) = num;
  }
  double sum;
  for (int counter = 0; counter < count; counter++) {
    sum += *(pointer+counter);
  }
  cout << sum/count << endl;
  delete []pointer;
  pointer = nullptr;
  return 0;
}
