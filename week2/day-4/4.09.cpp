//============================================================================
// Name        : 09.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
using namespace std;

void printDiamond(int num){
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
  for (int i = num-2; i >= 0; i--){
    for (int j = 0; j < num*2-1; j++){
      cout << a[i][j];
    }
    cout << endl;
  }
}

int main() {
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument
  printDiamond(10);
  return 0;
}
