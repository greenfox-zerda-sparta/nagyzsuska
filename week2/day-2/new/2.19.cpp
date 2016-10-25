//============================================================================
// Name        : 19.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num){
	if ((num!=2 && num%2==0)||(num!=3 && num%3==0)||(num%4==0)||(num!=5 && num%5==0)||(sqrt(num)-((int)sqrt(num))==0)){
		return false;
	} else {
		return true;
	}
}

int main(){
  int number = 121;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.
  cout << isPrime(number);
  return 0;
}
