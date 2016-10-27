//============================================================================
// Name        : 08.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void printTriangle(int num){
  string a[num][num*2-1];
  string s = "*";
  string s2 = "**";
  string ws = " ";
  int eltolas = num-1;
  for (int i = 0; i < num; i++){
    for (int j = 0; j < num*2-1; j++){
      a [i][j]=ws;
      if (j==eltolas){
      a [i][j]=s;
      s=s+s2;
      }
    }eltolas--;
  }
  for (int i = 0; i < num; i++){
    for (int j = 0; j < num*2-1; j++){
      cout << a[i][j];
    }
    cout << endl;
  }
}
int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument
  printTriangle(9);

  return 0;
}
