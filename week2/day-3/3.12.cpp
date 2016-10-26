//============================================================================
// Name        : 2.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {

	// Implement this function to create the union of a and b into the array result!
  for(int i = 0; i < l_a; i++){
    result[i] = a[i];
    int k = (l_a)-1;
    for(int j = 0; j < l_b; j++){
      int i = 0;
      while(i < l_a && a[i] != b[j])
      i++;
      if(i >= l_a){
        k++;
        result[k] = b[j];
      }
    }
  }
}

int main(int argc, char** argv){
	int a[3] = {1,2,3};
	int b[3] = {4,5,6};
	int c[6];
	safeUnion(a,3,b,3,c,6);
	for (int i = 0; i<6; i++) cout <<c[i] << endl;

}

