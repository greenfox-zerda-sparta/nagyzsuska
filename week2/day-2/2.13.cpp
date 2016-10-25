//============================================================================
// Name        : 13.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int factorial(int n){
	if (n == 1)
		return 1;
	else
		return n * factorial(n-1);
}

int main() {
	// create a function that returns it's input factorial
	cout << factorial(9) << endl;

	return 0;
}
